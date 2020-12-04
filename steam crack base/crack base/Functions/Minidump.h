static CWin32MiniDump s_Win32MiniDump;

void SetMinidumpSteamID(uint64 SteamID)
{
	_cprintf_s("[Steam_API_Base] SetMinidumpSteamID\r\n");

	if (SteamID != 0)
	{
		if (oBreakpad_SteamSetSteamID != nullptr)
			_cprintf_s("[Steam_API_Base] Steam_SetMinidumpSteamID: Caching Steam ID: %lld [API loaded: Yes]\r\n", SteamID);
		else
			_cprintf_s("[Steam_API_Base] Steam_SetMinidumpSteamID: Caching Steam ID: %lld [API loaded: No]\r\n", SteamID);

		BreakpadSteamID = SteamID;

		if (oBreakpad_SteamSetSteamID != nullptr)
		{
			_cprintf_s("[Steam_API_Base] Steam_SetMinidumpSteamID: Setting Steam ID: %lld\r\n", SteamID);
			oBreakpad_SteamSetSteamID(SteamID);
		}
	}

	return;
}

void LoadBreakpad(HMODULE hSteamclient)
{
	_cprintf_s("[Steam_API_Base] LoadBreakpad\r\n");

	if (UsingBreakpadCrashHandler == false)
	{
		_cprintf_s("[Steam_API_Base] LoadBreakpad --> SteamAPI_UseBreakpadCrashHandler has not been called!\r\n");
		return;
	}

	HMODULE hSteamclient_Breakpad = nullptr;

	if (hSteamclient != nullptr)
	{
		hSteamclient_Breakpad = hSteamclient;
	}
	else
	{
		if (hSteamclient_Client != nullptr)
		{
			hSteamclient_Breakpad = hSteamclient_Client;
		}
		else if (hSteamclient_Server != nullptr)
		{
			hSteamclient_Breakpad = hSteamclient_Server;
		}
		else
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] LoadBreakpad --> No steamclient.dll is loaded!\r\n");
			return;
		}
	}

	_cprintf_s("[Steam_API_Base] LoadBreakpad --> Looking up breakpad functions from steamclient\r\n");

	oBreakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId = (_Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId)GetProcAddress(hSteamclient_Breakpad, "Breakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId");

	if (oBreakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId == nullptr)
		return;

	oBreakpad_SteamWriteMiniDumpSetComment = (_Breakpad_SteamWriteMiniDumpSetComment)GetProcAddress(hSteamclient_Breakpad, "Breakpad_SteamWriteMiniDumpSetComment");

	if (oBreakpad_SteamWriteMiniDumpSetComment == nullptr)
		return;

	oBreakpad_SteamSetSteamID = (_Breakpad_SteamSetSteamID)GetProcAddress(hSteamclient_Breakpad, "Breakpad_SteamSetSteamID");

	if (oBreakpad_SteamSetSteamID == nullptr)
		return;

	oBreakpad_SteamSetAppID = (_Breakpad_SteamSetAppID)GetProcAddress(hSteamclient_Breakpad, "Breakpad_SteamSetAppID");

	if (oBreakpad_SteamSetAppID == nullptr)
		return;

	oBreakpad_SteamMiniDumpInit = (_Breakpad_SteamMiniDumpInit)GetProcAddress(hSteamclient_Breakpad, "Breakpad_SteamMiniDumpInit");

	if (oBreakpad_SteamMiniDumpInit == nullptr)
		return;

	_cprintf_s("[Steam_API_Base] LoadBreakpad --> Calling BreakpadMiniDumpSystemInit\r\n");

	oBreakpad_SteamMiniDumpInit(BreakpadAppID, szBreakpadVersion, szBreakpadTimeAndDate, FullMemoryDumps, BreakpadContext, BreakpadMinidumpCallback);

	if (BreakpadSteamID != 0)
		SetMinidumpSteamID(BreakpadSteamID);

	return;
}

S_API void S_CALLTYPE SteamAPI_SetBreakpadAppID(uint32 unAppID)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SetBreakpadAppID\r\n");

	if (BreakpadAppID != unAppID)
	{
		_cprintf_s("[Steam_API_Base] Setting breakpad minidump AppID --> %u\r\n", unAppID);
		BreakpadAppID = unAppID;
	}

	if (oBreakpad_SteamSetAppID == nullptr)
		LoadBreakpad(nullptr);

	if (oBreakpad_SteamSetAppID != nullptr)
		oBreakpad_SteamSetAppID(BreakpadAppID);

	return;
}

S_API void S_CALLTYPE SteamAPI_SetMiniDumpComment(const char *pchMsg)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SetMiniDumpComment\r\n");

	if (pchMsg != nullptr && strlen(pchMsg) != 0)
	{
		s_Win32MiniDump.ClearComment();
		s_Win32MiniDump.SetComment(pchMsg);

		if (oBreakpad_SteamWriteMiniDumpSetComment == nullptr)
			LoadBreakpad(nullptr);

		if (oBreakpad_SteamWriteMiniDumpSetComment != nullptr)
			oBreakpad_SteamWriteMiniDumpSetComment(pchMsg);
	}

	return;
}

S_API void S_CALLTYPE SteamAPI_UseBreakpadCrashHandler(const char *pchVersion, const char *pchDate, const char *pchTime, bool bFullMemoryDumps, void *pvContext, PFNPreMinidumpCallback m_pfnPreMinidumpCallback)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_UseBreakpadCrashHandler\r\n");

	SecureZeroMemory(szBreakpadVersion, sizeof(szBreakpadVersion));
	SecureZeroMemory(szBreakpadTimeAndDate, sizeof(szBreakpadTimeAndDate));
	BreakpadContext = nullptr;
	BreakpadMinidumpCallback = nullptr;

	UsingBreakpadCrashHandler = true;
	FullMemoryDumps = bFullMemoryDumps;

	if (pchVersion != nullptr && strlen(pchVersion) != 0)
		_snprintf_s(szBreakpadVersion, sizeof(szBreakpadVersion), _TRUNCATE, "%s", pchVersion);

	BreakpadContext = pvContext;
	BreakpadMinidumpCallback = m_pfnPreMinidumpCallback;

	SYSTEMTIME Time = { 0 };
	GetLocalTime(&Time);

	_snprintf_s(szBreakpadTimeAndDate, sizeof(szBreakpadTimeAndDate), _TRUNCATE, "%04d%02d%02d%02d%02d%02d", Time.wYear, Time.wMonth, Time.wDay, Time.wHour, Time.wMinute, Time.wSecond);

	return;
}

S_API void S_CALLTYPE SteamAPI_WriteMiniDump(uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_WriteMiniDump\r\n");

	if (pvExceptionInfo != nullptr)
	{
		s_Win32MiniDump.WriteUsingExceptionInfo(uStructuredExceptionCode, (_EXCEPTION_POINTERS*)pvExceptionInfo);
		s_Win32MiniDump.ClearComment();

		if (oBreakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId == nullptr)
			LoadBreakpad(nullptr);

		if (oBreakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId != nullptr)
			oBreakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId(uStructuredExceptionCode, pvExceptionInfo, uBuildID);
	}

	return;
}