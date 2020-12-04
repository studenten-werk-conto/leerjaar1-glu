S_API ISteamAppList* S_CALLTYPE SteamAppList()
{
	_cprintf_s("[Steam_API_Base] SteamAppList\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamAppList();
}

S_API ISteamApps* S_CALLTYPE SteamApps()
{
	_cprintf_s("[Steam_API_Base] SteamApps\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamApps();
}

S_API ISteamClient* S_CALLTYPE SteamClient()
{
	_cprintf_s("[Steam_API_Base] SteamClient\r\n");

	if (SteamClientSafe == nullptr)
		return nullptr;

	return SteamClientSafe;
}

S_API ISteamController* S_CALLTYPE SteamController()
{
	_cprintf_s("[Steam_API_Base] SteamController\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamController();
}

S_API ISteamFriends* S_CALLTYPE SteamFriends()
{
	_cprintf_s("[Steam_API_Base] SteamFriends\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamFriends();
}

S_API ISteamGameSearch* S_CALLTYPE SteamGameSearch()
{
	_cprintf_s("[Steam_API_Base] SteamGameSearch\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamGameSearch();
}

S_API ISteamClient* S_CALLTYPE SteamGameServerSteamClient()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerSteamClient\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamClient();
}

S_API ISteamGameServer* S_CALLTYPE SteamGameServer()
{
	_cprintf_s("[Steam_API_Base] SteamGameServer\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServer();
}

S_API ISteamApps* S_CALLTYPE SteamGameServerApps()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerApps\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamApps();
}

S_API ISteamHTTP* S_CALLTYPE SteamGameServerHTTP()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerHTTP\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamHTTP();
}

S_API ISteamInventory* S_CALLTYPE SteamGameServerInventory()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerInventory\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamInventory();
}

S_API ISteamNetworking* S_CALLTYPE SteamGameServerNetworking()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerNetworking\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServerNetworking();
}

S_API ISteamGameServerStats* S_CALLTYPE SteamGameServerStats()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerStats\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServerStats();
}

S_API ISteamUGC* S_CALLTYPE SteamGameServerUGC()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerUGC\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamUGC();
}

S_API ISteamUtils* S_CALLTYPE SteamGameServerUtils()
{
	_cprintf_s("[Steam_API_Base] SteamGameServerUtils\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServerUtils();
}

S_API ISteamHTMLSurface* S_CALLTYPE SteamHTMLSurface()
{
	_cprintf_s("[Steam_API_Base] SteamHTMLSurface\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamHTMLSurface();
}

S_API ISteamHTTP* S_CALLTYPE SteamHTTP()
{
	_cprintf_s("[Steam_API_Base] SteamHTTP\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamHTTP();
}

S_API ISteamInventory* S_CALLTYPE SteamInventory()
{
	_cprintf_s("[Steam_API_Base] SteamInventory\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamInventory();
}

S_API ISteamMatchmaking* S_CALLTYPE SteamMatchmaking()
{
	_cprintf_s("[Steam_API_Base] SteamMatchmaking\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMatchmaking();
}

S_API ISteamMatchmakingServers* S_CALLTYPE SteamMatchmakingServers()
{
	_cprintf_s("[Steam_API_Base] SteamMatchmakingServers\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMatchmakingServers();
}

S_API ISteamMusic* S_CALLTYPE SteamMusic()
{
	_cprintf_s("[Steam_API_Base] SteamMusic\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMusic();
}

S_API ISteamMusicRemote* S_CALLTYPE SteamMusicRemote()
{
	_cprintf_s("[Steam_API_Base] SteamMusicRemote\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMusicRemote();
}

S_API ISteamNetworking* S_CALLTYPE SteamNetworking()
{
	_cprintf_s("[Steam_API_Base] SteamNetworking\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamNetworking();
}

S_API ISteamRemoteStorage* S_CALLTYPE SteamRemoteStorage()
{
	_cprintf_s("[Steam_API_Base] SteamRemoteStorage\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamRemoteStorage();
}

S_API ISteamScreenshots* S_CALLTYPE SteamScreenshots()
{
	_cprintf_s("[Steam_API_Base] SteamScreenshots\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamScreenshots();
}

S_API ISteamUGC* S_CALLTYPE SteamUGC()
{
	_cprintf_s("[Steam_API_Base] SteamUGC\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUGC();
}

S_API ISteamUser* S_CALLTYPE SteamUser()
{
	_cprintf_s("[Steam_API_Base] SteamUser\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUser();
}

S_API ISteamUserStats* S_CALLTYPE SteamUserStats()
{
	_cprintf_s("[Steam_API_Base] SteamUserStats\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUserStats();
}

S_API ISteamUtils* S_CALLTYPE SteamUtils()
{
	_cprintf_s("[Steam_API_Base] SteamUtils\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUtils();
}

S_API void* S_CALLTYPE SteamUnifiedMessages()
{
	MessageBoxA(nullptr, "SteamUnifiedMessages is removed in new SDK versions!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
	return nullptr;
}

S_API ISteamVideo* S_CALLTYPE SteamVideo()
{
	_cprintf_s("[Steam_API_Base] SteamVideo\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamVideo();
}

S_API ISteamParentalSettings* S_CALLTYPE SteamParentalSettings()
{
	_cprintf_s("[Steam_API_Base] SteamParentalSettings\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamParentalSettings();
}

S_API ISteamInput* S_CALLTYPE SteamInput()
{
	_cprintf_s("[Steam_API_Base] SteamInput\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamInput();
}

S_API ISteamParties* S_CALLTYPE SteamParties()
{
	_cprintf_s("[Steam_API_Base] SteamParties\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamParties();
}

S_API ISteamRemotePlay* S_CALLTYPE SteamRemotePlay()
{
	_cprintf_s("[Steam_API_Base] SteamRemotePlay\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamRemotePlay();
}