S_API void S_CALLTYPE SteamAPI_Shutdown()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_Shutdown\r\n");

	if (SteamClient_Client != nullptr)
	{
		InitClientPointers = false;
		GetInterfacePointers.Clear();

		if (hUser != 0)
		{
			SteamClient_Client->ReleaseUser(hPipe, hUser);
			hUser = 0;
		}

		if (hPipe != 0)
		{
			SteamClient_Client->BReleaseSteamPipe(hPipe);
			hPipe = 0;
		}

		SteamUtilsForCallbacks = nullptr;
		SteamControllerForCallbacks = nullptr;
		SteamInputForCallbacks = nullptr;

		bool DllShutdown = SteamClient_Client->BShutdownIfAllPipesClosed();

		if (DllShutdown == false)
			SteamAPI_ReleaseCurrentThreadMemory();

		if (InitGameServerPointers == false)
		{
			oReleaseThreadLocalMemory = nullptr;
			SteamClientSafe = nullptr;
		}

		SteamClient_Client = nullptr;
		UseManualDispatch = 3;

		FreeLibrary(hSteamclient_Client);

		hSteamclient_Client = nullptr;

		oBreakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId = nullptr;
		oBreakpad_SteamWriteMiniDumpSetComment = nullptr;
		oBreakpad_SteamSetSteamID = nullptr;
		oBreakpad_SteamSetAppID = nullptr;
		oBreakpad_SteamMiniDumpInit = nullptr;

		ContextCounter++;
	}

	return;
}

S_API void S_CALLTYPE SteamGameServer_Shutdown()
{
	_cprintf_s("[Steam_API_Base] SteamGameServer_Shutdown\r\n");

	if (pSteamGameServer != nullptr)
	{
		if (pSteamGameServer->BLoggedOn() == true)
		{
			pSteamGameServer->LogOff();

			while (1)
			{
				if (pSteamGameServer->BLoggedOn() == false)
					break;
			}
		}
		pSteamGameServer = nullptr;
	}

	if (SteamClient_Server != nullptr)
	{
		InitGameServerPointers = false;
		GetGameServerInterfacePointers.Clear();

		if (hPipeServer != 0 && hUserServer != 0)
		{
			SteamClient_Server->ReleaseUser(hPipeServer, hUserServer);
			SteamClient_Server->BReleaseSteamPipe(hPipeServer);

			hUserServer = 0;
			hPipeServer = 0;
		}

		pSteamUtilsServer = nullptr;
		g_pSteamClientGameServer = nullptr;
		g_pSteamClientGameServer_Latest = nullptr;

		bool DllShutdown = SteamClient_Server->BShutdownIfAllPipesClosed();

		if (DllShutdown == false)
			SteamAPI_ReleaseCurrentThreadMemory();

		if (InitClientPointers == false)
		{
			oReleaseThreadLocalMemory = nullptr;
			SteamClientSafe = nullptr;
		}

		SteamClient_Server = nullptr;
		UseManualDispatch = 3;

		FreeLibrary(hSteamclient_Server);

		hSteamclient_Server = nullptr;

		oBreakpad_SteamWriteMiniDumpUsingExceptionInfoWithBuildId = nullptr;
		oBreakpad_SteamWriteMiniDumpSetComment = nullptr;
		oBreakpad_SteamSetSteamID = nullptr;
		oBreakpad_SteamSetAppID = nullptr;
		oBreakpad_SteamMiniDumpInit = nullptr;

		ContextCounter++;
	}

	return;
}