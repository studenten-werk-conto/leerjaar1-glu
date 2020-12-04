S_API ISteamUser* S_CALLTYPE SteamAPI_SteamUser_v021()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamUser_v021\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUser();
}

S_API ISteamUserStats* S_CALLTYPE SteamAPI_SteamUserStats_v012()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamUserStats_v012\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUserStats();
}

S_API ISteamUtils* S_CALLTYPE SteamAPI_SteamUtils_v009()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamUtils_v009\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUtils();
}

S_API ISteamUGC* S_CALLTYPE SteamAPI_SteamUGC_v014()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamUGC_v014\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamUGC();
}

S_API ISteamFriends* S_CALLTYPE SteamAPI_SteamFriends_v017()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamFriends_v017\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamFriends();
}

S_API ISteamUtils* S_CALLTYPE SteamAPI_SteamGameServerUtils_v009()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerUtils_v009\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServerUtils();
}

S_API ISteamUGC* S_CALLTYPE SteamAPI_SteamGameServerUGC_v014()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerUGC_v014\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamUGC();
}

S_API ISteamApps* S_CALLTYPE SteamAPI_SteamGameServerApps_v008()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerApps_v008\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamApps();
}

S_API ISteamNetworking* S_CALLTYPE SteamAPI_SteamGameServerNetworking_v006()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerNetworking_v006\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServerNetworking();
}

S_API void* S_CALLTYPE SteamAPI_SteamGameServerNetworkingSockets_v008()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerNetworkingSockets_v008\r\n");
	return SteamInternal_FindOrCreateGameServerInterface(hUserServer, STEAMNETWORKINGSOCKETS_INTERFACE_VERSION);
}

S_API ISteamHTTP* S_CALLTYPE SteamAPI_SteamGameServerHTTP_v003()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerHTTP_v003\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamHTTP();
}

S_API ISteamInventory* S_CALLTYPE SteamAPI_SteamGameServerInventory_v003()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerInventory_v003\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamInventory();
}

S_API ISteamGameServer* S_CALLTYPE SteamAPI_SteamGameServer_v013()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServer_v013\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServer();
}

S_API ISteamGameServerStats* S_CALLTYPE SteamAPI_SteamGameServerStats_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameServerStats_v001\r\n");

	if (InitGameServerPointers == false)
		return nullptr;

	return GetGameServerInterfacePointers.SteamGameServerStats();
}

S_API ISteamGameSearch* S_CALLTYPE SteamAPI_SteamGameSearch_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamGameSearch_v001\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamGameSearch();
}

S_API ISteamMatchmaking* S_CALLTYPE SteamAPI_SteamMatchmaking_v009()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamMatchmaking_v009\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMatchmaking();
}

S_API ISteamMatchmakingServers* S_CALLTYPE SteamAPI_SteamMatchmakingServers_v002()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamMatchmakingServers_v002\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMatchmakingServers();
}

S_API ISteamMusic* S_CALLTYPE SteamAPI_SteamMusic_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamMusic_v001\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMusic();
}

S_API ISteamMusicRemote* S_CALLTYPE SteamAPI_SteamMusicRemote_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamMusicRemote_v001\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamMusicRemote();
}

S_API ISteamParties* S_CALLTYPE SteamAPI_SteamParties_v002()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamParties_v002\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamParties();
}

S_API ISteamParentalSettings* S_CALLTYPE SteamAPI_SteamParentalSettings_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamParentalSettings_v001\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamParentalSettings();
}

S_API ISteamRemoteStorage* S_CALLTYPE SteamAPI_SteamRemoteStorage_v014()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamRemoteStorage_v014\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamRemoteStorage();
}

S_API ISteamRemotePlay* S_CALLTYPE SteamAPI_SteamRemotePlay_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamRemotePlay_v001\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamRemotePlay();
}

S_API ISteamApps* S_CALLTYPE SteamAPI_SteamApps_v008()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamApps_v008\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamApps();
}

S_API ISteamAppList* S_CALLTYPE SteamAPI_SteamAppList_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamAppList_v001\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamAppList();
}

S_API ISteamNetworking* S_CALLTYPE SteamAPI_SteamNetworking_v006()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamNetworking_v006\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamNetworking();
}

S_API void* S_CALLTYPE SteamAPI_SteamNetworkingSockets_v008()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamNetworkingSockets_v008\r\n");
	return SteamInternal_FindOrCreateUserInterface(hUser, STEAMNETWORKINGSOCKETS_INTERFACE_VERSION);
}

S_API void* S_CALLTYPE SteamAPI_SteamNetworkingUtils_v003()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamNetworkingUtils_v003\r\n");

	void* NetworkingUtils = nullptr;

	NetworkingUtils = SteamInternal_FindOrCreateUserInterface(0, STEAMNETWORKINGUTILS_INTERFACE_VERSION);

	if (NetworkingUtils == nullptr)
		NetworkingUtils = SteamInternal_FindOrCreateGameServerInterface(0, STEAMNETWORKINGUTILS_INTERFACE_VERSION);

	return NetworkingUtils;
}

S_API ISteamScreenshots* S_CALLTYPE SteamAPI_SteamScreenshots_v003()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamScreenshots_v003\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamScreenshots();
}

S_API ISteamHTTP* S_CALLTYPE SteamAPI_SteamHTTP_v003()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamHTTP_v003\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamHTTP();
}

S_API ISteamHTMLSurface* S_CALLTYPE SteamAPI_SteamHTMLSurface_v005()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamHTMLSurface_v005\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamHTMLSurface();
}

S_API ISteamInput* S_CALLTYPE SteamAPI_SteamInput_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamInput_v001\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamInput();
}

S_API ISteamInventory* S_CALLTYPE SteamAPI_SteamInventory_v003()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamInventory_v003\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamInventory();
}

S_API ISteamController* S_CALLTYPE SteamAPI_SteamController_v007()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamController_v007\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamController();
}

S_API ISteamVideo* S_CALLTYPE SteamAPI_SteamVideo_v002()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamVideo_v002\r\n");

	if (InitClientPointers == false)
		return nullptr;

	return GetInterfacePointers.SteamVideo();
}

S_API void* S_CALLTYPE SteamAPI_SteamTV_v001()
{
	_cprintf_s("[Steam_API_Base] SteamAPI_SteamTV_v001\r\n");
	return SteamInternal_FindOrCreateUserInterface(hUser, "STEAMTV_INTERFACE_V001");
}