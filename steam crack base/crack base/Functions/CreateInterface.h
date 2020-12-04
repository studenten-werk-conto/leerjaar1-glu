S_API void* S_CALLTYPE SteamInternal_CreateInterface(const char *ver)
{
	if (ver != nullptr)
	{
		_cprintf_s("[Steam_API_Base] SteamInternal_CreateInterface --> %s\r\n", ver);

		HMODULE hDll = hSteamclient_Client;

		if (hSteamclient_Server != nullptr)
			hDll = hSteamclient_Server;

		if (hDll != nullptr)
		{
			oCreateInterface = (_CreateInterface)GetProcAddress(hDll, "CreateInterface");

			if (oCreateInterface != nullptr)
				return oCreateInterface(ver, nullptr);
		}
	}

	WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamInternal_CreateInterface --> return nullptr!\r\n");
	return nullptr;
}

S_API void* S_CALLTYPE SteamGameServerInternal_CreateInterface(const char *Interface)
{
	if (Interface != nullptr)
	{
		_cprintf_s("[Steam_API_Base] SteamGameServerInternal_CreateInterface --> %s\r\n", Interface);

		if (hSteamclient_Server != nullptr)
		{
			oCreateInterface = (_CreateInterface)GetProcAddress(hSteamclient_Server, "CreateInterface");

			if (oCreateInterface != nullptr)
				return oCreateInterface(Interface, nullptr);
		}
	}

	WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamGameServerInternal_CreateInterface --> return nullptr!\r\n");
	return nullptr;
}

S_API void* S_CALLTYPE SteamInternal_FindOrCreateUserInterface(HSteamUser hSteamUser, const char *pszVersion)
{
	if (pszVersion != nullptr)
	{
		_cprintf_s("[Steam_API_Base] SteamInternal_FindOrCreateUserInterface --> %s\r\n", pszVersion);

		if (SteamClient_Client != nullptr && hPipe != 0)
			return SteamClient_Client->GetISteamGenericInterface(hSteamUser, hPipe, pszVersion);

		char szSteamInterface[MAX_PATH] = { 0 };
		_snprintf_s(szSteamInterface, MAX_PATH, _TRUNCATE, "[Steam_API_Base] Tried to access Steam interface %s before SteamAPI_Init succeeded!\r\n", pszVersion);

		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, szSteamInterface);
	}

	WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamInternal_FindOrCreateUserInterface --> return nullptr!\r\n");
	return nullptr;
}

S_API void* S_CALLTYPE SteamInternal_FindOrCreateGameServerInterface(HSteamUser hSteamUser, const char *pszVersion)
{
	if (pszVersion != nullptr)
	{
		_cprintf_s("[Steam_API_Base] SteamInternal_FindOrCreateGameServerInterface --> %s\r\n", pszVersion);

		if (SteamClient_Server != nullptr && hPipeServer != 0)
			return SteamClient_Server->GetISteamGenericInterface(hSteamUser, hPipeServer, pszVersion);

		char szSteamInterface[MAX_PATH] = { 0 };
		_snprintf_s(szSteamInterface, MAX_PATH, _TRUNCATE, "[Steam_API_Base] Tried to access Steam interface %s before SteamInternal_GameServer_Init succeeded!\r\n", pszVersion);

		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, szSteamInterface);
	}

	WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamInternal_FindOrCreateGameServerInterface --> return nullptr!\r\n");
	return nullptr;
}