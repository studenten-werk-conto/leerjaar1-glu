S_API HSteamPipe S_CALLTYPE SteamAPI_ISteamClient_CreateSteamPipe(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->CreateSteamPipe();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->CreateSteamPipe();
}

S_API bool S_CALLTYPE SteamAPI_ISteamClient_BReleaseSteamPipe(intptr_t instancePtr, HSteamPipe hSteamPipe)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->BReleaseSteamPipe(hSteamPipe);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->BReleaseSteamPipe(hSteamPipe);
}

S_API HSteamUser S_CALLTYPE SteamAPI_ISteamClient_ConnectToGlobalUser(intptr_t instancePtr, HSteamPipe hSteamPipe)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->ConnectToGlobalUser(hSteamPipe);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->ConnectToGlobalUser(hSteamPipe);
}

S_API HSteamUser S_CALLTYPE SteamAPI_ISteamClient_CreateLocalUser(intptr_t instancePtr, HSteamPipe * phSteamPipe, EAccountType eAccountType)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->CreateLocalUser(phSteamPipe, eAccountType);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->CreateLocalUser(phSteamPipe, eAccountType);
}

S_API void S_CALLTYPE SteamAPI_ISteamClient_ReleaseUser(intptr_t instancePtr, HSteamPipe hSteamPipe, HSteamUser hSteamUser)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->ReleaseUser(hSteamPipe, hSteamUser);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->ReleaseUser(hSteamPipe, hSteamUser);
}

S_API ISteamUser* S_CALLTYPE SteamAPI_ISteamClient_GetISteamUser(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamUser(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamGameServer* S_CALLTYPE SteamAPI_ISteamClient_GetISteamGameServer(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamGameServer(hSteamUser, hSteamPipe, pchVersion);
}

S_API void S_CALLTYPE SteamAPI_ISteamClient_SetLocalIPBinding(intptr_t instancePtr, const struct SteamIPAddress_t& unIP, uint16 usPort)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->SetLocalIPBinding(unIP, usPort);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->SetLocalIPBinding(unIP, usPort);
}

S_API ISteamFriends* S_CALLTYPE SteamAPI_ISteamClient_GetISteamFriends(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamFriends(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamUtils* S_CALLTYPE SteamAPI_ISteamClient_GetISteamUtils(intptr_t instancePtr, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamUtils(hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamUtils(hSteamPipe, pchVersion);
}

S_API ISteamMatchmaking* S_CALLTYPE SteamAPI_ISteamClient_GetISteamMatchmaking(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamMatchmaking(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamMatchmakingServers* S_CALLTYPE SteamAPI_ISteamClient_GetISteamMatchmakingServers(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamMatchmakingServers(hSteamUser, hSteamPipe, pchVersion);
}

S_API void* S_CALLTYPE SteamAPI_ISteamClient_GetISteamGenericInterface(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamGenericInterface(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamUserStats* S_CALLTYPE SteamAPI_ISteamClient_GetISteamUserStats(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamUserStats(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamGameServerStats* S_CALLTYPE SteamAPI_ISteamClient_GetISteamGameServerStats(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamGameServerStats(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamGameServerStats(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamApps* S_CALLTYPE SteamAPI_ISteamClient_GetISteamApps(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamApps(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamNetworking* S_CALLTYPE SteamAPI_ISteamClient_GetISteamNetworking(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamNetworking(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamRemoteStorage* S_CALLTYPE SteamAPI_ISteamClient_GetISteamRemoteStorage(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamRemoteStorage(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamScreenshots* S_CALLTYPE SteamAPI_ISteamClient_GetISteamScreenshots(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamScreenshots(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamScreenshots(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamGameSearch* S_CALLTYPE SteamAPI_ISteamClient_GetISteamGameSearch(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamGameSearch(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamGameSearch(hSteamuser, hSteamPipe, pchVersion);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamClient_GetIPCCallCount(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetIPCCallCount();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetIPCCallCount();
}

S_API void S_CALLTYPE SteamAPI_ISteamClient_SetWarningMessageHook(intptr_t instancePtr, SteamAPIWarningMessageHook_t pFunction)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->SetWarningMessageHook(pFunction);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->SetWarningMessageHook(pFunction);
}

S_API bool S_CALLTYPE SteamAPI_ISteamClient_BShutdownIfAllPipesClosed(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->BShutdownIfAllPipesClosed();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->BShutdownIfAllPipesClosed();
}

S_API ISteamHTTP* S_CALLTYPE SteamAPI_ISteamClient_GetISteamHTTP(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamHTTP(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamHTTP(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamController* S_CALLTYPE SteamAPI_ISteamClient_GetISteamController(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamController(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamController(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamUGC* S_CALLTYPE SteamAPI_ISteamClient_GetISteamUGC(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamUGC(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamUGC(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamAppList* S_CALLTYPE SteamAPI_ISteamClient_GetISteamAppList(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamAppList(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamAppList(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamMusic* S_CALLTYPE SteamAPI_ISteamClient_GetISteamMusic(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamMusic(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamMusic(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamMusicRemote* S_CALLTYPE SteamAPI_ISteamClient_GetISteamMusicRemote(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamMusicRemote(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamMusicRemote(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamHTMLSurface* S_CALLTYPE SteamAPI_ISteamClient_GetISteamHTMLSurface(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamHTMLSurface(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamHTMLSurface(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamInventory* S_CALLTYPE SteamAPI_ISteamClient_GetISteamInventory(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamInventory(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamInventory(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamVideo* S_CALLTYPE SteamAPI_ISteamClient_GetISteamVideo(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamVideo(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamVideo(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamParentalSettings* S_CALLTYPE SteamAPI_ISteamClient_GetISteamParentalSettings(intptr_t instancePtr, HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamParentalSettings(hSteamuser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamParentalSettings(hSteamuser, hSteamPipe, pchVersion);
}

S_API ISteamInput* S_CALLTYPE SteamAPI_ISteamClient_GetISteamInput(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamInput(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamInput(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamParties* S_CALLTYPE SteamAPI_ISteamClient_GetISteamParties(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char * pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamParties(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamParties(hSteamUser, hSteamPipe, pchVersion);
}

S_API ISteamRemotePlay* S_CALLTYPE SteamAPI_ISteamClient_GetISteamRemotePlay(intptr_t instancePtr, HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char* pchVersion)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamClient() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamClient()->GetISteamRemotePlay(hSteamUser, hSteamPipe, pchVersion);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamClient()->GetISteamRemotePlay(hSteamUser, hSteamPipe, pchVersion);
}

S_API HSteamUser S_CALLTYPE SteamAPI_ISteamUser_GetHSteamUser(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetHSteamUser();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_BLoggedOn(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BLoggedOn();
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamUser_GetSteamID(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetSteamID().ConvertToUint64();
}

S_API int S_CALLTYPE SteamAPI_ISteamUser_InitiateGameConnection(intptr_t instancePtr, void * pAuthBlob, int cbMaxAuthBlob, class CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->InitiateGameConnection(pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
}

S_API void S_CALLTYPE SteamAPI_ISteamUser_TerminateGameConnection(intptr_t instancePtr, uint32 unIPServer, uint16 usPortServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->TerminateGameConnection(unIPServer, usPortServer);
}

S_API void S_CALLTYPE SteamAPI_ISteamUser_TrackAppUsageEvent(intptr_t instancePtr, class CGameID gameID, int eAppUsageEvent, const char * pchExtraInfo)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->TrackAppUsageEvent(gameID, eAppUsageEvent, pchExtraInfo);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_GetUserDataFolder(intptr_t instancePtr, char * pchBuffer, int cubBuffer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetUserDataFolder(pchBuffer, cubBuffer);
}

S_API void S_CALLTYPE SteamAPI_ISteamUser_StartVoiceRecording(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->StartVoiceRecording();
}

S_API void S_CALLTYPE SteamAPI_ISteamUser_StopVoiceRecording(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->StopVoiceRecording();
}

S_API EVoiceResult S_CALLTYPE SteamAPI_ISteamUser_GetAvailableVoice(intptr_t instancePtr, uint32 * pcbCompressed, uint32 * pcbUncompressed_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetAvailableVoice(pcbCompressed, pcbUncompressed_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

S_API EVoiceResult S_CALLTYPE SteamAPI_ISteamUser_GetVoice(intptr_t instancePtr, bool bWantCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, bool bWantUncompressed_Deprecated, void * pUncompressedDestBuffer_Deprecated, uint32 cbUncompressedDestBufferSize_Deprecated, uint32 * nUncompressBytesWritten_Deprecated, uint32 nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetVoice(bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed_Deprecated, pUncompressedDestBuffer_Deprecated, cbUncompressedDestBufferSize_Deprecated, nUncompressBytesWritten_Deprecated, nUncompressedVoiceDesiredSampleRate_Deprecated);
}

S_API EVoiceResult S_CALLTYPE SteamAPI_ISteamUser_DecompressVoice(intptr_t instancePtr, const void * pCompressed, uint32 cbCompressed, void * pDestBuffer, uint32 cbDestBufferSize, uint32 * nBytesWritten, uint32 nDesiredSampleRate)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->DecompressVoice(pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUser_GetVoiceOptimalSampleRate(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetVoiceOptimalSampleRate();
}

S_API HAuthTicket S_CALLTYPE SteamAPI_ISteamUser_GetAuthSessionTicket(intptr_t instancePtr, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}

S_API EBeginAuthSessionResult S_CALLTYPE SteamAPI_ISteamUser_BeginAuthSession(intptr_t instancePtr, const void * pAuthTicket, int cbAuthTicket, class CSteamID steamID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}

S_API void S_CALLTYPE SteamAPI_ISteamUser_EndAuthSession(intptr_t instancePtr, class CSteamID steamID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->EndAuthSession(steamID);
}

S_API void S_CALLTYPE SteamAPI_ISteamUser_CancelAuthTicket(intptr_t instancePtr, HAuthTicket hAuthTicket)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->CancelAuthTicket(hAuthTicket);
}

S_API EUserHasLicenseForAppResult S_CALLTYPE SteamAPI_ISteamUser_UserHasLicenseForApp(intptr_t instancePtr, class CSteamID steamID, AppId_t appID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->UserHasLicenseForApp(steamID, appID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_BIsBehindNAT(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BIsBehindNAT();
}

S_API void S_CALLTYPE SteamAPI_ISteamUser_AdvertiseGame(intptr_t instancePtr, class CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->AdvertiseGame(steamIDGameServer, unIPServer, usPortServer);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUser_RequestEncryptedAppTicket(intptr_t instancePtr, void * pDataToInclude, int cbDataToInclude)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->RequestEncryptedAppTicket(pDataToInclude, cbDataToInclude);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_GetEncryptedAppTicket(intptr_t instancePtr, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetEncryptedAppTicket(pTicket, cbMaxTicket, pcbTicket);
}

S_API int S_CALLTYPE SteamAPI_ISteamUser_GetGameBadgeLevel(intptr_t instancePtr, int nSeries, bool bFoil)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetGameBadgeLevel(nSeries, bFoil);
}

S_API int S_CALLTYPE SteamAPI_ISteamUser_GetPlayerSteamLevel(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetPlayerSteamLevel();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUser_RequestStoreAuthURL(intptr_t instancePtr, const char * pchRedirectURL)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->RequestStoreAuthURL(pchRedirectURL);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_BIsPhoneVerified(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BIsPhoneVerified();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_BIsTwoFactorEnabled(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BIsTwoFactorEnabled();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_BIsPhoneIdentifying(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BIsPhoneIdentifying();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_BIsPhoneRequiringVerification(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BIsPhoneRequiringVerification();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUser_GetMarketEligibility(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetMarketEligibility();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUser_GetDurationControl(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->GetDurationControl();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUser_BSetDurationControlOnlineState(intptr_t instancePtr, EDurationControlOnlineState eNewState)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUser()->BSetDurationControlOnlineState(eNewState);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetPersonaName(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetPersonaName();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamFriends_SetPersonaName(intptr_t instancePtr, const char * pchPersonaName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->SetPersonaName(pchPersonaName);
}

S_API EPersonaState S_CALLTYPE SteamAPI_ISteamFriends_GetPersonaState(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetPersonaState();
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendCount(intptr_t instancePtr, int iFriendFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendCount(iFriendFlags);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamFriends_GetFriendByIndex(intptr_t instancePtr, int iFriend, int iFriendFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendByIndex(iFriend, iFriendFlags).ConvertToUint64();
}

S_API EFriendRelationship S_CALLTYPE SteamAPI_ISteamFriends_GetFriendRelationship(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendRelationship(steamIDFriend);
}

S_API EPersonaState S_CALLTYPE SteamAPI_ISteamFriends_GetFriendPersonaState(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendPersonaState(steamIDFriend);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetFriendPersonaName(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendPersonaName(steamIDFriend);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_GetFriendGamePlayed(intptr_t instancePtr, class CSteamID steamIDFriend, struct FriendGameInfo_t * pFriendGameInfo)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendGamePlayed(steamIDFriend, pFriendGameInfo);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetFriendPersonaNameHistory(intptr_t instancePtr, class CSteamID steamIDFriend, int iPersonaName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendSteamLevel(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendSteamLevel(steamIDFriend);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetPlayerNickname(intptr_t instancePtr, class CSteamID steamIDPlayer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetPlayerNickname(steamIDPlayer);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendsGroupCount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendsGroupCount();
}

S_API FriendsGroupID_t S_CALLTYPE SteamAPI_ISteamFriends_GetFriendsGroupIDByIndex(intptr_t instancePtr, int iFG)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendsGroupIDByIndex(iFG);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetFriendsGroupName(intptr_t instancePtr, FriendsGroupID_t friendsGroupID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendsGroupName(friendsGroupID);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendsGroupMembersCount(intptr_t instancePtr, FriendsGroupID_t friendsGroupID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendsGroupMembersCount(friendsGroupID);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_GetFriendsGroupMembersList(intptr_t instancePtr, FriendsGroupID_t friendsGroupID, class CSteamID * pOutSteamIDMembers, int nMembersCount)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendsGroupMembersList(friendsGroupID, pOutSteamIDMembers, nMembersCount);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_HasFriend(intptr_t instancePtr, class CSteamID steamIDFriend, int iFriendFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->HasFriend(steamIDFriend, iFriendFlags);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetClanCount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanCount();
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamFriends_GetClanByIndex(intptr_t instancePtr, int iClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanByIndex(iClan).ConvertToUint64();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetClanName(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanName(steamIDClan);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetClanTag(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanTag(steamIDClan);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_GetClanActivityCounts(intptr_t instancePtr, class CSteamID steamIDClan, int * pnOnline, int * pnInGame, int * pnChatting)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanActivityCounts(steamIDClan, pnOnline, pnInGame, pnChatting);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamFriends_DownloadClanActivityCounts(intptr_t instancePtr, class CSteamID * psteamIDClans, int cClansToRequest)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->DownloadClanActivityCounts(psteamIDClans, cClansToRequest);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendCountFromSource(intptr_t instancePtr, class CSteamID steamIDSource)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendCountFromSource(steamIDSource);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamFriends_GetFriendFromSourceByIndex(intptr_t instancePtr, class CSteamID steamIDSource, int iFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendFromSourceByIndex(steamIDSource, iFriend).ConvertToUint64();
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_IsUserInSource(intptr_t instancePtr, class CSteamID steamIDUser, class CSteamID steamIDSource)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->IsUserInSource(steamIDUser, steamIDSource);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_SetInGameVoiceSpeaking(intptr_t instancePtr, class CSteamID steamIDUser, bool bSpeaking)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_ActivateGameOverlay(intptr_t instancePtr, const char * pchDialog)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->ActivateGameOverlay(pchDialog);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_ActivateGameOverlayToUser(intptr_t instancePtr, const char * pchDialog, class CSteamID steamID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->ActivateGameOverlayToUser(pchDialog, steamID);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_ActivateGameOverlayToWebPage(intptr_t instancePtr, const char * pchURL, EActivateGameOverlayToWebPageMode eMode)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->ActivateGameOverlayToWebPage(pchURL, eMode);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_ActivateGameOverlayToStore(intptr_t instancePtr, AppId_t nAppID, EOverlayToStoreFlag eFlag)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->ActivateGameOverlayToStore(nAppID, eFlag);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_SetPlayedWith(intptr_t instancePtr, class CSteamID steamIDUserPlayedWith)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->SetPlayedWith(steamIDUserPlayedWith);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_ActivateGameOverlayInviteDialog(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->ActivateGameOverlayInviteDialog(steamIDLobby);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetSmallFriendAvatar(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetSmallFriendAvatar(steamIDFriend);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetMediumFriendAvatar(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetMediumFriendAvatar(steamIDFriend);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetLargeFriendAvatar(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetLargeFriendAvatar(steamIDFriend);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_RequestUserInformation(intptr_t instancePtr, class CSteamID steamIDUser, bool bRequireNameOnly)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->RequestUserInformation(steamIDUser, bRequireNameOnly);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamFriends_RequestClanOfficerList(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->RequestClanOfficerList(steamIDClan);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamFriends_GetClanOwner(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanOwner(steamIDClan).ConvertToUint64();
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetClanOfficerCount(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanOfficerCount(steamIDClan);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamFriends_GetClanOfficerByIndex(intptr_t instancePtr, class CSteamID steamIDClan, int iOfficer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanOfficerByIndex(steamIDClan, iOfficer).ConvertToUint64();
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamFriends_GetUserRestrictions(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetUserRestrictions();
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_SetRichPresence(intptr_t instancePtr, const char * pchKey, const char * pchValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->SetRichPresence(pchKey, pchValue);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_ClearRichPresence(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->ClearRichPresence();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetFriendRichPresence(intptr_t instancePtr, class CSteamID steamIDFriend, const char * pchKey)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendRichPresence(steamIDFriend, pchKey);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendRichPresenceKeyCount(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendRichPresenceKeyCount(steamIDFriend);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamFriends_GetFriendRichPresenceKeyByIndex(intptr_t instancePtr, class CSteamID steamIDFriend, int iKey)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_RequestFriendRichPresence(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->RequestFriendRichPresence(steamIDFriend);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_InviteUserToGame(intptr_t instancePtr, class CSteamID steamIDFriend, const char * pchConnectString)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->InviteUserToGame(steamIDFriend, pchConnectString);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetCoplayFriendCount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetCoplayFriendCount();
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamFriends_GetCoplayFriend(intptr_t instancePtr, int iCoplayFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetCoplayFriend(iCoplayFriend).ConvertToUint64();
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendCoplayTime(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendCoplayTime(steamIDFriend);
}

S_API AppId_t S_CALLTYPE SteamAPI_ISteamFriends_GetFriendCoplayGame(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendCoplayGame(steamIDFriend);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamFriends_JoinClanChatRoom(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->JoinClanChatRoom(steamIDClan);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_LeaveClanChatRoom(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->LeaveClanChatRoom(steamIDClan);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetClanChatMemberCount(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanChatMemberCount(steamIDClan);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamFriends_GetChatMemberByIndex(intptr_t instancePtr, class CSteamID steamIDClan, int iUser)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetChatMemberByIndex(steamIDClan, iUser).ConvertToUint64();
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_SendClanChatMessage(intptr_t instancePtr, class CSteamID steamIDClanChat, const char * pchText)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->SendClanChatMessage(steamIDClanChat, pchText);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetClanChatMessage(intptr_t instancePtr, class CSteamID steamIDClanChat, int iMessage, void * prgchText, int cchTextMax, EChatEntryType * peChatEntryType, class CSteamID * psteamidChatter)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType, psteamidChatter);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_IsClanChatAdmin(intptr_t instancePtr, class CSteamID steamIDClanChat, class CSteamID steamIDUser)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->IsClanChatAdmin(steamIDClanChat, steamIDUser);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_IsClanChatWindowOpenInSteam(intptr_t instancePtr, class CSteamID steamIDClanChat)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->IsClanChatWindowOpenInSteam(steamIDClanChat);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_OpenClanChatWindowInSteam(intptr_t instancePtr, class CSteamID steamIDClanChat)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->OpenClanChatWindowInSteam(steamIDClanChat);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_CloseClanChatWindowInSteam(intptr_t instancePtr, class CSteamID steamIDClanChat)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->CloseClanChatWindowInSteam(steamIDClanChat);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_SetListenForFriendsMessages(intptr_t instancePtr, bool bInterceptEnabled)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->SetListenForFriendsMessages(bInterceptEnabled);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_ReplyToFriendMessage(intptr_t instancePtr, class CSteamID steamIDFriend, const char * pchMsgToSend)
{
	if (InitClientPointers == false)

		__debugbreak();
	return GetInterfacePointers.SteamFriends()->ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
}

S_API int S_CALLTYPE SteamAPI_ISteamFriends_GetFriendMessage(intptr_t instancePtr, class CSteamID steamIDFriend, int iMessageID, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamFriends_GetFollowerCount(intptr_t instancePtr, class CSteamID steamID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetFollowerCount(steamID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamFriends_IsFollowing(intptr_t instancePtr, class CSteamID steamID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->IsFollowing(steamID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamFriends_EnumerateFollowingList(intptr_t instancePtr, uint32 unStartIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->EnumerateFollowingList(unStartIndex);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_IsClanPublic(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->IsClanPublic(steamIDClan);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_IsClanOfficialGameGroup(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->IsClanOfficialGameGroup(steamIDClan);
}

S_API int SteamAPI_ISteamFriends_GetNumChatsWithUnreadPriorityMessages(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->GetNumChatsWithUnreadPriorityMessages();
}

S_API void S_CALLTYPE SteamAPI_ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(intptr_t instancePtr, CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->ActivateGameOverlayRemotePlayTogetherInviteDialog(steamIDLobby);
}

S_API bool S_CALLTYPE SteamAPI_ISteamFriends_RegisterProtocolInOverlayBrowser(intptr_t instancePtr, const char* pchProtocol)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamFriends()->RegisterProtocolInOverlayBrowser(pchProtocol);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUtils_GetSecondsSinceAppActive(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetSecondsSinceAppActive();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetSecondsSinceAppActive();
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUtils_GetSecondsSinceComputerActive(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetSecondsSinceComputerActive();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetSecondsSinceComputerActive();
}

S_API EUniverse S_CALLTYPE SteamAPI_ISteamUtils_GetConnectedUniverse(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetConnectedUniverse();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetConnectedUniverse();
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUtils_GetServerRealTime(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetServerRealTime();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetServerRealTime();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamUtils_GetIPCountry(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetIPCountry();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetIPCountry();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_GetImageSize(intptr_t instancePtr, int iImage, uint32 * pnWidth, uint32 * pnHeight)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetImageSize(iImage, pnWidth, pnHeight);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetImageSize(iImage, pnWidth, pnHeight);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_GetImageRGBA(intptr_t instancePtr, int iImage, uint8 * pubDest, int nDestBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetImageRGBA(iImage, pubDest, nDestBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetImageRGBA(iImage, pubDest, nDestBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_GetCSERIPPort(intptr_t instancePtr, uint32 * unIP, uint16 * usPort)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetCSERIPPort(unIP, usPort);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetCSERIPPort(unIP, usPort);
}

S_API uint8 S_CALLTYPE SteamAPI_ISteamUtils_GetCurrentBatteryPower(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetCurrentBatteryPower();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetCurrentBatteryPower();
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUtils_GetAppID(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetAppID();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetAppID();
}

S_API void S_CALLTYPE SteamAPI_ISteamUtils_SetOverlayNotificationPosition(intptr_t instancePtr, ENotificationPosition eNotificationPosition)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->SetOverlayNotificationPosition(eNotificationPosition);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->SetOverlayNotificationPosition(eNotificationPosition);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_IsAPICallCompleted(intptr_t instancePtr, SteamAPICall_t hSteamAPICall, bool * pbFailed)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->IsAPICallCompleted(hSteamAPICall, pbFailed);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->IsAPICallCompleted(hSteamAPICall, pbFailed);
}

S_API ESteamAPICallFailure S_CALLTYPE SteamAPI_ISteamUtils_GetAPICallFailureReason(intptr_t instancePtr, SteamAPICall_t hSteamAPICall)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetAPICallFailureReason(hSteamAPICall);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetAPICallFailureReason(hSteamAPICall);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_GetAPICallResult(intptr_t instancePtr, SteamAPICall_t hSteamAPICall, void * pCallback, int cubCallback, int iCallbackExpected, bool * pbFailed)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetAPICallResult(hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetAPICallResult(hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUtils_GetIPCCallCount(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetIPCCallCount();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetIPCCallCount();
}

S_API void S_CALLTYPE SteamAPI_ISteamUtils_SetWarningMessageHook(intptr_t instancePtr, SteamAPIWarningMessageHook_t pFunction)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->SetWarningMessageHook(pFunction);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->SetWarningMessageHook(pFunction);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_IsOverlayEnabled(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->IsOverlayEnabled();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->IsOverlayEnabled();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_BOverlayNeedsPresent(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->BOverlayNeedsPresent();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->BOverlayNeedsPresent();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUtils_CheckFileSignature(intptr_t instancePtr, const char * szFileName)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->CheckFileSignature(szFileName);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->CheckFileSignature(szFileName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_ShowGamepadTextInput(intptr_t instancePtr, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char * pchDescription, uint32 unCharMax, const char * pchExistingText)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->ShowGamepadTextInput(eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->ShowGamepadTextInput(eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUtils_GetEnteredGamepadTextLength(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetEnteredGamepadTextLength();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetEnteredGamepadTextLength();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_GetEnteredGamepadTextInput(intptr_t instancePtr, char * pchText, uint32 cchText)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetEnteredGamepadTextInput(pchText, cchText);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetEnteredGamepadTextInput(pchText, cchText);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamUtils_GetSteamUILanguage(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetSteamUILanguage();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetSteamUILanguage();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_IsSteamRunningInVR(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->IsSteamRunningInVR();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->IsSteamRunningInVR();
}

S_API void S_CALLTYPE SteamAPI_ISteamUtils_SetOverlayNotificationInset(intptr_t instancePtr, int nHorizontalInset, int nVerticalInset)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->SetOverlayNotificationInset(nHorizontalInset, nVerticalInset);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->SetOverlayNotificationInset(nHorizontalInset, nVerticalInset);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_IsSteamInBigPictureMode(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->IsSteamInBigPictureMode();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->IsSteamInBigPictureMode();
}

S_API void S_CALLTYPE SteamAPI_ISteamUtils_StartVRDashboard(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->StartVRDashboard();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->StartVRDashboard();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_IsVRHeadsetStreamingEnabled(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->IsVRHeadsetStreamingEnabled();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->IsVRHeadsetStreamingEnabled();
}

S_API void S_CALLTYPE SteamAPI_ISteamUtils_SetVRHeadsetStreamingEnabled(intptr_t instancePtr, bool bEnabled)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->SetVRHeadsetStreamingEnabled(bEnabled);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->SetVRHeadsetStreamingEnabled(bEnabled);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_IsSteamChinaLauncher(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->IsSteamChinaLauncher();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->IsSteamChinaLauncher();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUtils_InitFilterText(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->InitFilterText();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->InitFilterText();
}

S_API int S_CALLTYPE SteamAPI_ISteamUtils_FilterText(intptr_t instancePtr, char* pchOutFilteredText, uint32 nByteSizeOutFilteredText, const char* pchInputMessage, bool bLegalOnly)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->FilterText(pchOutFilteredText, nByteSizeOutFilteredText, pchInputMessage, bLegalOnly);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->FilterText(pchOutFilteredText, nByteSizeOutFilteredText, pchInputMessage, bLegalOnly);
}

S_API ESteamIPv6ConnectivityState S_CALLTYPE SteamAPI_ISteamUtils_GetIPv6ConnectivityState(intptr_t instancePtr, ESteamIPv6ConnectivityProtocol eProtocol)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerUtils() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerUtils()->GetIPv6ConnectivityState(eProtocol);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUtils()->GetIPv6ConnectivityState(eProtocol);
}

S_API int S_CALLTYPE SteamAPI_ISteamMatchmaking_GetFavoriteGameCount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetFavoriteGameCount();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_GetFavoriteGame(intptr_t instancePtr, int iGame, AppId_t * pnAppID, uint32 * pnIP, uint16 * pnConnPort, uint16 * pnQueryPort, uint32 * punFlags, uint32 * pRTime32LastPlayedOnServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetFavoriteGame(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer);
}

S_API int S_CALLTYPE SteamAPI_ISteamMatchmaking_AddFavoriteGame(intptr_t instancePtr, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, uint32 rTime32LastPlayedOnServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_RemoveFavoriteGame(intptr_t instancePtr, AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamMatchmaking_RequestLobbyList(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->RequestLobbyList();
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_AddRequestLobbyListStringFilter(intptr_t instancePtr, const char * pchKeyToMatch, const char * pchValueToMatch, ELobbyComparison eComparisonType)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, eComparisonType);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_AddRequestLobbyListNumericalFilter(intptr_t instancePtr, const char * pchKeyToMatch, int nValueToMatch, ELobbyComparison eComparisonType)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, eComparisonType);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_AddRequestLobbyListNearValueFilter(intptr_t instancePtr, const char * pchKeyToMatch, int nValueToBeCloseTo)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(intptr_t instancePtr, int nSlotsAvailable)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_AddRequestLobbyListDistanceFilter(intptr_t instancePtr, ELobbyDistanceFilter eLobbyDistanceFilter)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddRequestLobbyListDistanceFilter(eLobbyDistanceFilter);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_AddRequestLobbyListResultCountFilter(intptr_t instancePtr, int cMaxResults)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddRequestLobbyListResultCountFilter(cMaxResults);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->AddRequestLobbyListCompatibleMembersFilter(steamIDLobby);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyByIndex(intptr_t instancePtr, int iLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyByIndex(iLobby).ConvertToUint64();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamMatchmaking_CreateLobby(intptr_t instancePtr, ELobbyType eLobbyType, int cMaxMembers)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->CreateLobby(eLobbyType, cMaxMembers);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamMatchmaking_JoinLobby(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->JoinLobby(steamIDLobby);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_LeaveLobby(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->LeaveLobby(steamIDLobby);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_InviteUserToLobby(intptr_t instancePtr, class CSteamID steamIDLobby, class CSteamID steamIDInvitee)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->InviteUserToLobby(steamIDLobby, steamIDInvitee);
}

S_API int S_CALLTYPE SteamAPI_ISteamMatchmaking_GetNumLobbyMembers(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetNumLobbyMembers(steamIDLobby);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex(intptr_t instancePtr, class CSteamID steamIDLobby, int iMember)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyMemberByIndex(steamIDLobby, iMember).ConvertToUint64();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyData(intptr_t instancePtr, class CSteamID steamIDLobby, const char * pchKey)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyData(steamIDLobby, pchKey);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLobbyData(intptr_t instancePtr, class CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLobbyData(steamIDLobby, pchKey, pchValue);
}

S_API int S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyDataCount(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyDataCount(steamIDLobby);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyDataByIndex(intptr_t instancePtr, class CSteamID steamIDLobby, int iLobbyData, char * pchKey, int cchKeyBufferSize, char * pchValue, int cchValueBufferSize)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_DeleteLobbyData(intptr_t instancePtr, class CSteamID steamIDLobby, const char * pchKey)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->DeleteLobbyData(steamIDLobby, pchKey);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyMemberData(intptr_t instancePtr, class CSteamID steamIDLobby, class CSteamID steamIDUser, const char * pchKey)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLobbyMemberData(intptr_t instancePtr, class CSteamID steamIDLobby, const char * pchKey, const char * pchValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_SendLobbyChatMsg(intptr_t instancePtr, class CSteamID steamIDLobby, const void * pvMsgBody, int cubMsgBody)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
}

S_API int S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyChatEntry(intptr_t instancePtr, class CSteamID steamIDLobby, int iChatID, class CSteamID * pSteamIDUser, void * pvData, int cubData, EChatEntryType * peChatEntryType)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyChatEntry(steamIDLobby, iChatID, pSteamIDUser, pvData, cubData, peChatEntryType);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_RequestLobbyData(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->RequestLobbyData(steamIDLobby);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLobbyGameServer(intptr_t instancePtr, class CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, class CSteamID steamIDGameServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyGameServer(intptr_t instancePtr, class CSteamID steamIDLobby, uint32 * punGameServerIP, uint16 * punGameServerPort, class CSteamID * psteamIDGameServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyGameServer(steamIDLobby, punGameServerIP, punGameServerPort, psteamIDGameServer);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLobbyMemberLimit(intptr_t instancePtr, class CSteamID steamIDLobby, int cMaxMembers)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
}

S_API int S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyMemberLimit(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyMemberLimit(steamIDLobby);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLobbyType(intptr_t instancePtr, class CSteamID steamIDLobby, ELobbyType eLobbyType)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLobbyType(steamIDLobby, eLobbyType);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLobbyJoinable(intptr_t instancePtr, class CSteamID steamIDLobby, bool bLobbyJoinable)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamMatchmaking_GetLobbyOwner(intptr_t instancePtr, class CSteamID steamIDLobby)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->GetLobbyOwner(steamIDLobby).ConvertToUint64();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLobbyOwner(intptr_t instancePtr, class CSteamID steamIDLobby, class CSteamID steamIDNewOwner)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLobbyOwner(steamIDLobby, steamIDNewOwner);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmaking_SetLinkedLobby(intptr_t instancePtr, class CSteamID steamIDLobby, class CSteamID steamIDLobbyDependent)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmaking()->SetLinkedLobby(steamIDLobby, steamIDLobbyDependent);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServerListResponse_ServerResponded(intptr_t instancePtr, HServerListRequest hRequest, int iServer)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingServerListResponse *ServerListResponse = (ISteamMatchmakingServerListResponse*)instancePtr;
	return ServerListResponse->ServerResponded(hRequest, iServer);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServerListResponse_ServerFailedToRespond(intptr_t instancePtr, HServerListRequest hRequest, int iServer)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingServerListResponse *ServerListResponse = (ISteamMatchmakingServerListResponse*)instancePtr;
	return ServerListResponse->ServerFailedToRespond(hRequest, iServer);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServerListResponse_RefreshComplete(intptr_t instancePtr, HServerListRequest hRequest, EMatchMakingServerResponse response)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingServerListResponse *ServerListResponse = (ISteamMatchmakingServerListResponse*)instancePtr;
	return ServerListResponse->RefreshComplete(hRequest, response);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingPingResponse_ServerResponded(intptr_t instancePtr, class gameserveritem_t & server)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingPingResponse *PingResponse = (ISteamMatchmakingPingResponse*)instancePtr;
	return PingResponse->ServerResponded(server);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingPingResponse_ServerFailedToRespond(intptr_t instancePtr)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingPingResponse *PingResponse = (ISteamMatchmakingPingResponse*)instancePtr;
	return PingResponse->ServerFailedToRespond();
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingPlayersResponse_AddPlayerToList(intptr_t instancePtr, const char * pchName, int nScore, float flTimePlayed)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingPlayersResponse *PlayersResponse = (ISteamMatchmakingPlayersResponse*)instancePtr;
	return PlayersResponse->AddPlayerToList(pchName, nScore, flTimePlayed);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(intptr_t instancePtr)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingPlayersResponse *PlayersResponse = (ISteamMatchmakingPlayersResponse*)instancePtr;
	return PlayersResponse->PlayersFailedToRespond();
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(intptr_t instancePtr)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingPlayersResponse *PlayersResponse = (ISteamMatchmakingPlayersResponse*)instancePtr;
	return PlayersResponse->PlayersRefreshComplete();
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingRulesResponse_RulesResponded(intptr_t instancePtr, const char * pchRule, const char * pchValue)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingRulesResponse *RulesResponse = (ISteamMatchmakingRulesResponse*)instancePtr;
	return RulesResponse->RulesResponded(pchRule, pchValue);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingRulesResponse_RulesFailedToRespond(intptr_t instancePtr)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingRulesResponse *RulesResponse = (ISteamMatchmakingRulesResponse*)instancePtr;
	return RulesResponse->RulesFailedToRespond();
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingRulesResponse_RulesRefreshComplete(intptr_t instancePtr)
{
	if (InitClientPointers == false || instancePtr == 0)
		__debugbreak();

	ISteamMatchmakingRulesResponse *RulesResponse = (ISteamMatchmakingRulesResponse*)instancePtr;
	return RulesResponse->RulesRefreshComplete();
}

S_API HServerListRequest S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RequestInternetServerList(intptr_t instancePtr, AppId_t iApp, struct MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, class ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RequestInternetServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}

S_API HServerListRequest S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RequestLANServerList(intptr_t instancePtr, AppId_t iApp, class ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RequestLANServerList(iApp, pRequestServersResponse);
}

S_API HServerListRequest S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RequestFriendsServerList(intptr_t instancePtr, AppId_t iApp, struct MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, class ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RequestFriendsServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}

S_API HServerListRequest S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RequestFavoritesServerList(intptr_t instancePtr, AppId_t iApp, struct MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, class ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RequestFavoritesServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}

S_API HServerListRequest S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RequestHistoryServerList(intptr_t instancePtr, AppId_t iApp, struct MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, class ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RequestHistoryServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}

S_API HServerListRequest S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RequestSpectatorServerList(intptr_t instancePtr, AppId_t iApp, struct MatchMakingKeyValuePair_t ** ppchFilters, uint32 nFilters, class ISteamMatchmakingServerListResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RequestSpectatorServerList(iApp, ppchFilters, nFilters, pRequestServersResponse);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServers_ReleaseRequest(intptr_t instancePtr, HServerListRequest hServerListRequest)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->ReleaseRequest(hServerListRequest);
}

S_API gameserveritem_t* S_CALLTYPE SteamAPI_ISteamMatchmakingServers_GetServerDetails(intptr_t instancePtr, HServerListRequest hRequest, int iServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->GetServerDetails(hRequest, iServer);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServers_CancelQuery(intptr_t instancePtr, HServerListRequest hRequest)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->CancelQuery(hRequest);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RefreshQuery(intptr_t instancePtr, HServerListRequest hRequest)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RefreshQuery(hRequest);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMatchmakingServers_IsRefreshing(intptr_t instancePtr, HServerListRequest hRequest)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->IsRefreshing(hRequest);
}

S_API int S_CALLTYPE SteamAPI_ISteamMatchmakingServers_GetServerCount(intptr_t instancePtr, HServerListRequest hRequest)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->GetServerCount(hRequest);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServers_RefreshServer(intptr_t instancePtr, HServerListRequest hRequest, int iServer)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->RefreshServer(hRequest, iServer);
}

S_API HServerQuery S_CALLTYPE SteamAPI_ISteamMatchmakingServers_PingServer(intptr_t instancePtr, uint32 unIP, uint16 usPort, class ISteamMatchmakingPingResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->PingServer(unIP, usPort, pRequestServersResponse);
}

S_API HServerQuery S_CALLTYPE SteamAPI_ISteamMatchmakingServers_PlayerDetails(intptr_t instancePtr, uint32 unIP, uint16 usPort, class ISteamMatchmakingPlayersResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->PlayerDetails(unIP, usPort, pRequestServersResponse);
}

S_API HServerQuery S_CALLTYPE SteamAPI_ISteamMatchmakingServers_ServerRules(intptr_t instancePtr, uint32 unIP, uint16 usPort, class ISteamMatchmakingRulesResponse * pRequestServersResponse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->ServerRules(unIP, usPort, pRequestServersResponse);
}

S_API void S_CALLTYPE SteamAPI_ISteamMatchmakingServers_CancelServerQuery(intptr_t instancePtr, HServerQuery hServerQuery)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMatchmakingServers()->CancelServerQuery(hServerQuery);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_AddGameSearchParams(intptr_t instancePtr, const char * pchKeyToFind, const char * pchValuesToFind)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->AddGameSearchParams(pchKeyToFind, pchValuesToFind);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_SearchForGameWithLobby(intptr_t instancePtr, class CSteamID steamIDLobby, int nPlayerMin, int nPlayerMax)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->SearchForGameWithLobby(steamIDLobby, nPlayerMin, nPlayerMax);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_SearchForGameSolo(intptr_t instancePtr, int nPlayerMin, int nPlayerMax)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->SearchForGameSolo(nPlayerMin, nPlayerMax);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_AcceptGame(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->AcceptGame();
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_DeclineGame(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->DeclineGame();
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_RetrieveConnectionDetails(intptr_t instancePtr, class CSteamID steamIDHost, char * pchConnectionDetails, int cubConnectionDetails)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->RetrieveConnectionDetails(steamIDHost, pchConnectionDetails, cubConnectionDetails);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_EndGameSearch(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->EndGameSearch();
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_SetGameHostParams(intptr_t instancePtr, const char * pchKey, const char * pchValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->SetGameHostParams(pchKey, pchValue);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_SetConnectionDetails(intptr_t instancePtr, const char * pchConnectionDetails, int cubConnectionDetails)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->SetConnectionDetails(pchConnectionDetails, cubConnectionDetails);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_RequestPlayersForGame(intptr_t instancePtr, int nPlayerMin, int nPlayerMax, int nMaxTeamSize)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->RequestPlayersForGame(nPlayerMin, nPlayerMax, nMaxTeamSize);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_HostConfirmGameStart(intptr_t instancePtr, uint64 ullUniqueGameID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->HostConfirmGameStart(ullUniqueGameID);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_CancelRequestPlayersForGame(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->CancelRequestPlayersForGame();
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_SubmitPlayerResult(intptr_t instancePtr, uint64 ullUniqueGameID, class CSteamID steamIDPlayer, EPlayerResult_t EPlayerResult)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->SubmitPlayerResult(ullUniqueGameID, steamIDPlayer, EPlayerResult);
}

S_API EGameSearchErrorCode_t S_CALLTYPE SteamAPI_ISteamGameSearch_EndGame(intptr_t instancePtr, uint64 ullUniqueGameID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamGameSearch()->EndGame(ullUniqueGameID);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamParties_GetNumActiveBeacons(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->GetNumActiveBeacons();
}

S_API PartyBeaconID_t S_CALLTYPE SteamAPI_ISteamParties_GetBeaconByIndex(intptr_t instancePtr, uint32 unIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->GetBeaconByIndex(unIndex);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParties_GetBeaconDetails(intptr_t instancePtr, PartyBeaconID_t ulBeaconID, class CSteamID * pSteamIDBeaconOwner, struct SteamPartyBeaconLocation_t * pLocation, char * pchMetadata, int cchMetadata)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->GetBeaconDetails(ulBeaconID, pSteamIDBeaconOwner, pLocation, pchMetadata, cchMetadata);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamParties_JoinParty(intptr_t instancePtr, PartyBeaconID_t ulBeaconID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->JoinParty(ulBeaconID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParties_GetNumAvailableBeaconLocations(intptr_t instancePtr, uint32 * puNumLocations)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->GetNumAvailableBeaconLocations(puNumLocations);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParties_GetAvailableBeaconLocations(intptr_t instancePtr, struct SteamPartyBeaconLocation_t * pLocationList, uint32 uMaxNumLocations)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->GetAvailableBeaconLocations(pLocationList, uMaxNumLocations);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamParties_CreateBeacon(intptr_t instancePtr, uint32 unOpenSlots, struct SteamPartyBeaconLocation_t * pBeaconLocation, const char * pchConnectString, const char * pchMetadata)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->CreateBeacon(unOpenSlots, pBeaconLocation, pchConnectString, pchMetadata);
}

S_API void S_CALLTYPE SteamAPI_ISteamParties_OnReservationCompleted(intptr_t instancePtr, PartyBeaconID_t ulBeacon, class CSteamID steamIDUser)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->OnReservationCompleted(ulBeacon, steamIDUser);
}

S_API void S_CALLTYPE SteamAPI_ISteamParties_CancelReservation(intptr_t instancePtr, PartyBeaconID_t ulBeacon, class CSteamID steamIDUser)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->CancelReservation(ulBeacon, steamIDUser);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamParties_ChangeNumOpenSlots(intptr_t instancePtr, PartyBeaconID_t ulBeacon, uint32 unOpenSlots)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->ChangeNumOpenSlots(ulBeacon, unOpenSlots);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParties_DestroyBeacon(intptr_t instancePtr, PartyBeaconID_t ulBeacon)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->DestroyBeacon(ulBeacon);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParties_GetBeaconLocationData(intptr_t instancePtr, struct SteamPartyBeaconLocation_t BeaconLocation, ESteamPartyBeaconLocationData eData, char * pchDataStringOut, int cchDataStringOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParties()->GetBeaconLocationData(BeaconLocation, eData, pchDataStringOut, cchDataStringOut);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileWrite(intptr_t instancePtr, const char * pchFile, const void * pvData, int32 cubData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileWrite(pchFile, pvData, cubData);
}

S_API int32 S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileRead(intptr_t instancePtr, const char * pchFile, void * pvData, int32 cubDataToRead)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileRead(pchFile, pvData, cubDataToRead);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileWriteAsync(intptr_t instancePtr, const char * pchFile, const void * pvData, uint32 cubData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileWriteAsync(pchFile, pvData, cubData);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileReadAsync(intptr_t instancePtr, const char * pchFile, uint32 nOffset, uint32 cubToRead)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileReadAsync(pchFile, nOffset, cubToRead);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileReadAsyncComplete(intptr_t instancePtr, SteamAPICall_t hReadCall, void * pvBuffer, uint32 cubToRead)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileReadAsyncComplete(hReadCall, pvBuffer, cubToRead);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileForget(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileForget(pchFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileDelete(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileDelete(pchFile);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileShare(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileShare(pchFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_SetSyncPlatforms(intptr_t instancePtr, const char * pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
}

S_API UGCFileWriteStreamHandle_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileWriteStreamOpen(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileWriteStreamOpen(pchFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileWriteStreamWriteChunk(intptr_t instancePtr, UGCFileWriteStreamHandle_t writeHandle, const void * pvData, int32 cubData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileWriteStreamWriteChunk(writeHandle, pvData, cubData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileWriteStreamClose(intptr_t instancePtr, UGCFileWriteStreamHandle_t writeHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileWriteStreamClose(writeHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileWriteStreamCancel(intptr_t instancePtr, UGCFileWriteStreamHandle_t writeHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileWriteStreamCancel(writeHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FileExists(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FileExists(pchFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_FilePersisted(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->FilePersisted(pchFile);
}

S_API int32 S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetFileSize(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetFileSize(pchFile);
}

S_API int64 S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetFileTimestamp(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetFileTimestamp(pchFile);
}

S_API ERemoteStoragePlatform S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetSyncPlatforms(intptr_t instancePtr, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetSyncPlatforms(pchFile);
}

S_API int32 S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetFileCount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetFileCount();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetFileNameAndSize(intptr_t instancePtr, int iFile, int32 * pnFileSizeInBytes)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetFileNameAndSize(iFile, pnFileSizeInBytes);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetQuota(intptr_t instancePtr, uint64 * pnTotalBytes, uint64 * puAvailableBytes)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetQuota(pnTotalBytes, puAvailableBytes);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_IsCloudEnabledForAccount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->IsCloudEnabledForAccount();
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_IsCloudEnabledForApp(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->IsCloudEnabledForApp();
}

S_API void S_CALLTYPE SteamAPI_ISteamRemoteStorage_SetCloudEnabledForApp(intptr_t instancePtr, bool bEnabled)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->SetCloudEnabledForApp(bEnabled);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_UGCDownload(intptr_t instancePtr, UGCHandle_t hContent, uint32 unPriority)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UGCDownload(hContent, unPriority);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetUGCDownloadProgress(intptr_t instancePtr, UGCHandle_t hContent, int32 * pnBytesDownloaded, int32 * pnBytesExpected)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetUGCDownloadProgress(hContent, pnBytesDownloaded, pnBytesExpected);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetUGCDetails(intptr_t instancePtr, UGCHandle_t hContent, AppId_t * pnAppID, char ** ppchName, int32 * pnFileSizeInBytes, class CSteamID * pSteamIDOwner)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetUGCDetails(hContent, pnAppID, ppchName, pnFileSizeInBytes, pSteamIDOwner);
}

S_API int32 S_CALLTYPE SteamAPI_ISteamRemoteStorage_UGCRead(intptr_t instancePtr, UGCHandle_t hContent, void * pvData, int32 cubDataToRead, uint32 cOffset, EUGCReadAction eAction)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UGCRead(hContent, pvData, cubDataToRead, cOffset, eAction);
}

S_API int32 S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetCachedUGCCount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetCachedUGCCount();
}

S_API UGCHandle_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetCachedUGCHandle(intptr_t instancePtr, int32 iCachedContent)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetCachedUGCHandle(iCachedContent);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_PublishWorkshopFile(intptr_t instancePtr, const char * pchFile, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, struct SteamParamStringArray_t * pTags, EWorkshopFileType eWorkshopFileType)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags, eWorkshopFileType);
}

S_API PublishedFileUpdateHandle_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_CreatePublishedFileUpdateRequest(intptr_t instancePtr, PublishedFileId_t unPublishedFileId)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->CreatePublishedFileUpdateRequest(unPublishedFileId);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdatePublishedFileFile(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle, const char * pchFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdatePublishedFileFile(updateHandle, pchFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdatePublishedFilePreviewFile(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle, const char * pchPreviewFile)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTitle(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle, const char * pchTitle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdatePublishedFileTitle(updateHandle, pchTitle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdatePublishedFileDescription(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle, const char * pchDescription)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdatePublishedFileDescription(updateHandle, pchDescription);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdatePublishedFileVisibility(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdatePublishedFileVisibility(updateHandle, eVisibility);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdatePublishedFileTags(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle, struct SteamParamStringArray_t * pTags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdatePublishedFileTags(updateHandle, pTags);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_CommitPublishedFileUpdate(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->CommitPublishedFileUpdate(updateHandle);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetPublishedFileDetails(intptr_t instancePtr, PublishedFileId_t unPublishedFileId, uint32 unMaxSecondsOld)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetPublishedFileDetails(unPublishedFileId, unMaxSecondsOld);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_DeletePublishedFile(intptr_t instancePtr, PublishedFileId_t unPublishedFileId)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->DeletePublishedFile(unPublishedFileId);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_EnumerateUserPublishedFiles(intptr_t instancePtr, uint32 unStartIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->EnumerateUserPublishedFiles(unStartIndex);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_SubscribePublishedFile(intptr_t instancePtr, PublishedFileId_t unPublishedFileId)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->SubscribePublishedFile(unPublishedFileId);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_EnumerateUserSubscribedFiles(intptr_t instancePtr, uint32 unStartIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->EnumerateUserSubscribedFiles(unStartIndex);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_UnsubscribePublishedFile(intptr_t instancePtr, PublishedFileId_t unPublishedFileId)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UnsubscribePublishedFile(unPublishedFileId);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(intptr_t instancePtr, PublishedFileUpdateHandle_t updateHandle, const char * pchChangeDescription)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetPublishedItemVoteDetails(intptr_t instancePtr, PublishedFileId_t unPublishedFileId)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetPublishedItemVoteDetails(unPublishedFileId);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_UpdateUserPublishedItemVote(intptr_t instancePtr, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_GetUserPublishedItemVoteDetails(intptr_t instancePtr, PublishedFileId_t unPublishedFileId)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->GetUserPublishedItemVoteDetails(unPublishedFileId);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(intptr_t instancePtr, class CSteamID steamId, uint32 unStartIndex, struct SteamParamStringArray_t * pRequiredTags, struct SteamParamStringArray_t * pExcludedTags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, pRequiredTags, pExcludedTags);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_PublishVideo(intptr_t instancePtr, EWorkshopVideoProvider eVideoProvider, const char * pchVideoAccount, const char * pchVideoIdentifier, const char * pchPreviewFile, AppId_t nConsumerAppId, const char * pchTitle, const char * pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, struct SteamParamStringArray_t * pTags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->PublishVideo(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, pTags);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_SetUserPublishedFileAction(intptr_t instancePtr, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->SetUserPublishedFileAction(unPublishedFileId, eAction);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(intptr_t instancePtr, EWorkshopFileAction eAction, uint32 unStartIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(intptr_t instancePtr, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, struct SteamParamStringArray_t * pTags, struct SteamParamStringArray_t * pUserTags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, pTags, pUserTags);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamRemoteStorage_UGCDownloadToLocation(intptr_t instancePtr, UGCHandle_t hContent, const char * pchLocation, uint32 unPriority)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemoteStorage()->UGCDownloadToLocation(hContent, pchLocation, unPriority);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_RequestCurrentStats(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->RequestCurrentStats();
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetStatInt32(intptr_t instancePtr, const char * pchName, int32 * pData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetStat(pchName, pData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetStatFloat(intptr_t instancePtr, const char * pchName, float * pData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetStat(pchName, pData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_SetStatInt32(intptr_t instancePtr, const char * pchName, int32 nData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->SetStat(pchName, nData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_SetStatFloat(intptr_t instancePtr, const char * pchName, float fData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->SetStat(pchName, fData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_UpdateAvgRateStat(intptr_t instancePtr, const char * pchName, float flCountThisSession, double dSessionLength)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievement(intptr_t instancePtr, const char * pchName, bool * pbAchieved)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievement(pchName, pbAchieved);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_SetAchievement(intptr_t instancePtr, const char * pchName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->SetAchievement(pchName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_ClearAchievement(intptr_t instancePtr, const char * pchName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->ClearAchievement(pchName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime(intptr_t instancePtr, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievementAndUnlockTime(pchName, pbAchieved, punUnlockTime);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_StoreStats(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->StoreStats();
}

S_API int S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievementIcon(intptr_t instancePtr, const char * pchName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievementIcon(pchName);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute(intptr_t instancePtr, const char * pchName, const char * pchKey)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievementDisplayAttribute(pchName, pchKey);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_IndicateAchievementProgress(intptr_t instancePtr, const char * pchName, uint32 nCurProgress, uint32 nMaxProgress)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUserStats_GetNumAchievements(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetNumAchievements();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievementName(intptr_t instancePtr, uint32 iAchievement)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievementName(iAchievement);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_RequestUserStats(intptr_t instancePtr, class CSteamID steamIDUser)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->RequestUserStats(steamIDUser);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetUserStatInt32(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, int32 * pData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetUserStat(steamIDUser, pchName, pData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetUserStatFloat(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, float * pData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetUserStat(steamIDUser, pchName, pData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetUserAchievement(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetUserAchievementAndUnlockTime(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, bool * pbAchieved, uint32 * punUnlockTime)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetUserAchievementAndUnlockTime(steamIDUser, pchName, pbAchieved, punUnlockTime);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_ResetAllStats(intptr_t instancePtr, bool bAchievementsToo)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->ResetAllStats(bAchievementsToo);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_FindOrCreateLeaderboard(intptr_t instancePtr, const char * pchLeaderboardName, ELeaderboardSortMethod eLeaderboardSortMethod, ELeaderboardDisplayType eLeaderboardDisplayType)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_FindLeaderboard(intptr_t instancePtr, const char * pchLeaderboardName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->FindLeaderboard(pchLeaderboardName);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamUserStats_GetLeaderboardName(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetLeaderboardName(hSteamLeaderboard);
}

S_API int S_CALLTYPE SteamAPI_ISteamUserStats_GetLeaderboardEntryCount(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetLeaderboardEntryCount(hSteamLeaderboard);
}

S_API ELeaderboardSortMethod S_CALLTYPE SteamAPI_ISteamUserStats_GetLeaderboardSortMethod(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetLeaderboardSortMethod(hSteamLeaderboard);
}

S_API ELeaderboardDisplayType S_CALLTYPE SteamAPI_ISteamUserStats_GetLeaderboardDisplayType(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetLeaderboardDisplayType(hSteamLeaderboard);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_DownloadLeaderboardEntries(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardDataRequest eLeaderboardDataRequest, int nRangeStart, int nRangeEnd)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_DownloadLeaderboardEntriesForUsers(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard, class CSteamID * prgUsers, int cUsers)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->DownloadLeaderboardEntriesForUsers(hSteamLeaderboard, prgUsers, cUsers);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetDownloadedLeaderboardEntry(intptr_t instancePtr, SteamLeaderboardEntries_t hSteamLeaderboardEntries, int index, struct LeaderboardEntry_t * pLeaderboardEntry, int32 * pDetails, int cDetailsMax)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_UploadLeaderboardScore(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard, ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod, int32 nScore, const int32 * pScoreDetails, int cScoreDetailsCount)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_AttachLeaderboardUGC(intptr_t instancePtr, SteamLeaderboard_t hSteamLeaderboard, UGCHandle_t hUGC)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->AttachLeaderboardUGC(hSteamLeaderboard, hUGC);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_GetNumberOfCurrentPlayers(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetNumberOfCurrentPlayers();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_RequestGlobalAchievementPercentages(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->RequestGlobalAchievementPercentages();
}

S_API int S_CALLTYPE SteamAPI_ISteamUserStats_GetMostAchievedAchievementInfo(intptr_t instancePtr, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetMostAchievedAchievementInfo(pchName, unNameBufLen, pflPercent, pbAchieved);
}

S_API int S_CALLTYPE SteamAPI_ISteamUserStats_GetNextMostAchievedAchievementInfo(intptr_t instancePtr, int iIteratorPrevious, char * pchName, uint32 unNameBufLen, float * pflPercent, bool * pbAchieved)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetNextMostAchievedAchievementInfo(iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievementAchievedPercent(intptr_t instancePtr, const char * pchName, float * pflPercent)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievementAchievedPercent(pchName, pflPercent);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUserStats_RequestGlobalStats(intptr_t instancePtr, int nHistoryDays)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->RequestGlobalStats(nHistoryDays);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetGlobalStatInt64(intptr_t instancePtr, const char * pchStatName, int64 * pData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetGlobalStat(pchStatName, pData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetGlobalStatDouble(intptr_t instancePtr, const char * pchStatName, double * pData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetGlobalStat(pchStatName, pData);
}

S_API int32 S_CALLTYPE SteamAPI_ISteamUserStats_GetGlobalStatHistoryInt64(intptr_t instancePtr, const char * pchStatName, int64 * pData, uint32 cubData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetGlobalStatHistory(pchStatName, pData, cubData);
}

S_API int32 S_CALLTYPE SteamAPI_ISteamUserStats_GetGlobalStatHistoryDouble(intptr_t instancePtr, const char * pchStatName, double * pData, uint32 cubData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetGlobalStatHistory(pchStatName, pData, cubData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievementProgressLimitsInt32(intptr_t instancePtr, const char* pchName, int32* pnMinProgress, int32* pnMaxProgress)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievementProgressLimits(pchName, pnMinProgress, pnMaxProgress);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUserStats_GetAchievementProgressLimitsFloat(intptr_t instancePtr, const char* pchName, float* pfMinProgress, float* pfMaxProgress)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUserStats()->GetAchievementProgressLimits(pchName, pfMinProgress, pfMaxProgress);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsSubscribed(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsSubscribed();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsSubscribed();
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsLowViolence(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsLowViolence();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsLowViolence();
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsCybercafe(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsCybercafe();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsCybercafe();
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsVACBanned(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsVACBanned();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsVACBanned();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamApps_GetCurrentGameLanguage(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetCurrentGameLanguage();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetCurrentGameLanguage();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamApps_GetAvailableGameLanguages(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetAvailableGameLanguages();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetAvailableGameLanguages();
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsSubscribedApp(intptr_t instancePtr, AppId_t appID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsSubscribedApp(appID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsSubscribedApp(appID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsDlcInstalled(intptr_t instancePtr, AppId_t appID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsDlcInstalled(appID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsDlcInstalled(appID);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamApps_GetEarliestPurchaseUnixTime(intptr_t instancePtr, AppId_t nAppID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetEarliestPurchaseUnixTime(nAppID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetEarliestPurchaseUnixTime(nAppID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsSubscribedFromFreeWeekend(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsSubscribedFromFreeWeekend();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsSubscribedFromFreeWeekend();
}

S_API int S_CALLTYPE SteamAPI_ISteamApps_GetDLCCount(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetDLCCount();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetDLCCount();
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BGetDLCDataByIndex(intptr_t instancePtr, int iDLC, AppId_t * pAppID, bool * pbAvailable, char * pchName, int cchNameBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BGetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BGetDLCDataByIndex(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize);
}

S_API void S_CALLTYPE SteamAPI_ISteamApps_InstallDLC(intptr_t instancePtr, AppId_t nAppID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->InstallDLC(nAppID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->InstallDLC(nAppID);
}

S_API void S_CALLTYPE SteamAPI_ISteamApps_UninstallDLC(intptr_t instancePtr, AppId_t nAppID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->UninstallDLC(nAppID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->UninstallDLC(nAppID);
}

S_API void S_CALLTYPE SteamAPI_ISteamApps_RequestAppProofOfPurchaseKey(intptr_t instancePtr, AppId_t nAppID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->RequestAppProofOfPurchaseKey(nAppID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->RequestAppProofOfPurchaseKey(nAppID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_GetCurrentBetaName(intptr_t instancePtr, char * pchName, int cchNameBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetCurrentBetaName(pchName, cchNameBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetCurrentBetaName(pchName, cchNameBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_MarkContentCorrupt(intptr_t instancePtr, bool bMissingFilesOnly)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->MarkContentCorrupt(bMissingFilesOnly);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->MarkContentCorrupt(bMissingFilesOnly);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamApps_GetInstalledDepots(intptr_t instancePtr, AppId_t appID, DepotId_t * pvecDepots, uint32 cMaxDepots)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetInstalledDepots(appID, pvecDepots, cMaxDepots);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetInstalledDepots(appID, pvecDepots, cMaxDepots);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamApps_GetAppInstallDir(intptr_t instancePtr, AppId_t appID, char * pchFolder, uint32 cchFolderBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsAppInstalled(intptr_t instancePtr, AppId_t appID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsAppInstalled(appID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsAppInstalled(appID);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamApps_GetAppOwner(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetAppOwner().ConvertToUint64();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetAppOwner().ConvertToUint64();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamApps_GetLaunchQueryParam(intptr_t instancePtr, const char * pchKey)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetLaunchQueryParam(pchKey);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetLaunchQueryParam(pchKey);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_GetDlcDownloadProgress(intptr_t instancePtr, AppId_t nAppID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetDlcDownloadProgress(nAppID, punBytesDownloaded, punBytesTotal);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetDlcDownloadProgress(nAppID, punBytesDownloaded, punBytesTotal);
}

S_API int S_CALLTYPE SteamAPI_ISteamApps_GetAppBuildId(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetAppBuildId();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetAppBuildId();
}

S_API void S_CALLTYPE SteamAPI_ISteamApps_RequestAllProofOfPurchaseKeys(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->RequestAllProofOfPurchaseKeys();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->RequestAllProofOfPurchaseKeys();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamApps_GetFileDetails(intptr_t instancePtr, const char * pszFileName)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetFileDetails(pszFileName);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetFileDetails(pszFileName);
}

S_API int S_CALLTYPE SteamAPI_ISteamApps_GetLaunchCommandLine(intptr_t instancePtr, char * pszCommandLine, int cubCommandLine)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->GetLaunchCommandLine(pszCommandLine, cubCommandLine);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->GetLaunchCommandLine(pszCommandLine, cubCommandLine);
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsSubscribedFromFamilySharing(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsSubscribedFromFamilySharing();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsSubscribedFromFamilySharing();
}

S_API bool S_CALLTYPE SteamAPI_ISteamApps_BIsTimedTrial(intptr_t instancePtr, uint32* punSecondsAllowed, uint32* punSecondsPlayed)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamApps() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamApps()->BIsTimedTrial(punSecondsAllowed, punSecondsPlayed);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamApps()->BIsTimedTrial(punSecondsAllowed, punSecondsPlayed);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_SendP2PPacket(intptr_t instancePtr, class CSteamID steamIDRemote, const void * pubData, uint32 cubData, EP2PSend eP2PSendType, int nChannel)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_IsP2PPacketAvailable(intptr_t instancePtr, uint32 * pcubMsgSize, int nChannel)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->IsP2PPacketAvailable(pcubMsgSize, nChannel);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->IsP2PPacketAvailable(pcubMsgSize, nChannel);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_ReadP2PPacket(intptr_t instancePtr, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, class CSteamID * psteamIDRemote, int nChannel)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->ReadP2PPacket(pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->ReadP2PPacket(pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser(intptr_t instancePtr, class CSteamID steamIDRemote)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->AcceptP2PSessionWithUser(steamIDRemote);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->AcceptP2PSessionWithUser(steamIDRemote);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_CloseP2PSessionWithUser(intptr_t instancePtr, class CSteamID steamIDRemote)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->CloseP2PSessionWithUser(steamIDRemote);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->CloseP2PSessionWithUser(steamIDRemote);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_CloseP2PChannelWithUser(intptr_t instancePtr, class CSteamID steamIDRemote, int nChannel)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->CloseP2PChannelWithUser(steamIDRemote, nChannel);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->CloseP2PChannelWithUser(steamIDRemote, nChannel);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_GetP2PSessionState(intptr_t instancePtr, class CSteamID steamIDRemote, struct P2PSessionState_t * pConnectionState)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->GetP2PSessionState(steamIDRemote, pConnectionState);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->GetP2PSessionState(steamIDRemote, pConnectionState);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_AllowP2PPacketRelay(intptr_t instancePtr, bool bAllow)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->AllowP2PPacketRelay(bAllow);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->AllowP2PPacketRelay(bAllow);
}

S_API SNetListenSocket_t S_CALLTYPE SteamAPI_ISteamNetworking_CreateListenSocket(intptr_t instancePtr, int nVirtualP2PPort, struct SteamIPAddress_t nIP, uint16 nPort, bool bAllowUseOfPacketRelay)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->CreateListenSocket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->CreateListenSocket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
}

S_API SNetSocket_t S_CALLTYPE SteamAPI_ISteamNetworking_CreateP2PConnectionSocket(intptr_t instancePtr, class CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec, bool bAllowUseOfPacketRelay)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->CreateP2PConnectionSocket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->CreateP2PConnectionSocket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
}

S_API SNetSocket_t S_CALLTYPE SteamAPI_ISteamNetworking_CreateConnectionSocket(intptr_t instancePtr, struct SteamIPAddress_t nIP, uint16 nPort, int nTimeoutSec)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->CreateConnectionSocket(nIP, nPort, nTimeoutSec);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->CreateConnectionSocket(nIP, nPort, nTimeoutSec);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_DestroySocket(intptr_t instancePtr, SNetSocket_t hSocket, bool bNotifyRemoteEnd)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->DestroySocket(hSocket, bNotifyRemoteEnd);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->DestroySocket(hSocket, bNotifyRemoteEnd);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_DestroyListenSocket(intptr_t instancePtr, SNetListenSocket_t hSocket, bool bNotifyRemoteEnd)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->DestroyListenSocket(hSocket, bNotifyRemoteEnd);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->DestroyListenSocket(hSocket, bNotifyRemoteEnd);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_SendDataOnSocket(intptr_t instancePtr, SNetSocket_t hSocket, void * pubData, uint32 cubData, bool bReliable)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->SendDataOnSocket(hSocket, pubData, cubData, bReliable);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->SendDataOnSocket(hSocket, pubData, cubData, bReliable);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_IsDataAvailableOnSocket(intptr_t instancePtr, SNetSocket_t hSocket, uint32 * pcubMsgSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->IsDataAvailableOnSocket(hSocket, pcubMsgSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->IsDataAvailableOnSocket(hSocket, pcubMsgSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_RetrieveDataFromSocket(intptr_t instancePtr, SNetSocket_t hSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->RetrieveDataFromSocket(hSocket, pubDest, cubDest, pcubMsgSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_IsDataAvailable(intptr_t instancePtr, SNetListenSocket_t hListenSocket, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->IsDataAvailable(hListenSocket, pcubMsgSize, phSocket);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_RetrieveData(intptr_t instancePtr, SNetListenSocket_t hListenSocket, void * pubDest, uint32 cubDest, uint32 * pcubMsgSize, SNetSocket_t * phSocket)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->RetrieveData(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_GetSocketInfo(intptr_t instancePtr, SNetSocket_t hSocket, class CSteamID * pSteamIDRemote, int * peSocketStatus, struct SteamIPAddress_t* punIPRemote, uint16 * punPortRemote)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->GetSocketInfo(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote);
}

S_API bool S_CALLTYPE SteamAPI_ISteamNetworking_GetListenSocketInfo(intptr_t instancePtr, SNetListenSocket_t hListenSocket, struct SteamIPAddress_t* pnIP, uint16 * pnPort)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->GetListenSocketInfo(hListenSocket, pnIP, pnPort);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->GetListenSocketInfo(hListenSocket, pnIP, pnPort);
}

S_API ESNetSocketConnectionType S_CALLTYPE SteamAPI_ISteamNetworking_GetSocketConnectionType(intptr_t instancePtr, SNetSocket_t hSocket)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->GetSocketConnectionType(hSocket);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->GetSocketConnectionType(hSocket);
}

S_API int S_CALLTYPE SteamAPI_ISteamNetworking_GetMaxPacketSize(intptr_t instancePtr, SNetSocket_t hSocket)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamGameServerNetworking() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamGameServerNetworking()->GetMaxPacketSize(hSocket);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamNetworking()->GetMaxPacketSize(hSocket);
}

S_API ScreenshotHandle S_CALLTYPE SteamAPI_ISteamScreenshots_WriteScreenshot(intptr_t instancePtr, void * pubRGB, uint32 cubRGB, int nWidth, int nHeight)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->WriteScreenshot(pubRGB, cubRGB, nWidth, nHeight);
}

S_API ScreenshotHandle S_CALLTYPE SteamAPI_ISteamScreenshots_AddScreenshotToLibrary(intptr_t instancePtr, const char * pchFilename, const char * pchThumbnailFilename, int nWidth, int nHeight)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->AddScreenshotToLibrary(pchFilename, pchThumbnailFilename, nWidth, nHeight);
}

S_API void S_CALLTYPE SteamAPI_ISteamScreenshots_TriggerScreenshot(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->TriggerScreenshot();
}

S_API void S_CALLTYPE SteamAPI_ISteamScreenshots_HookScreenshots(intptr_t instancePtr, bool bHook)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->HookScreenshots(bHook);
}

S_API bool S_CALLTYPE SteamAPI_ISteamScreenshots_SetLocation(intptr_t instancePtr, ScreenshotHandle hScreenshot, const char * pchLocation)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->SetLocation(hScreenshot, pchLocation);
}

S_API bool S_CALLTYPE SteamAPI_ISteamScreenshots_TagUser(intptr_t instancePtr, ScreenshotHandle hScreenshot, class CSteamID steamID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->TagUser(hScreenshot, steamID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamScreenshots_TagPublishedFile(intptr_t instancePtr, ScreenshotHandle hScreenshot, PublishedFileId_t unPublishedFileID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->TagPublishedFile(hScreenshot, unPublishedFileID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamScreenshots_IsScreenshotsHooked(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->IsScreenshotsHooked();
}

S_API ScreenshotHandle S_CALLTYPE SteamAPI_ISteamScreenshots_AddVRScreenshotToLibrary(intptr_t instancePtr, EVRScreenshotType eType, const char * pchFilename, const char * pchVRFilename)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamScreenshots()->AddVRScreenshotToLibrary(eType, pchFilename, pchVRFilename);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusic_BIsEnabled(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->BIsEnabled();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusic_BIsPlaying(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->BIsPlaying();
}

S_API AudioPlayback_Status S_CALLTYPE SteamAPI_ISteamMusic_GetPlaybackStatus(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->GetPlaybackStatus();
}

S_API void S_CALLTYPE SteamAPI_ISteamMusic_Play(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->Play();
}

S_API void S_CALLTYPE SteamAPI_ISteamMusic_Pause(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->Pause();
}

S_API void S_CALLTYPE SteamAPI_ISteamMusic_PlayPrevious(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->PlayPrevious();
}

S_API void S_CALLTYPE SteamAPI_ISteamMusic_PlayNext(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->PlayNext();
}

S_API void S_CALLTYPE SteamAPI_ISteamMusic_SetVolume(intptr_t instancePtr, float flVolume)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->SetVolume(flVolume);
}

S_API float S_CALLTYPE SteamAPI_ISteamMusic_GetVolume(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusic()->GetVolume();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_RegisterSteamMusicRemote(intptr_t instancePtr, const char * pchName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->RegisterSteamMusicRemote(pchName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_DeregisterSteamMusicRemote(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->DeregisterSteamMusicRemote();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_BIsCurrentMusicRemote(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->BIsCurrentMusicRemote();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_BActivationSuccess(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->BActivationSuccess(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_SetDisplayName(intptr_t instancePtr, const char * pchDisplayName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->SetDisplayName(pchDisplayName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_SetPNGIcon_64x64(intptr_t instancePtr, void * pvBuffer, uint32 cbBufferLength)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->SetPNGIcon_64x64(pvBuffer, cbBufferLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_EnablePlayPrevious(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->EnablePlayPrevious(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_EnablePlayNext(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->EnablePlayNext(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_EnableShuffled(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->EnableShuffled(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_EnableLooped(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->EnableLooped(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_EnableQueue(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->EnableQueue(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_EnablePlaylists(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->EnablePlaylists(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_UpdatePlaybackStatus(intptr_t instancePtr, AudioPlayback_Status nStatus)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->UpdatePlaybackStatus(nStatus);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_UpdateShuffled(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->UpdateShuffled(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_UpdateLooped(intptr_t instancePtr, bool bValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->UpdateLooped(bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_UpdateVolume(intptr_t instancePtr, float flValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->UpdateVolume(flValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_CurrentEntryWillChange(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->CurrentEntryWillChange();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_CurrentEntryIsAvailable(intptr_t instancePtr, bool bAvailable)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->CurrentEntryIsAvailable(bAvailable);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_UpdateCurrentEntryText(intptr_t instancePtr, const char * pchText)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->UpdateCurrentEntryText(pchText);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(intptr_t instancePtr, int nValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->UpdateCurrentEntryElapsedSeconds(nValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_UpdateCurrentEntryCoverArt(intptr_t instancePtr, void * pvBuffer, uint32 cbBufferLength)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->UpdateCurrentEntryCoverArt(pvBuffer, cbBufferLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_CurrentEntryDidChange(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->CurrentEntryDidChange();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_QueueWillChange(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->QueueWillChange();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_ResetQueueEntries(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->ResetQueueEntries();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_SetQueueEntry(intptr_t instancePtr, int nID, int nPosition, const char * pchEntryText)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->SetQueueEntry(nID, nPosition, pchEntryText);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_SetCurrentQueueEntry(intptr_t instancePtr, int nID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->SetCurrentQueueEntry(nID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_QueueDidChange(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->QueueDidChange();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_PlaylistWillChange(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->PlaylistWillChange();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_ResetPlaylistEntries(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->ResetPlaylistEntries();
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_SetPlaylistEntry(intptr_t instancePtr, int nID, int nPosition, const char * pchEntryText)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->SetPlaylistEntry(nID, nPosition, pchEntryText);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_SetCurrentPlaylistEntry(intptr_t instancePtr, int nID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->SetCurrentPlaylistEntry(nID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamMusicRemote_PlaylistDidChange(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamMusicRemote()->PlaylistDidChange();
}

S_API HTTPRequestHandle S_CALLTYPE SteamAPI_ISteamHTTP_CreateHTTPRequest(intptr_t instancePtr, EHTTPMethod eHTTPRequestMethod, const char * pchAbsoluteURL)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->CreateHTTPRequest(eHTTPRequestMethod, pchAbsoluteURL);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->CreateHTTPRequest(eHTTPRequestMethod, pchAbsoluteURL);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestContextValue(intptr_t instancePtr, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestContextValue(hRequest, ulContextValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestContextValue(hRequest, ulContextValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(intptr_t instancePtr, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestNetworkActivityTimeout(hRequest, unTimeoutSeconds);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestNetworkActivityTimeout(hRequest, unTimeoutSeconds);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestHeaderValue(intptr_t instancePtr, HTTPRequestHandle hRequest, const char * pchHeaderName, const char * pchHeaderValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestHeaderValue(hRequest, pchHeaderName, pchHeaderValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestHeaderValue(hRequest, pchHeaderName, pchHeaderValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestGetOrPostParameter(intptr_t instancePtr, HTTPRequestHandle hRequest, const char * pchParamName, const char * pchParamValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestGetOrPostParameter(hRequest, pchParamName, pchParamValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestGetOrPostParameter(hRequest, pchParamName, pchParamValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SendHTTPRequest(intptr_t instancePtr, HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SendHTTPRequest(hRequest, pCallHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SendHTTPRequest(hRequest, pCallHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SendHTTPRequestAndStreamResponse(intptr_t instancePtr, HTTPRequestHandle hRequest, SteamAPICall_t * pCallHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SendHTTPRequestAndStreamResponse(hRequest, pCallHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SendHTTPRequestAndStreamResponse(hRequest, pCallHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_DeferHTTPRequest(intptr_t instancePtr, HTTPRequestHandle hRequest)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->DeferHTTPRequest(hRequest);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->DeferHTTPRequest(hRequest);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_PrioritizeHTTPRequest(intptr_t instancePtr, HTTPRequestHandle hRequest)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->PrioritizeHTTPRequest(hRequest);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->PrioritizeHTTPRequest(hRequest);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_GetHTTPResponseHeaderSize(intptr_t instancePtr, HTTPRequestHandle hRequest, const char * pchHeaderName, uint32 * unResponseHeaderSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->GetHTTPResponseHeaderSize(hRequest, pchHeaderName, unResponseHeaderSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->GetHTTPResponseHeaderSize(hRequest, pchHeaderName, unResponseHeaderSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_GetHTTPResponseHeaderValue(intptr_t instancePtr, HTTPRequestHandle hRequest, const char * pchHeaderName, uint8 * pHeaderValueBuffer, uint32 unBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->GetHTTPResponseHeaderValue(hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->GetHTTPResponseHeaderValue(hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_GetHTTPResponseBodySize(intptr_t instancePtr, HTTPRequestHandle hRequest, uint32 * unBodySize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->GetHTTPResponseBodySize(hRequest, unBodySize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->GetHTTPResponseBodySize(hRequest, unBodySize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_GetHTTPResponseBodyData(intptr_t instancePtr, HTTPRequestHandle hRequest, uint8 * pBodyDataBuffer, uint32 unBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->GetHTTPResponseBodyData(hRequest, pBodyDataBuffer, unBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->GetHTTPResponseBodyData(hRequest, pBodyDataBuffer, unBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_GetHTTPStreamingResponseBodyData(intptr_t instancePtr, HTTPRequestHandle hRequest, uint32 cOffset, uint8 * pBodyDataBuffer, uint32 unBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->GetHTTPStreamingResponseBodyData(hRequest, cOffset, pBodyDataBuffer, unBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->GetHTTPStreamingResponseBodyData(hRequest, cOffset, pBodyDataBuffer, unBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_ReleaseHTTPRequest(intptr_t instancePtr, HTTPRequestHandle hRequest)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->ReleaseHTTPRequest(hRequest);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->ReleaseHTTPRequest(hRequest);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_GetHTTPDownloadProgressPct(intptr_t instancePtr, HTTPRequestHandle hRequest, float * pflPercentOut)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->GetHTTPDownloadProgressPct(hRequest, pflPercentOut);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->GetHTTPDownloadProgressPct(hRequest, pflPercentOut);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestRawPostBody(intptr_t instancePtr, HTTPRequestHandle hRequest, const char * pchContentType, uint8 * pubBody, uint32 unBodyLen)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestRawPostBody(hRequest, pchContentType, pubBody, unBodyLen);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestRawPostBody(hRequest, pchContentType, pubBody, unBodyLen);
}

S_API HTTPCookieContainerHandle S_CALLTYPE SteamAPI_ISteamHTTP_CreateCookieContainer(intptr_t instancePtr, bool bAllowResponsesToModify)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->CreateCookieContainer(bAllowResponsesToModify);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->CreateCookieContainer(bAllowResponsesToModify);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_ReleaseCookieContainer(intptr_t instancePtr, HTTPCookieContainerHandle hCookieContainer)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->ReleaseCookieContainer(hCookieContainer);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->ReleaseCookieContainer(hCookieContainer);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetCookie(intptr_t instancePtr, HTTPCookieContainerHandle hCookieContainer, const char * pchHost, const char * pchUrl, const char * pchCookie)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetCookie(hCookieContainer, pchHost, pchUrl, pchCookie);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetCookie(hCookieContainer, pchHost, pchUrl, pchCookie);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestCookieContainer(intptr_t instancePtr, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestCookieContainer(hRequest, hCookieContainer);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestCookieContainer(hRequest, hCookieContainer);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestUserAgentInfo(intptr_t instancePtr, HTTPRequestHandle hRequest, const char * pchUserAgentInfo)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestUserAgentInfo(hRequest, pchUserAgentInfo);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestUserAgentInfo(hRequest, pchUserAgentInfo);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(intptr_t instancePtr, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestRequiresVerifiedCertificate(hRequest, bRequireVerifiedCertificate);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestRequiresVerifiedCertificate(hRequest, bRequireVerifiedCertificate);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(intptr_t instancePtr, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->SetHTTPRequestAbsoluteTimeoutMS(hRequest, unMilliseconds);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->SetHTTPRequestAbsoluteTimeoutMS(hRequest, unMilliseconds);
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTTP_GetHTTPRequestWasTimedOut(intptr_t instancePtr, HTTPRequestHandle hRequest, bool * pbWasTimedOut)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamHTTP() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamHTTP()->GetHTTPRequestWasTimedOut(hRequest, pbWasTimedOut);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTTP()->GetHTTPRequestWasTimedOut(hRequest, pbWasTimedOut);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInput_Init(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->Init();
}

S_API bool S_CALLTYPE SteamAPI_ISteamInput_Shutdown(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->Shutdown();
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_RunFrame(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->RunFrame();
}

S_API int S_CALLTYPE SteamAPI_ISteamInput_GetConnectedControllers(intptr_t instancePtr, InputHandle_t * handlesOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetConnectedControllers(handlesOut);
}

S_API InputActionSetHandle_t S_CALLTYPE SteamAPI_ISteamInput_GetActionSetHandle(intptr_t instancePtr, const char * pszActionSetName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetActionSetHandle(pszActionSetName);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_ActivateActionSet(intptr_t instancePtr, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->ActivateActionSet(inputHandle, actionSetHandle);
}

S_API InputActionSetHandle_t S_CALLTYPE SteamAPI_ISteamInput_GetCurrentActionSet(intptr_t instancePtr, InputHandle_t inputHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetCurrentActionSet(inputHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_ActivateActionSetLayer(intptr_t instancePtr, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->ActivateActionSetLayer(inputHandle, actionSetLayerHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_DeactivateActionSetLayer(intptr_t instancePtr, InputHandle_t inputHandle, InputActionSetHandle_t actionSetLayerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->DeactivateActionSetLayer(inputHandle, actionSetLayerHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_DeactivateAllActionSetLayers(intptr_t instancePtr, InputHandle_t inputHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->DeactivateAllActionSetLayers(inputHandle);
}

S_API int S_CALLTYPE SteamAPI_ISteamInput_GetActiveActionSetLayers(intptr_t instancePtr, InputHandle_t inputHandle, InputActionSetHandle_t * handlesOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetActiveActionSetLayers(inputHandle, handlesOut);
}

S_API InputDigitalActionHandle_t S_CALLTYPE SteamAPI_ISteamInput_GetDigitalActionHandle(intptr_t instancePtr, const char * pszActionName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetDigitalActionHandle(pszActionName);
}

S_API struct InputDigitalActionData_t S_CALLTYPE SteamAPI_ISteamInput_GetDigitalActionData(intptr_t instancePtr, InputHandle_t inputHandle, InputDigitalActionHandle_t digitalActionHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetDigitalActionData(inputHandle, digitalActionHandle);
}

S_API int S_CALLTYPE SteamAPI_ISteamInput_GetDigitalActionOrigins(intptr_t instancePtr, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputDigitalActionHandle_t digitalActionHandle, EInputActionOrigin * originsOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetDigitalActionOrigins(inputHandle, actionSetHandle, digitalActionHandle, originsOut);
}

S_API InputAnalogActionHandle_t S_CALLTYPE SteamAPI_ISteamInput_GetAnalogActionHandle(intptr_t instancePtr, const char * pszActionName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetAnalogActionHandle(pszActionName);
}

S_API struct InputAnalogActionData_t S_CALLTYPE SteamAPI_ISteamInput_GetAnalogActionData(intptr_t instancePtr, InputHandle_t inputHandle, InputAnalogActionHandle_t analogActionHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetAnalogActionData(inputHandle, analogActionHandle);
}

S_API int S_CALLTYPE SteamAPI_ISteamInput_GetAnalogActionOrigins(intptr_t instancePtr, InputHandle_t inputHandle, InputActionSetHandle_t actionSetHandle, InputAnalogActionHandle_t analogActionHandle, EInputActionOrigin * originsOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetAnalogActionOrigins(inputHandle, actionSetHandle, analogActionHandle, originsOut);
}

S_API const char * S_CALLTYPE SteamAPI_ISteamInput_GetGlyphForActionOrigin(intptr_t instancePtr, EInputActionOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetGlyphForActionOrigin(eOrigin);
}

S_API const char * S_CALLTYPE SteamAPI_ISteamInput_GetStringForActionOrigin(intptr_t instancePtr, EInputActionOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetStringForActionOrigin(eOrigin);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_StopAnalogActionMomentum(intptr_t instancePtr, InputHandle_t inputHandle, InputAnalogActionHandle_t eAction)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->StopAnalogActionMomentum(inputHandle, eAction);
}

S_API struct InputMotionData_t S_CALLTYPE SteamAPI_ISteamInput_GetMotionData(intptr_t instancePtr, InputHandle_t inputHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetMotionData(inputHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_TriggerVibration(intptr_t instancePtr, InputHandle_t inputHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->TriggerVibration(inputHandle, usLeftSpeed, usRightSpeed);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_SetLEDColor(intptr_t instancePtr, InputHandle_t inputHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->SetLEDColor(inputHandle, nColorR, nColorG, nColorB, nFlags);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_TriggerHapticPulse(intptr_t instancePtr, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->TriggerHapticPulse(inputHandle, eTargetPad, usDurationMicroSec);
}

S_API void S_CALLTYPE SteamAPI_ISteamInput_TriggerRepeatedHapticPulse(intptr_t instancePtr, InputHandle_t inputHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->TriggerRepeatedHapticPulse(inputHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInput_ShowBindingPanel(intptr_t instancePtr, InputHandle_t inputHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->ShowBindingPanel(inputHandle);
}

S_API ESteamInputType S_CALLTYPE SteamAPI_ISteamInput_GetInputTypeForHandle(intptr_t instancePtr, InputHandle_t inputHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetInputTypeForHandle(inputHandle);
}

S_API InputHandle_t S_CALLTYPE SteamAPI_ISteamInput_GetControllerForGamepadIndex(intptr_t instancePtr, int nIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetControllerForGamepadIndex(nIndex);
}

S_API int S_CALLTYPE SteamAPI_ISteamInput_GetGamepadIndexForController(intptr_t instancePtr, InputHandle_t ulinputHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetGamepadIndexForController(ulinputHandle);
}

S_API const char * S_CALLTYPE SteamAPI_ISteamInput_GetStringForXboxOrigin(intptr_t instancePtr, EXboxOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetStringForXboxOrigin(eOrigin);
}

S_API const char * S_CALLTYPE SteamAPI_ISteamInput_GetGlyphForXboxOrigin(intptr_t instancePtr, EXboxOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetGlyphForXboxOrigin(eOrigin);
}

S_API EInputActionOrigin S_CALLTYPE SteamAPI_ISteamInput_GetActionOriginFromXboxOrigin(intptr_t instancePtr, InputHandle_t inputHandle, EXboxOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetActionOriginFromXboxOrigin(inputHandle, eOrigin);
}

S_API EInputActionOrigin S_CALLTYPE SteamAPI_ISteamInput_TranslateActionOrigin(intptr_t instancePtr, ESteamInputType eDestinationInputType, EInputActionOrigin eSourceOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->TranslateActionOrigin(eDestinationInputType, eSourceOrigin);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInput_GetDeviceBindingRevision(intptr_t instancePtr, InputHandle_t inputHandle, int* pMajor, int* pMinor)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetDeviceBindingRevision(inputHandle, pMajor, pMinor);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamInput_GetRemotePlaySessionID(intptr_t instancePtr, InputHandle_t inputHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInput()->GetRemotePlaySessionID(inputHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamController_Init(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->Init();
}

S_API bool S_CALLTYPE SteamAPI_ISteamController_Shutdown(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->Shutdown();
}

S_API void S_CALLTYPE SteamAPI_ISteamController_RunFrame(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->RunFrame();
}

S_API int S_CALLTYPE SteamAPI_ISteamController_GetConnectedControllers(intptr_t instancePtr, ControllerHandle_t * handlesOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetConnectedControllers(handlesOut);
}

S_API ControllerActionSetHandle_t S_CALLTYPE SteamAPI_ISteamController_GetActionSetHandle(intptr_t instancePtr, const char * pszActionSetName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetActionSetHandle(pszActionSetName);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_ActivateActionSet(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->ActivateActionSet(controllerHandle, actionSetHandle);
}

S_API ControllerActionSetHandle_t S_CALLTYPE SteamAPI_ISteamController_GetCurrentActionSet(intptr_t instancePtr, ControllerHandle_t controllerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetCurrentActionSet(controllerHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_ActivateActionSetLayer(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->ActivateActionSetLayer(controllerHandle, actionSetLayerHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_DeactivateActionSetLayer(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetLayerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->DeactivateActionSetLayer(controllerHandle, actionSetLayerHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_DeactivateAllActionSetLayers(intptr_t instancePtr, ControllerHandle_t controllerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->DeactivateAllActionSetLayers(controllerHandle);
}

S_API int S_CALLTYPE SteamAPI_ISteamController_GetActiveActionSetLayers(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t * handlesOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetActiveActionSetLayers(controllerHandle, handlesOut);
}

S_API ControllerDigitalActionHandle_t S_CALLTYPE SteamAPI_ISteamController_GetDigitalActionHandle(intptr_t instancePtr, const char * pszActionName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetDigitalActionHandle(pszActionName);
}

S_API struct InputDigitalActionData_t S_CALLTYPE SteamAPI_ISteamController_GetDigitalActionData(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerDigitalActionHandle_t digitalActionHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetDigitalActionData(controllerHandle, digitalActionHandle);
}

S_API int S_CALLTYPE SteamAPI_ISteamController_GetDigitalActionOrigins(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerDigitalActionHandle_t digitalActionHandle, EControllerActionOrigin * originsOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetDigitalActionOrigins(controllerHandle, actionSetHandle, digitalActionHandle, originsOut);
}

S_API ControllerAnalogActionHandle_t S_CALLTYPE SteamAPI_ISteamController_GetAnalogActionHandle(intptr_t instancePtr, const char * pszActionName)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetAnalogActionHandle(pszActionName);
}

S_API struct InputAnalogActionData_t S_CALLTYPE SteamAPI_ISteamController_GetAnalogActionData(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t analogActionHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetAnalogActionData(controllerHandle, analogActionHandle);
}

S_API int S_CALLTYPE SteamAPI_ISteamController_GetAnalogActionOrigins(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerActionSetHandle_t actionSetHandle, ControllerAnalogActionHandle_t analogActionHandle, EControllerActionOrigin * originsOut)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetAnalogActionOrigins(controllerHandle, actionSetHandle, analogActionHandle, originsOut);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamController_GetGlyphForActionOrigin(intptr_t instancePtr, EControllerActionOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetGlyphForActionOrigin(eOrigin);
}

S_API const char* S_CALLTYPE SteamAPI_ISteamController_GetStringForActionOrigin(intptr_t instancePtr, EControllerActionOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetStringForActionOrigin(eOrigin);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_StopAnalogActionMomentum(intptr_t instancePtr, ControllerHandle_t controllerHandle, ControllerAnalogActionHandle_t eAction)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->StopAnalogActionMomentum(controllerHandle, eAction);
}

S_API struct InputMotionData_t S_CALLTYPE SteamAPI_ISteamController_GetMotionData(intptr_t instancePtr, ControllerHandle_t controllerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetMotionData(controllerHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_TriggerHapticPulse(intptr_t instancePtr, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->TriggerHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_TriggerRepeatedHapticPulse(intptr_t instancePtr, ControllerHandle_t controllerHandle, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec, unsigned short usOffMicroSec, unsigned short unRepeat, unsigned int nFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->TriggerRepeatedHapticPulse(controllerHandle, eTargetPad, usDurationMicroSec, usOffMicroSec, unRepeat, nFlags);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_TriggerVibration(intptr_t instancePtr, ControllerHandle_t controllerHandle, unsigned short usLeftSpeed, unsigned short usRightSpeed)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->TriggerVibration(controllerHandle, usLeftSpeed, usRightSpeed);
}

S_API void S_CALLTYPE SteamAPI_ISteamController_SetLEDColor(intptr_t instancePtr, ControllerHandle_t controllerHandle, uint8 nColorR, uint8 nColorG, uint8 nColorB, unsigned int nFlags)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->SetLEDColor(controllerHandle, nColorR, nColorG, nColorB, nFlags);
}

S_API bool S_CALLTYPE SteamAPI_ISteamController_ShowBindingPanel(intptr_t instancePtr, ControllerHandle_t controllerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->ShowBindingPanel(controllerHandle);
}

S_API ESteamInputType S_CALLTYPE SteamAPI_ISteamController_GetInputTypeForHandle(intptr_t instancePtr, ControllerHandle_t controllerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetInputTypeForHandle(controllerHandle);
}

S_API ControllerHandle_t S_CALLTYPE SteamAPI_ISteamController_GetControllerForGamepadIndex(intptr_t instancePtr, int nIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetControllerForGamepadIndex(nIndex);
}

S_API int S_CALLTYPE SteamAPI_ISteamController_GetGamepadIndexForController(intptr_t instancePtr, ControllerHandle_t ulControllerHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetGamepadIndexForController(ulControllerHandle);
}

S_API const char * S_CALLTYPE SteamAPI_ISteamController_GetStringForXboxOrigin(intptr_t instancePtr, EXboxOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetStringForXboxOrigin(eOrigin);
}

S_API const char * S_CALLTYPE SteamAPI_ISteamController_GetGlyphForXboxOrigin(intptr_t instancePtr, EXboxOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetGlyphForXboxOrigin(eOrigin);
}

S_API EControllerActionOrigin S_CALLTYPE SteamAPI_ISteamController_GetActionOriginFromXboxOrigin(intptr_t instancePtr, ControllerHandle_t controllerHandle, EXboxOrigin eOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetActionOriginFromXboxOrigin(controllerHandle, eOrigin);
}

S_API EControllerActionOrigin S_CALLTYPE SteamAPI_ISteamController_TranslateActionOrigin(intptr_t instancePtr, ESteamInputType eDestinationInputType, EControllerActionOrigin eSourceOrigin)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->TranslateActionOrigin(eDestinationInputType, eSourceOrigin);
}

S_API bool S_CALLTYPE SteamAPI_ISteamController_GetControllerBindingRevision(intptr_t instancePtr, ControllerHandle_t controllerHandle, int* pMajor, int* pMinor)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamController()->GetControllerBindingRevision(controllerHandle, pMajor, pMinor);
}

S_API UGCQueryHandle_t S_CALLTYPE SteamAPI_ISteamUGC_CreateQueryUserUGCRequest(intptr_t instancePtr, AccountID_t unAccountID, EUserUGCList eListType, EUGCMatchingUGCType eMatchingUGCType, EUserUGCListSortOrder eSortOrder, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
}

S_API UGCQueryHandle_t S_CALLTYPE SteamAPI_ISteamUGC_CreateQueryAllUGCRequestPage(intptr_t instancePtr, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, uint32 unPage)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
}

S_API UGCQueryHandle_t SteamAPI_ISteamUGC_CreateQueryAllUGCRequestCursor(intptr_t instancePtr, EUGCQuery eQueryType, EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType, AppId_t nCreatorAppID, AppId_t nConsumerAppID, const char * pchCursor)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
}

S_API UGCQueryHandle_t S_CALLTYPE SteamAPI_ISteamUGC_CreateQueryUGCDetailsRequest(intptr_t instancePtr, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->CreateQueryUGCDetailsRequest(pvecPublishedFileID, unNumPublishedFileIDs);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->CreateQueryUGCDetailsRequest(pvecPublishedFileID, unNumPublishedFileIDs);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_SendQueryUGCRequest(intptr_t instancePtr, UGCQueryHandle_t handle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SendQueryUGCRequest(handle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SendQueryUGCRequest(handle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCResult(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, struct SteamUGCDetails_t * pDetails)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCResult(handle, index, pDetails);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCResult(handle, index, pDetails);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCPreviewURL(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, char * pchURL, uint32 cchURLSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCPreviewURL(handle, index, pchURL, cchURLSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCPreviewURL(handle, index, pchURL, cchURLSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCMetadata(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, char * pchMetadata, uint32 cchMetadatasize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCMetadata(handle, index, pchMetadata, cchMetadatasize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCMetadata(handle, index, pchMetadata, cchMetadatasize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCChildren(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCChildren(handle, index, pvecPublishedFileID, cMaxEntries);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCChildren(handle, index, pvecPublishedFileID, cMaxEntries);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCStatistic(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, EItemStatistic eStatType, uint64 * pStatValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCStatistic(handle, index, eStatType, pStatValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCStatistic(handle, index, eStatType, pStatValue);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCNumAdditionalPreviews(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCNumAdditionalPreviews(handle, index);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCNumAdditionalPreviews(handle, index);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCAdditionalPreview(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, uint32 previewIndex, char * pchURLOrVideoID, uint32 cchURLSize, char * pchOriginalFileName, uint32 cchOriginalFileNameSize, EItemPreviewType * pPreviewType)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCAdditionalPreview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCAdditionalPreview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCNumKeyValueTags(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCNumKeyValueTags(handle, index);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCNumKeyValueTags(handle, index);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryUGCKeyValueTag(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, uint32 keyValueTagIndex, char * pchKey, uint32 cchKeySize, char * pchValue, uint32 cchValueSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetQueryFirstUGCKeyValueTag(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 index, const char* pchKey, char* pchValue, uint32 cchValueSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetQueryUGCKeyValueTag(handle, index, pchKey, pchValue, cchValueSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetQueryUGCKeyValueTag(handle, index, pchKey, pchValue, cchValueSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_ReleaseQueryUGCRequest(intptr_t instancePtr, UGCQueryHandle_t handle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->ReleaseQueryUGCRequest(handle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->ReleaseQueryUGCRequest(handle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_AddRequiredTag(intptr_t instancePtr, UGCQueryHandle_t handle, const char * pTagName)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddRequiredTag(handle, pTagName);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddRequiredTag(handle, pTagName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_AddRequiredTagGroup(intptr_t instancePtr, UGCQueryHandle_t handle, const struct SteamParamStringArray_t* pTagGroups)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddRequiredTagGroup(handle, pTagGroups);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddRequiredTagGroup(handle, pTagGroups);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_AddExcludedTag(intptr_t instancePtr, UGCQueryHandle_t handle, const char * pTagName)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddExcludedTag(handle, pTagName);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddExcludedTag(handle, pTagName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnOnlyIDs(intptr_t instancePtr, UGCQueryHandle_t handle, bool bReturnOnlyIDs)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnOnlyIDs(handle, bReturnOnlyIDs);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnOnlyIDs(handle, bReturnOnlyIDs);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnKeyValueTags(intptr_t instancePtr, UGCQueryHandle_t handle, bool bReturnKeyValueTags)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnKeyValueTags(handle, bReturnKeyValueTags);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnKeyValueTags(handle, bReturnKeyValueTags);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnLongDescription(intptr_t instancePtr, UGCQueryHandle_t handle, bool bReturnLongDescription)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnLongDescription(handle, bReturnLongDescription);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnLongDescription(handle, bReturnLongDescription);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnMetadata(intptr_t instancePtr, UGCQueryHandle_t handle, bool bReturnMetadata)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnMetadata(handle, bReturnMetadata);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnMetadata(handle, bReturnMetadata);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnChildren(intptr_t instancePtr, UGCQueryHandle_t handle, bool bReturnChildren)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnChildren(handle, bReturnChildren);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnChildren(handle, bReturnChildren);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnAdditionalPreviews(intptr_t instancePtr, UGCQueryHandle_t handle, bool bReturnAdditionalPreviews)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnTotalOnly(intptr_t instancePtr, UGCQueryHandle_t handle, bool bReturnTotalOnly)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnTotalOnly(handle, bReturnTotalOnly);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnTotalOnly(handle, bReturnTotalOnly);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetReturnPlaytimeStats(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 unDays)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetReturnPlaytimeStats(handle, unDays);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetReturnPlaytimeStats(handle, unDays);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetLanguage(intptr_t instancePtr, UGCQueryHandle_t handle, const char * pchLanguage)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetLanguage(handle, pchLanguage);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetLanguage(handle, pchLanguage);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetAllowCachedResponse(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 unMaxAgeSeconds)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetAllowCachedResponse(handle, unMaxAgeSeconds);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetAllowCachedResponse(handle, unMaxAgeSeconds);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetCloudFileNameFilter(intptr_t instancePtr, UGCQueryHandle_t handle, const char * pMatchCloudFileName)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetCloudFileNameFilter(handle, pMatchCloudFileName);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetCloudFileNameFilter(handle, pMatchCloudFileName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetMatchAnyTag(intptr_t instancePtr, UGCQueryHandle_t handle, bool bMatchAnyTag)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetMatchAnyTag(handle, bMatchAnyTag);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetMatchAnyTag(handle, bMatchAnyTag);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetSearchText(intptr_t instancePtr, UGCQueryHandle_t handle, const char * pSearchText)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetSearchText(handle, pSearchText);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetSearchText(handle, pSearchText);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetRankedByTrendDays(intptr_t instancePtr, UGCQueryHandle_t handle, uint32 unDays)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetRankedByTrendDays(handle, unDays);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetRankedByTrendDays(handle, unDays);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_AddRequiredKeyValueTag(intptr_t instancePtr, UGCQueryHandle_t handle, const char * pKey, const char * pValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddRequiredKeyValueTag(handle, pKey, pValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddRequiredKeyValueTag(handle, pKey, pValue);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_RequestUGCDetails(intptr_t instancePtr, PublishedFileId_t nPublishedFileID, uint32 unMaxAgeSeconds)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_CreateItem(intptr_t instancePtr, AppId_t nConsumerAppId, EWorkshopFileType eFileType)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->CreateItem(nConsumerAppId, eFileType);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->CreateItem(nConsumerAppId, eFileType);
}

S_API UGCUpdateHandle_t S_CALLTYPE SteamAPI_ISteamUGC_StartItemUpdate(intptr_t instancePtr, AppId_t nConsumerAppId, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->StartItemUpdate(nConsumerAppId, nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->StartItemUpdate(nConsumerAppId, nPublishedFileID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemTitle(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pchTitle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemTitle(handle, pchTitle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemTitle(handle, pchTitle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemDescription(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pchDescription)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemDescription(handle, pchDescription);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemDescription(handle, pchDescription);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemUpdateLanguage(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pchLanguage)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemUpdateLanguage(handle, pchLanguage);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemUpdateLanguage(handle, pchLanguage);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemMetadata(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pchMetaData)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemMetadata(handle, pchMetaData);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemMetadata(handle, pchMetaData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemVisibility(intptr_t instancePtr, UGCUpdateHandle_t handle, ERemoteStoragePublishedFileVisibility eVisibility)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemVisibility(handle, eVisibility);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemVisibility(handle, eVisibility);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemTags(intptr_t instancePtr, UGCUpdateHandle_t updateHandle, const struct SteamParamStringArray_t * pTags)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemTags(updateHandle, pTags);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemTags(updateHandle, pTags);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemContent(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pszContentFolder)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemContent(handle, pszContentFolder);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemContent(handle, pszContentFolder);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetItemPreview(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pszPreviewFile)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetItemPreview(handle, pszPreviewFile);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetItemPreview(handle, pszPreviewFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_SetAllowLegacyUpload(intptr_t instancePtr, UGCUpdateHandle_t handle, bool bAllowLegacyUpload)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetAllowLegacyUpload(handle, bAllowLegacyUpload);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetAllowLegacyUpload(handle, bAllowLegacyUpload);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_RemoveAllItemKeyValueTags(intptr_t instancePtr, UGCUpdateHandle_t handle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->RemoveAllItemKeyValueTags(handle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->RemoveAllItemKeyValueTags(handle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_RemoveItemKeyValueTags(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pchKey)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->RemoveItemKeyValueTags(handle, pchKey);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->RemoveItemKeyValueTags(handle, pchKey);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_AddItemKeyValueTag(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pchKey, const char * pchValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddItemKeyValueTag(handle, pchKey, pchValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddItemKeyValueTag(handle, pchKey, pchValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_AddItemPreviewFile(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pszPreviewFile, EItemPreviewType type)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddItemPreviewFile(handle, pszPreviewFile, type);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddItemPreviewFile(handle, pszPreviewFile, type);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_AddItemPreviewVideo(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pszVideoID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddItemPreviewVideo(handle, pszVideoID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddItemPreviewVideo(handle, pszVideoID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_UpdateItemPreviewFile(intptr_t instancePtr, UGCUpdateHandle_t handle, uint32 index, const char * pszPreviewFile)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->UpdateItemPreviewFile(handle, index, pszPreviewFile);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->UpdateItemPreviewFile(handle, index, pszPreviewFile);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_UpdateItemPreviewVideo(intptr_t instancePtr, UGCUpdateHandle_t handle, uint32 index, const char * pszVideoID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->UpdateItemPreviewVideo(handle, index, pszVideoID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->UpdateItemPreviewVideo(handle, index, pszVideoID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_RemoveItemPreview(intptr_t instancePtr, UGCUpdateHandle_t handle, uint32 index)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->RemoveItemPreview(handle, index);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->RemoveItemPreview(handle, index);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_SubmitItemUpdate(intptr_t instancePtr, UGCUpdateHandle_t handle, const char * pchChangeNote)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SubmitItemUpdate(handle, pchChangeNote);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SubmitItemUpdate(handle, pchChangeNote);
}

S_API EItemUpdateStatus S_CALLTYPE SteamAPI_ISteamUGC_GetItemUpdateProgress(intptr_t instancePtr, UGCUpdateHandle_t handle, uint64 * punBytesProcessed, uint64 * punBytesTotal)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetItemUpdateProgress(handle, punBytesProcessed, punBytesTotal);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_SetUserItemVote(intptr_t instancePtr, PublishedFileId_t nPublishedFileID, bool bVoteUp)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SetUserItemVote(nPublishedFileID, bVoteUp);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SetUserItemVote(nPublishedFileID, bVoteUp);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_GetUserItemVote(intptr_t instancePtr, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetUserItemVote(nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetUserItemVote(nPublishedFileID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_AddItemToFavorites(intptr_t instancePtr, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddItemToFavorites(nAppId, nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddItemToFavorites(nAppId, nPublishedFileID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_RemoveItemFromFavorites(intptr_t instancePtr, AppId_t nAppId, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->RemoveItemFromFavorites(nAppId, nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->RemoveItemFromFavorites(nAppId, nPublishedFileID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_SubscribeItem(intptr_t instancePtr, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SubscribeItem(nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SubscribeItem(nPublishedFileID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_UnsubscribeItem(intptr_t instancePtr, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->UnsubscribeItem(nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->UnsubscribeItem(nPublishedFileID);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUGC_GetNumSubscribedItems(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetNumSubscribedItems();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetNumSubscribedItems();
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUGC_GetSubscribedItems(intptr_t instancePtr, PublishedFileId_t * pvecPublishedFileID, uint32 cMaxEntries)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetSubscribedItems(pvecPublishedFileID, cMaxEntries);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamUGC_GetItemState(intptr_t instancePtr, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetItemState(nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetItemState(nPublishedFileID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetItemInstallInfo(intptr_t instancePtr, PublishedFileId_t nPublishedFileID, uint64 * punSizeOnDisk, char * pchFolder, uint32 cchFolderSize, uint32 * punTimeStamp)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetItemInstallInfo(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_GetItemDownloadInfo(intptr_t instancePtr, PublishedFileId_t nPublishedFileID, uint64 * punBytesDownloaded, uint64 * punBytesTotal)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetItemDownloadInfo(nPublishedFileID, punBytesDownloaded, punBytesTotal);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetItemDownloadInfo(nPublishedFileID, punBytesDownloaded, punBytesTotal);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_DownloadItem(intptr_t instancePtr, PublishedFileId_t nPublishedFileID, bool bHighPriority)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->DownloadItem(nPublishedFileID, bHighPriority);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->DownloadItem(nPublishedFileID, bHighPriority);
}

S_API bool S_CALLTYPE SteamAPI_ISteamUGC_BInitWorkshopForGameServer(intptr_t instancePtr, DepotId_t unWorkshopDepotID, const char * pszFolder)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->BInitWorkshopForGameServer(unWorkshopDepotID, pszFolder);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->BInitWorkshopForGameServer(unWorkshopDepotID, pszFolder);
}

S_API void S_CALLTYPE SteamAPI_ISteamUGC_SuspendDownloads(intptr_t instancePtr, bool bSuspend)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->SuspendDownloads(bSuspend);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->SuspendDownloads(bSuspend);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_StartPlaytimeTracking(intptr_t instancePtr, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->StartPlaytimeTracking(pvecPublishedFileID, unNumPublishedFileIDs);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->StartPlaytimeTracking(pvecPublishedFileID, unNumPublishedFileIDs);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_StopPlaytimeTracking(intptr_t instancePtr, PublishedFileId_t * pvecPublishedFileID, uint32 unNumPublishedFileIDs)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->StopPlaytimeTracking(pvecPublishedFileID, unNumPublishedFileIDs);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->StopPlaytimeTracking(pvecPublishedFileID, unNumPublishedFileIDs);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_StopPlaytimeTrackingForAllItems(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->StopPlaytimeTrackingForAllItems();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->StopPlaytimeTrackingForAllItems();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_AddDependency(intptr_t instancePtr, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddDependency(nParentPublishedFileID, nChildPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddDependency(nParentPublishedFileID, nChildPublishedFileID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_RemoveDependency(intptr_t instancePtr, PublishedFileId_t nParentPublishedFileID, PublishedFileId_t nChildPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->RemoveDependency(nParentPublishedFileID, nChildPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->RemoveDependency(nParentPublishedFileID, nChildPublishedFileID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_AddAppDependency(intptr_t instancePtr, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->AddAppDependency(nPublishedFileID, nAppID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->AddAppDependency(nPublishedFileID, nAppID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_RemoveAppDependency(intptr_t instancePtr, PublishedFileId_t nPublishedFileID, AppId_t nAppID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->RemoveAppDependency(nPublishedFileID, nAppID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->RemoveAppDependency(nPublishedFileID, nAppID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_GetAppDependencies(intptr_t instancePtr, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->GetAppDependencies(nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->GetAppDependencies(nPublishedFileID);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamUGC_DeleteItem(intptr_t instancePtr, PublishedFileId_t nPublishedFileID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamUGC() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamUGC()->DeleteItem(nPublishedFileID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamUGC()->DeleteItem(nPublishedFileID);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamAppList_GetNumInstalledApps(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamAppList()->GetNumInstalledApps();
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamAppList_GetInstalledApps(intptr_t instancePtr, AppId_t * pvecAppID, uint32 unMaxAppIDs)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamAppList()->GetInstalledApps(pvecAppID, unMaxAppIDs);
}

S_API int S_CALLTYPE SteamAPI_ISteamAppList_GetAppName(intptr_t instancePtr, AppId_t nAppID, char * pchName, int cchNameMax)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamAppList()->GetAppName(nAppID, pchName, cchNameMax);
}

S_API int S_CALLTYPE SteamAPI_ISteamAppList_GetAppInstallDir(intptr_t instancePtr, AppId_t nAppID, char * pchDirectory, int cchNameMax)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamAppList()->GetAppInstallDir(nAppID, pchDirectory, cchNameMax);
}

S_API int S_CALLTYPE SteamAPI_ISteamAppList_GetAppBuildId(intptr_t instancePtr, AppId_t nAppID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamAppList()->GetAppBuildId(nAppID);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_DestructISteamHTMLSurface(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->~ISteamHTMLSurface();
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTMLSurface_Init(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->Init();
}

S_API bool S_CALLTYPE SteamAPI_ISteamHTMLSurface_Shutdown(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->Shutdown();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamHTMLSurface_CreateBrowser(intptr_t instancePtr, const char * pchUserAgent, const char * pchUserCSS)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->CreateBrowser(pchUserAgent, pchUserCSS);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_RemoveBrowser(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->RemoveBrowser(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_LoadURL(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, const char * pchURL, const char * pchPostData)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->LoadURL(unBrowserHandle, pchURL, pchPostData);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetSize(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, uint32 unWidth, uint32 unHeight)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetSize(unBrowserHandle, unWidth, unHeight);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_StopLoad(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->StopLoad(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_Reload(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->Reload(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_GoBack(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->GoBack(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_GoForward(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->GoForward(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_AddHeader(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, const char * pchKey, const char * pchValue)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->AddHeader(unBrowserHandle, pchKey, pchValue);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_ExecuteJavascript(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, const char * pchScript)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->ExecuteJavascript(unBrowserHandle, pchScript);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_MouseUp(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->MouseUp(unBrowserHandle, eMouseButton);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_MouseDown(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->MouseDown(unBrowserHandle, eMouseButton);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_MouseDoubleClick(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, ISteamHTMLSurface::EHTMLMouseButton eMouseButton)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->MouseDoubleClick(unBrowserHandle, eMouseButton);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_MouseMove(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, int x, int y)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->MouseMove(unBrowserHandle, x, y);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_MouseWheel(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, int32 nDelta)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->MouseWheel(unBrowserHandle, nDelta);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_KeyDown(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers, bool bIsSystemKey)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->KeyDown(unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers, bIsSystemKey);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_KeyUp(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, uint32 nNativeKeyCode, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->KeyUp(unBrowserHandle, nNativeKeyCode, eHTMLKeyModifiers);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_KeyChar(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, uint32 cUnicodeChar, ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->KeyChar(unBrowserHandle, cUnicodeChar, eHTMLKeyModifiers);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetHorizontalScroll(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetHorizontalScroll(unBrowserHandle, nAbsolutePixelScroll);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetVerticalScroll(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, uint32 nAbsolutePixelScroll)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetVerticalScroll(unBrowserHandle, nAbsolutePixelScroll);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetKeyFocus(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, bool bHasKeyFocus)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetKeyFocus(unBrowserHandle, bHasKeyFocus);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_ViewSource(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->ViewSource(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_CopyToClipboard(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->CopyToClipboard(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_PasteFromClipboard(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->PasteFromClipboard(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_Find(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, const char * pchSearchStr, bool bCurrentlyInFind, bool bReverse)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->Find(unBrowserHandle, pchSearchStr, bCurrentlyInFind, bReverse);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_StopFind(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->StopFind(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_GetLinkAtPosition(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, int x, int y)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->GetLinkAtPosition(unBrowserHandle, x, y);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetCookie(intptr_t instancePtr, const char * pchHostname, const char * pchKey, const char * pchValue, const char * pchPath, RTime32 nExpires, bool bSecure, bool bHTTPOnly)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetCookie(pchHostname, pchKey, pchValue, pchPath, nExpires, bSecure, bHTTPOnly);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetPageScaleFactor(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, float flZoom, int nPointX, int nPointY)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetPageScaleFactor(unBrowserHandle, flZoom, nPointX, nPointY);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetBackgroundMode(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, bool bBackgroundMode)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetBackgroundMode(unBrowserHandle, bBackgroundMode);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_SetDPIScalingFactor(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, float flDPIScaling)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->SetDPIScalingFactor(unBrowserHandle, flDPIScaling);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_OpenDeveloperTools(intptr_t instancePtr, HHTMLBrowser unBrowserHandle)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->OpenDeveloperTools(unBrowserHandle);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_AllowStartRequest(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, bool bAllowed)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->AllowStartRequest(unBrowserHandle, bAllowed);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_JSDialogResponse(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, bool bResult)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->JSDialogResponse(unBrowserHandle, bResult);
}

S_API void S_CALLTYPE SteamAPI_ISteamHTMLSurface_FileLoadDialogResponse(intptr_t instancePtr, HHTMLBrowser unBrowserHandle, const char** pchSelectedFiles)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamHTMLSurface()->FileLoadDialogResponse(unBrowserHandle, pchSelectedFiles);
}

S_API EResult S_CALLTYPE SteamAPI_ISteamInventory_GetResultStatus(intptr_t instancePtr, SteamInventoryResult_t resultHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetResultStatus(resultHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetResultStatus(resultHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetResultItems(intptr_t instancePtr, SteamInventoryResult_t resultHandle, struct SteamItemDetails_t * pOutItemsArray, uint32 * punOutItemsArraySize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetResultItems(resultHandle, pOutItemsArray, punOutItemsArraySize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetResultItems(resultHandle, pOutItemsArray, punOutItemsArraySize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetResultItemProperty(intptr_t instancePtr, SteamInventoryResult_t resultHandle, uint32 unItemIndex, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetResultItemProperty(resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetResultItemProperty(resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamInventory_GetResultTimestamp(intptr_t instancePtr, SteamInventoryResult_t resultHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetResultTimestamp(resultHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetResultTimestamp(resultHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_CheckResultSteamID(intptr_t instancePtr, SteamInventoryResult_t resultHandle, class CSteamID steamIDExpected)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->CheckResultSteamID(resultHandle, steamIDExpected);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->CheckResultSteamID(resultHandle, steamIDExpected);
}

S_API void S_CALLTYPE SteamAPI_ISteamInventory_DestroyResult(intptr_t instancePtr, SteamInventoryResult_t resultHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->DestroyResult(resultHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->DestroyResult(resultHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetAllItems(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetAllItems(pResultHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetAllItems(pResultHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetItemsByID(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, const SteamItemInstanceID_t * pInstanceIDs, uint32 unCountInstanceIDs)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetItemsByID(pResultHandle, pInstanceIDs, unCountInstanceIDs);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetItemsByID(pResultHandle, pInstanceIDs, unCountInstanceIDs);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_SerializeResult(intptr_t instancePtr, SteamInventoryResult_t resultHandle, void * pOutBuffer, uint32 * punOutBufferSize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->SerializeResult(resultHandle, pOutBuffer, punOutBufferSize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->SerializeResult(resultHandle, pOutBuffer, punOutBufferSize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_DeserializeResult(intptr_t instancePtr, SteamInventoryResult_t * pOutResultHandle, const void * pBuffer, uint32 unBufferSize, bool bRESERVED_MUST_BE_FALSE)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->DeserializeResult(pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->DeserializeResult(pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GenerateItems(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GenerateItems(pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GenerateItems(pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GrantPromoItems(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GrantPromoItems(pResultHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GrantPromoItems(pResultHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_AddPromoItem(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, SteamItemDef_t itemDef)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->AddPromoItem(pResultHandle, itemDef);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->AddPromoItem(pResultHandle, itemDef);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_AddPromoItems(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayItemDefs, uint32 unArrayLength)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->AddPromoItems(pResultHandle, pArrayItemDefs, unArrayLength);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->AddPromoItems(pResultHandle, pArrayItemDefs, unArrayLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_ConsumeItem(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemConsume, uint32 unQuantity)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->ConsumeItem(pResultHandle, itemConsume, unQuantity);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->ConsumeItem(pResultHandle, itemConsume, unQuantity);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_ExchangeItems(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, const SteamItemDef_t * pArrayGenerate, const uint32 * punArrayGenerateQuantity, uint32 unArrayGenerateLength, const SteamItemInstanceID_t * pArrayDestroy, const uint32 * punArrayDestroyQuantity, uint32 unArrayDestroyLength)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->ExchangeItems(pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->ExchangeItems(pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_TransferItemQuantity(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, SteamItemInstanceID_t itemIdSource, uint32 unQuantity, SteamItemInstanceID_t itemIdDest)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->TransferItemQuantity(pResultHandle, itemIdSource, unQuantity, itemIdDest);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->TransferItemQuantity(pResultHandle, itemIdSource, unQuantity, itemIdDest);
}

S_API void S_CALLTYPE SteamAPI_ISteamInventory_SendItemDropHeartbeat(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->SendItemDropHeartbeat();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->SendItemDropHeartbeat();
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_TriggerItemDrop(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, SteamItemDef_t dropListDefinition)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->TriggerItemDrop(pResultHandle, dropListDefinition);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->TriggerItemDrop(pResultHandle, dropListDefinition);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_TradeItems(intptr_t instancePtr, SteamInventoryResult_t * pResultHandle, class CSteamID steamIDTradePartner, const SteamItemInstanceID_t * pArrayGive, const uint32 * pArrayGiveQuantity, uint32 nArrayGiveLength, const SteamItemInstanceID_t * pArrayGet, const uint32 * pArrayGetQuantity, uint32 nArrayGetLength)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->TradeItems(pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->TradeItems(pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_LoadItemDefinitions(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->LoadItemDefinitions();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->LoadItemDefinitions();
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetItemDefinitionIDs(intptr_t instancePtr, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetItemDefinitionIDs(pItemDefIDs, punItemDefIDsArraySize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetItemDefinitionIDs(pItemDefIDs, punItemDefIDsArraySize);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetItemDefinitionProperty(intptr_t instancePtr, SteamItemDef_t iDefinition, const char * pchPropertyName, char * pchValueBuffer, uint32 * punValueBufferSizeOut)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetItemDefinitionProperty(iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetItemDefinitionProperty(iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(intptr_t instancePtr, class CSteamID steamID)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->RequestEligiblePromoItemDefinitionsIDs(steamID);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->RequestEligiblePromoItemDefinitionsIDs(steamID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetEligiblePromoItemDefinitionIDs(intptr_t instancePtr, class CSteamID steamID, SteamItemDef_t * pItemDefIDs, uint32 * punItemDefIDsArraySize)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetEligiblePromoItemDefinitionIDs(steamID, pItemDefIDs, punItemDefIDsArraySize);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetEligiblePromoItemDefinitionIDs(steamID, pItemDefIDs, punItemDefIDsArraySize);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamInventory_StartPurchase(intptr_t instancePtr, const SteamItemDef_t * pArrayItemDefs, const uint32 * punArrayQuantity, uint32 unArrayLength)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->StartPurchase(pArrayItemDefs, punArrayQuantity, unArrayLength);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->StartPurchase(pArrayItemDefs, punArrayQuantity, unArrayLength);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamInventory_RequestPrices(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->RequestPrices();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->RequestPrices();
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamInventory_GetNumItemsWithPrices(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetNumItemsWithPrices();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetNumItemsWithPrices();
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetItemsWithPrices(intptr_t instancePtr, SteamItemDef_t *pArrayItemDefs, uint64 *pCurrentPrices, uint64 *pBasePrices, uint32 unArrayLength)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetItemsWithPrices(pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetItemsWithPrices(pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_GetItemPrice(intptr_t instancePtr, SteamItemDef_t iDefinition, uint64 *pCurrentPrice, uint64 *pBasePrice)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->GetItemPrice(iDefinition, pCurrentPrice, pBasePrice);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->GetItemPrice(iDefinition, pCurrentPrice, pBasePrice);
}

S_API SteamInventoryUpdateHandle_t S_CALLTYPE SteamAPI_ISteamInventory_StartUpdateProperties(intptr_t instancePtr)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->StartUpdateProperties();
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->StartUpdateProperties();
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_RemoveProperty(intptr_t instancePtr, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->RemoveProperty(handle, nItemID, pchPropertyName);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->RemoveProperty(handle, nItemID, pchPropertyName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_SetPropertyString(intptr_t instancePtr, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, const char * pchPropertyValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, pchPropertyValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, pchPropertyValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_SetPropertyBool(intptr_t instancePtr, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, bool bValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, bValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, bValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_SetPropertyInt64(intptr_t instancePtr, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, int64 nValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, nValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, nValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_SetPropertyFloat(intptr_t instancePtr, SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t nItemID, const char * pchPropertyName, float flValue)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, flValue);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->SetProperty(handle, nItemID, pchPropertyName, flValue);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_SubmitUpdateProperties(intptr_t instancePtr, SteamInventoryUpdateHandle_t handle, SteamInventoryResult_t * pResultHandle)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->SubmitUpdateProperties(handle, pResultHandle);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->SubmitUpdateProperties(handle, pResultHandle);
}

S_API bool S_CALLTYPE SteamAPI_ISteamInventory_InspectItem(intptr_t instancePtr, SteamInventoryResult_t* pResultHandle, const char* pchItemToken)
{
	if (InitGameServerPointers == true)
	{
		if (instancePtr == (intptr_t)GetGameServerInterfacePointers.SteamInventory() || InitClientPointers == false)
			return GetGameServerInterfacePointers.SteamInventory()->InspectItem(pResultHandle, pchItemToken);
	}

	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamInventory()->InspectItem(pResultHandle, pchItemToken);
}

S_API void S_CALLTYPE SteamAPI_ISteamVideo_GetVideoURL(intptr_t instancePtr, AppId_t unVideoAppID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamVideo()->GetVideoURL(unVideoAppID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamVideo_IsBroadcasting(intptr_t instancePtr, int * pnNumViewers)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamVideo()->IsBroadcasting(pnNumViewers);
}

S_API void S_CALLTYPE SteamAPI_ISteamVideo_GetOPFSettings(intptr_t instancePtr, AppId_t unVideoAppID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamVideo()->GetOPFSettings(unVideoAppID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamVideo_GetOPFStringForApp(intptr_t instancePtr, AppId_t unVideoAppID, char * pchBuffer, int32 * pnBufferSize)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamVideo()->GetOPFStringForApp(unVideoAppID, pchBuffer, pnBufferSize);
}

/*S_API bool S_CALLTYPE SteamAPI_ISteamTV_IsBroadcasting(intptr_t instancePtr, int* pnNumViewers)
{
}

S_API void S_CALLTYPE SteamAPI_ISteamTV_AddBroadcastGameData(intptr_t instancePtr, const char* pchKey, const char* pchValue)
{

}

S_API void S_CALLTYPE SteamAPI_ISteamTV_RemoveBroadcastGameData(intptr_t instancePtr, const char* pchKey)
{

}

S_API void S_CALLTYPE SteamAPI_ISteamTV_AddTimelineMarker(intptr_t instancePtr, const char* pchTemplateName, bool bPersistent, uint8 nColorR, uint8 nColorG, uint8 nColorB)
{

}

S_API void S_CALLTYPE SteamAPI_ISteamTV_RemoveTimelineMarker(intptr_t instancePtr)
{

}

S_API uint32 S_CALLTYPE SteamAPI_ISteamTV_AddRegion(intptr_t instancePtr, const char* pchElementName, const char* pchTimelineDataSection, const struct SteamTVRegion_t* pSteamTVRegion, ESteamTVRegionBehavior eSteamTVRegionBehavior)
{

}

S_API void S_CALLTYPE SteamAPI_ISteamTV_RemoveRegion(intptr_t instancePtr, uint32 unRegionHandle)
{

}*/

S_API bool S_CALLTYPE SteamAPI_ISteamParentalSettings_BIsParentalLockEnabled(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParentalSettings()->BIsParentalLockEnabled();
}

S_API bool S_CALLTYPE SteamAPI_ISteamParentalSettings_BIsParentalLockLocked(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParentalSettings()->BIsParentalLockLocked();
}

S_API bool S_CALLTYPE SteamAPI_ISteamParentalSettings_BIsAppBlocked(intptr_t instancePtr, AppId_t nAppID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParentalSettings()->BIsAppBlocked(nAppID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParentalSettings_BIsAppInBlockList(intptr_t instancePtr, AppId_t nAppID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParentalSettings()->BIsAppInBlockList(nAppID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParentalSettings_BIsFeatureBlocked(intptr_t instancePtr, EParentalFeature eFeature)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParentalSettings()->BIsFeatureBlocked(eFeature);
}

S_API bool S_CALLTYPE SteamAPI_ISteamParentalSettings_BIsFeatureInBlockList(intptr_t instancePtr, EParentalFeature eFeature)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamParentalSettings()->BIsFeatureInBlockList(eFeature);
}

S_API uint32 S_CALLTYPE SteamAPI_ISteamRemotePlay_GetSessionCount(intptr_t instancePtr)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemotePlay()->GetSessionCount();
}

S_API RemotePlaySessionID_t S_CALLTYPE SteamAPI_ISteamRemotePlay_GetSessionID(intptr_t instancePtr, int iSessionIndex)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemotePlay()->GetSessionID(iSessionIndex);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamRemotePlay_GetSessionSteamID(intptr_t instancePtr, RemotePlaySessionID_t unSessionID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemotePlay()->GetSessionSteamID(unSessionID).ConvertToUint64();
}

S_API const char* S_CALLTYPE SteamAPI_ISteamRemotePlay_GetSessionClientName(intptr_t instancePtr, RemotePlaySessionID_t unSessionID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemotePlay()->GetSessionClientName(unSessionID);
}

S_API ESteamDeviceFormFactor S_CALLTYPE SteamAPI_ISteamRemotePlay_GetSessionClientFormFactor(intptr_t instancePtr, RemotePlaySessionID_t unSessionID)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemotePlay()->GetSessionClientFormFactor(unSessionID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemotePlay_BGetSessionClientResolution(intptr_t instancePtr, RemotePlaySessionID_t unSessionID, int* pnResolutionX, int* pnResolutionY)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemotePlay()->BGetSessionClientResolution(unSessionID, pnResolutionX, pnResolutionY);
}

S_API bool S_CALLTYPE SteamAPI_ISteamRemotePlay_BSendRemotePlayTogetherInvite(intptr_t instancePtr, class CSteamID steamIDFriend)
{
	if (InitClientPointers == false)
		__debugbreak();

	return GetInterfacePointers.SteamRemotePlay()->BSendRemotePlayTogetherInvite(steamIDFriend);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_InitGameServer(intptr_t instancePtr, uint32 unIP, uint16 usGamePort, uint16 usQueryPort, uint32 unFlags, AppId_t nGameAppId, const char * pchVersionString)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->InitGameServer(unIP, usGamePort, usQueryPort, unFlags, nGameAppId, pchVersionString);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetProduct(intptr_t instancePtr, const char * pszProduct)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetProduct(pszProduct);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetGameDescription(intptr_t instancePtr, const char * pszGameDescription)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetGameDescription(pszGameDescription);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetModDir(intptr_t instancePtr, const char * pszModDir)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetModDir(pszModDir);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetDedicatedServer(intptr_t instancePtr, bool bDedicated)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetDedicatedServer(bDedicated);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_LogOn(intptr_t instancePtr, const char * pszToken)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->LogOn(pszToken);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_LogOnAnonymous(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->LogOnAnonymous();
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_LogOff(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->LogOff();
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_BLoggedOn(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->BLoggedOn();
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_BSecure(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->BSecure();
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamGameServer_GetSteamID(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->GetSteamID().ConvertToUint64();
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_WasRestartRequested(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->WasRestartRequested();
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetMaxPlayerCount(intptr_t instancePtr, int cPlayersMax)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetMaxPlayerCount(cPlayersMax);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetBotPlayerCount(intptr_t instancePtr, int cBotplayers)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetBotPlayerCount(cBotplayers);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetServerName(intptr_t instancePtr, const char * pszServerName)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetServerName(pszServerName);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetMapName(intptr_t instancePtr, const char * pszMapName)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetMapName(pszMapName);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetPasswordProtected(intptr_t instancePtr, bool bPasswordProtected)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetPasswordProtected(bPasswordProtected);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetSpectatorPort(intptr_t instancePtr, uint16 unSpectatorPort)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetSpectatorPort(unSpectatorPort);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetSpectatorServerName(intptr_t instancePtr, const char * pszSpectatorServerName)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetSpectatorServerName(pszSpectatorServerName);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_ClearAllKeyValues(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->ClearAllKeyValues();
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetKeyValue(intptr_t instancePtr, const char * pKey, const char * pValue)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetKeyValue(pKey, pValue);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetGameTags(intptr_t instancePtr, const char * pchGameTags)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetGameTags(pchGameTags);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetGameData(intptr_t instancePtr, const char * pchGameData)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetGameData(pchGameData);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetRegion(intptr_t instancePtr, const char * pszRegion)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetRegion(pszRegion);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_SendUserConnectAndAuthenticate(intptr_t instancePtr, uint32 unIPClient, const void * pvAuthBlob, uint32 cubAuthBlobSize, class CSteamID * pSteamIDUser)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SendUserConnectAndAuthenticate(unIPClient, pvAuthBlob, cubAuthBlobSize, pSteamIDUser);
}

S_API uint64 S_CALLTYPE SteamAPI_ISteamGameServer_CreateUnauthenticatedUserConnection(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->CreateUnauthenticatedUserConnection().ConvertToUint64();
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SendUserDisconnect(intptr_t instancePtr, class CSteamID steamIDUser)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SendUserDisconnect(steamIDUser);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_BUpdateUserData(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchPlayerName, uint32 uScore)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->BUpdateUserData(steamIDUser, pchPlayerName, uScore);
}

S_API HAuthTicket S_CALLTYPE SteamAPI_ISteamGameServer_GetAuthSessionTicket(intptr_t instancePtr, void * pTicket, int cbMaxTicket, uint32 * pcbTicket)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
}

S_API EBeginAuthSessionResult S_CALLTYPE SteamAPI_ISteamGameServer_BeginAuthSession(intptr_t instancePtr, const void * pAuthTicket, int cbAuthTicket, class CSteamID steamID)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_EndAuthSession(intptr_t instancePtr, class CSteamID steamID)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->EndAuthSession(steamID);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_CancelAuthTicket(intptr_t instancePtr, HAuthTicket hAuthTicket)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->CancelAuthTicket(hAuthTicket);
}

S_API EUserHasLicenseForAppResult S_CALLTYPE SteamAPI_ISteamGameServer_UserHasLicenseForApp(intptr_t instancePtr, class CSteamID steamID, AppId_t appID)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->UserHasLicenseForApp(steamID, appID);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_RequestUserGroupStatus(intptr_t instancePtr, class CSteamID steamIDUser, class CSteamID steamIDGroup)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->RequestUserGroupStatus(steamIDUser, steamIDGroup);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_GetGameplayStats(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->GetGameplayStats();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamGameServer_GetServerReputation(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->GetServerReputation();
}

S_API struct SteamIPAddress_t S_CALLTYPE SteamAPI_ISteamGameServer_GetPublicIP(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->GetPublicIP();
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServer_HandleIncomingPacket(intptr_t instancePtr, const void * pData, int cbData, uint32 srcIP, uint16 srcPort)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->HandleIncomingPacket(pData, cbData, srcIP, srcPort);
}

S_API int S_CALLTYPE SteamAPI_ISteamGameServer_GetNextOutgoingPacket(intptr_t instancePtr, void * pOut, int cbMaxOut, uint32 * pNetAdr, uint16 * pPort)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->GetNextOutgoingPacket(pOut, cbMaxOut, pNetAdr, pPort);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_EnableHeartbeats(intptr_t instancePtr, bool bActive)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->EnableHeartbeats(bActive);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_SetHeartbeatInterval(intptr_t instancePtr, int iHeartbeatInterval)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->SetHeartbeatInterval(iHeartbeatInterval);
}

S_API void S_CALLTYPE SteamAPI_ISteamGameServer_ForceHeartbeat(intptr_t instancePtr)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->ForceHeartbeat();
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamGameServer_AssociateWithClan(intptr_t instancePtr, class CSteamID steamIDClan)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->AssociateWithClan(steamIDClan);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamGameServer_ComputeNewPlayerCompatibility(intptr_t instancePtr, class CSteamID steamIDNewPlayer)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServer()->ComputeNewPlayerCompatibility(steamIDNewPlayer);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamGameServerStats_RequestUserStats(intptr_t instancePtr, class CSteamID steamIDUser)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->RequestUserStats(steamIDUser);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_GetUserStatInt32(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, int32 * pData)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->GetUserStat(steamIDUser, pchName, pData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_GetUserStatFloat(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, float * pData)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->GetUserStat(steamIDUser, pchName, pData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_GetUserAchievement(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, bool * pbAchieved)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->GetUserAchievement(steamIDUser, pchName, pbAchieved);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_SetUserStatInt32(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, int32 nData)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->SetUserStat(steamIDUser, pchName, nData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_SetUserStatFloat(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, float fData)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->SetUserStat(steamIDUser, pchName, fData);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_UpdateUserAvgRateStat(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName, float flCountThisSession, double dSessionLength)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->UpdateUserAvgRateStat(steamIDUser, pchName, flCountThisSession, dSessionLength);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_SetUserAchievement(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->SetUserAchievement(steamIDUser, pchName);
}

S_API bool S_CALLTYPE SteamAPI_ISteamGameServerStats_ClearUserAchievement(intptr_t instancePtr, class CSteamID steamIDUser, const char * pchName)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->ClearUserAchievement(steamIDUser, pchName);
}

S_API SteamAPICall_t S_CALLTYPE SteamAPI_ISteamGameServerStats_StoreUserStats(intptr_t instancePtr, class CSteamID steamIDUser)
{
	if (InitGameServerPointers == false)
		__debugbreak();

	return GetGameServerInterfacePointers.SteamGameServerStats()->StoreUserStats(steamIDUser);
}