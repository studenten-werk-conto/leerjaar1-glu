extern bool bCallbackManagerInitialized;
CCallbackMgr* GCallbackMgr();
bool CallbackDone = false;

void S_CALLTYPE Callbacks_RunFrame(HSteamPipe hSteamPipe, bool bGameServerCallbacks)
{
	if (bGameServerCallbacks == false && SteamClient_Client != nullptr && hSteamPipe == hPipe)
	{
		if (SteamUtilsForCallbacks == nullptr)
		{
			SteamUtilsForCallbacks = (ISteamUtils*)SteamClient_Client->GetISteamGenericInterface(0, hPipe, STEAMUTILS_INTERFACE_VERSION);

			if (SteamUtilsForCallbacks != nullptr)
			{
				SteamUtilsForCallbacks->GetAppID();
				SteamUtilsForCallbacks->RunFrame();
			}
		}
		else
		{
			// Official dll only calls GetAppID the first time
			SteamUtilsForCallbacks->RunFrame();
		}

		if (SteamControllerForCallbacks == nullptr)
			SteamControllerForCallbacks = (ISteamController*)SteamClient_Client->GetISteamGenericInterface(hUser, hPipe, STEAMCONTROLLER_INTERFACE_VERSION);

		if (SteamInputForCallbacks == nullptr)
			SteamInputForCallbacks = (ISteamInput*)SteamClient_Client->GetISteamGenericInterface(hUser, hPipe, STEAMINPUT_INTERFACE_VERSION);

		// Official dll calls ISteamInput::RunFrame first
		if (SteamInputForCallbacks != nullptr)
			SteamInputForCallbacks->RunFrame();

		if (SteamControllerForCallbacks != nullptr)
			SteamControllerForCallbacks->RunFrame();
	}

	return;
}

S_API void S_CALLTYPE SteamAPI_ManualDispatch_Init()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_ManualDispatch_Init\r\n");

	ISteamClient* ManualDispatchSteamClient = SteamClient_Server;

	if (SteamClient_Client != nullptr)
		ManualDispatchSteamClient = SteamClient_Client;

	if (ManualDispatchSteamClient != nullptr)
	{
		if (UseManualDispatch != 2)
		{
			if (UseManualDispatch == 0 || UseManualDispatch == 3)
			{
				UseManualDispatch = 1;
				ManualDispatchSteamClient->Set_SteamAPI_CCheckCallbackRegisteredInProcess(nullptr);
			}
			else
			{
				WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_Init has already been called!\r\n");
			}
		}
		else
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_Init --> Standard dispatch has already been selected!\r\n");
		}
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_Init --> SteamAPI_Init, SteamInternal_GameServer_Init or SteamGameServer_InitSafe must be called first!\r\n");
	}

	return;
}

S_API void S_CALLTYPE SteamAPI_ManualDispatch_RunFrame(HSteamPipe hSteamPipe)
{
	if (UseManualDispatch == 1)
	{
		if (hSteamPipe != 0)
		{
			if (hSteamPipe == hPipe)
			{
				Callbacks_RunFrame(hSteamPipe, false);
			}
			else
			{
				if (hSteamPipe != hPipeServer)
					WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_RunFrame --> hSteamPipe is wrong!\r\n");
			}
		}
		else
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_RunFrame --> hSteamPipe is zero!\r\n");
		}
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_RunFrame --> SteamAPI_ManualDispatch_Init must be called first!\r\n");
	}

	return;
}

S_API bool S_CALLTYPE SteamAPI_ManualDispatch_GetNextCallback(HSteamPipe hSteamPipe, CallbackMsg_t* pCallbackMsg)
{
	if (UseManualDispatch == 1)
	{
		CCallbackMgr* pCallbackManager = GCallbackMgr();

		if (pCallbackManager->oSteam_BGetCallback != nullptr)
		{
			if (pCallbackMsg != nullptr)
			{
				if (pCallbackManager->bIsRunningCallbacks == false)
				{
					pCallbackManager->bIsRunningCallbacks = true;

					bool BGetCallback = pCallbackManager->oSteam_BGetCallback(hSteamPipe, pCallbackMsg);

					if (BGetCallback == true)
					{
						pCallbackManager->ManualDispatchCallback = pCallbackMsg->m_iCallback;
						pCallbackManager->ManualDispatchCallbackSize = pCallbackMsg->m_cubParam;
						return BGetCallback;
					}

					pCallbackManager->bIsRunningCallbacks = false;
				}
				else
				{
					WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetNextCallback --> Waiting for SteamAPI_ManualDispatch_FreeLastCallback!\r\n");
				}
			}
			else
			{
				WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetNextCallback --> pCallbackMsg is nullptr!\r\n");
			}
		}
		else
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetNextCallback --> Failed to get Steam_BGetCallback!\r\n");
		}
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetNextCallback --> SteamAPI_ManualDispatch_Init must be called first!\r\n");
	}

	return false;
}

S_API void S_CALLTYPE SteamAPI_ManualDispatch_FreeLastCallback(HSteamPipe hSteamPipe)
{
	if (UseManualDispatch == 1)
	{
		CCallbackMgr* pCallbackManager = GCallbackMgr();

		if (pCallbackManager->oSteam_FreeLastCallback != nullptr)
		{
			if (pCallbackManager->bIsRunningCallbacks == true)
			{
				pCallbackManager->oSteam_FreeLastCallback(hSteamPipe);
				pCallbackManager->ManualDispatchCallback = 0;
				pCallbackManager->ManualDispatchCallbackSize = 0;
				pCallbackManager->bIsRunningCallbacks = false;
			}
			else
			{
				WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_FreeLastCallback --> SteamAPI_ManualDispatch_GetNextCallback was not called!\r\n");
			}
		}
		else
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_FreeLastCallback --> Failed to get Steam_FreeLastCallback!\r\n");
		}
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_FreeLastCallback --> SteamAPI_ManualDispatch_Init must be called first!\r\n");
	}

	return;
}

S_API bool S_CALLTYPE SteamAPI_ManualDispatch_GetAPICallResult(HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void* pCallback, int cubCallback, int iCallbackExpected, bool* pbFailed)
{
	if (UseManualDispatch == 1)
	{
		CCallbackMgr* pCallbackManager = GCallbackMgr();

		if (pCallbackManager->oSteam_GetAPICallResult != nullptr)
		{
			if (pCallback != nullptr && cubCallback > 0 && pbFailed != nullptr)
			{
				if (pCallbackManager->bIsRunningCallbacks == true)
				{
					if (pCallbackManager->ManualDispatchCallback == SteamAPICallCompleted_t::k_iCallback && pCallbackManager->ManualDispatchCallbackSize == sizeof(SteamAPICallCompleted_t))
					{
						pCallbackManager->ManualDispatchCallback = 0;
						pCallbackManager->ManualDispatchCallbackSize = 0;
						return pCallbackManager->oSteam_GetAPICallResult(hSteamPipe, hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
					}
					else
					{
						WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetAPICallResult --> Callback is not SteamAPICallCompleted_t!\r\n");
					}
				}
				else
				{
					WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetAPICallResult --> SteamAPI_ManualDispatch_GetNextCallback was not called!\r\n");
				}
			}
			else
			{
				WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetAPICallResult --> Invalid arguments supplied!\r\n");
			}
		}
		else
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetAPICallResult --> Failed to get Steam_GetAPICallResult!\r\n");
		}
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_ManualDispatch_GetAPICallResult --> SteamAPI_ManualDispatch_Init must be called first!\r\n");
	}

	return false;
}

S_API void S_CALLTYPE SteamAPI_RegisterCallResult(class CCallbackBase *pCallback, SteamAPICall_t hAPICall)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_RegisterCallResult\r\n");

	if (UseManualDispatch == 1)
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_RegisterCallResult --> Manual dispatch has already been selected!\r\n");
		return;
	}

	UseManualDispatch = 2;

	CCallbackMgr* pCallbackManager = GCallbackMgr();
	pCallbackManager->RegisterCallResult(pCallback, hAPICall);

	return;
}

S_API void S_CALLTYPE SteamAPI_RegisterCallback(class CCallbackBase *pCallback, int32 iCallback)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_RegisterCallback\r\n");

	if (UseManualDispatch == 1)
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_RegisterCallback --> Manual dispatch has already been selected!\r\n");
		return;
	}

	UseManualDispatch = 2;

	CCallbackMgr* pCallbackManager = GCallbackMgr();
	pCallbackManager->RegisterCallback(pCallback, iCallback);

	return;
}

S_API void S_CALLTYPE SteamAPI_UnregisterCallResult(class CCallbackBase *pCallback, SteamAPICall_t hAPICall)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_UnregisterCallResult\r\n");

	if (UseManualDispatch == 1)
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_UnregisterCallResult --> Manual dispatch has already been selected!\r\n");
		return;
	}

	UseManualDispatch = 2;

	if (bCallbackManagerInitialized == true)
	{
		CCallbackMgr* pCallbackManager = GCallbackMgr();
		pCallbackManager->UnregisterCallResult(pCallback, hAPICall);
	}

	return;
}

S_API void S_CALLTYPE SteamAPI_UnregisterCallback(class CCallbackBase *pCallback)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_UnregisterCallback\r\n");

	if (UseManualDispatch == 1)
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] SteamAPI_UnregisterCallback --> Manual dispatch has already been selected!\r\n");
		return;
	}

	UseManualDispatch = 2;

	if (bCallbackManagerInitialized == true)
	{
		CCallbackMgr* pCallbackManager = GCallbackMgr();
		pCallbackManager->UnregisterCallback(pCallback);
	}

	return;
}

S_API void S_CALLTYPE SteamAPI_RunCallbacks()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_RunCallbacks\r\n");

	if (UseManualDispatch == 1)
	{
		SteamAPI_ReleaseCurrentThreadMemory();
		return;
	}

	UseManualDispatch = 2;

	if (hPipe == 0)
	{
		SteamAPI_ReleaseCurrentThreadMemory();
		return;
	}

	EnterCriticalSection(&CallbackCriticalSection);

	Steam_RunCallbacks(hPipe, false);

	LeaveCriticalSection(&CallbackCriticalSection);

	SteamAPI_ReleaseCurrentThreadMemory();

	return;
}

S_API void S_CALLTYPE SteamAPI_SetTryCatchCallbacks(bool bTryCatchCallbacks)
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SetTryCatchCallbacks\r\n");

	TryCatch = bTryCatchCallbacks;
	return;
}

S_API HSteamUser S_CALLTYPE Steam_GetHSteamUserCurrent()
{
	_cprintf_s("[Steam_API_Base] Steam_GetHSteamUserCurrent\r\n");

	CCallbackMgr* pCallbackManager = GCallbackMgr();
	return pCallbackManager->HSteamUserCurrent;
}

S_API void S_CALLTYPE Steam_RegisterInterfaceFuncs(void *hModule)
{
	_cprintf_s("[Steam_API_Base] Steam_RegisterInterfaceFuncs\r\n");

	if (hModule == nullptr)
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Steam_RegisterInterfaceFuncs --> Dll handle is nullptr!\r\n");
		return;
	}

	if (hSteamclient_Client != nullptr)
	{
		if (hModule != hSteamclient_Client)
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Steam_RegisterInterfaceFuncs --> Dll handle is not for steamclient(64).dll (Client)!\r\n");
			return;
		}
	}
	else if (hSteamclient_Server != nullptr)
	{
		if (hModule != hSteamclient_Server)
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Steam_RegisterInterfaceFuncs --> Dll handle is not for steamclient(64).dll (Server)!\r\n");
			return;
		}
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Steam_RegisterInterfaceFuncs --> No Dll is loaded!\r\n");
		return;
	}

	CCallbackMgr* pCallbackManager = GCallbackMgr();
	pCallbackManager->oSteam_BGetCallback = _Steam_BGetCallback(GetProcAddress((HMODULE)hModule, "Steam_BGetCallback"));
	pCallbackManager->oSteam_FreeLastCallback = _Steam_FreeLastCallback(GetProcAddress((HMODULE)hModule, "Steam_FreeLastCallback"));
	pCallbackManager->oSteam_GetAPICallResult = _Steam_GetAPICallResult(GetProcAddress((HMODULE)hModule, "Steam_GetAPICallResult"));

	return;
}

S_API void S_CALLTYPE Steam_RunCallbacks(HSteamPipe hSteamPipe, bool bGameServerCallbacks)
{
	_cprintf_s("[Steam_API_Base] Steam_RunCallbacks\r\n");

	if (UseManualDispatch == 1)
		return;

	UseManualDispatch = 2;

	if (hSteamPipe == 0)
		return;

	CCallbackMgr* pCallbackManager = GCallbackMgr();

	Callbacks_RunFrame(hSteamPipe, bGameServerCallbacks);

	if (pCallbackManager->bIsRunningCallbacks == false)
	{
		pCallbackManager->bIsRunningCallbacks = true;

		if (TryCatch == true)
			pCallbackManager->RunCallbacksTryCatch(hSteamPipe, bGameServerCallbacks);
		else
			pCallbackManager->RunCallbacks(hSteamPipe, bGameServerCallbacks);

		pCallbackManager->bIsRunningCallbacks = false;
	}

	return;
}