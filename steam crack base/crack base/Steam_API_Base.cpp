#include <Windows.h>
#include <Shlwapi.h>
#include <conio.h>
#include <new.h>

#define STEAM_API_EXPORTS

#include "Steam\steam_api.h"
#include "Steam\steamclientpublic.h"
#include "Steam\steam_gameserver.h"

#include "RegistryFunctions.h"
#include "Win32MiniDump.h"
#include "CallbackManager.h"
#include "Steam_API_Base.h"

#include "Functions\Client.h"
#include "Functions\InterfacePointers.h"
#include "Functions\InterfacePointersNew.h"
#include "Functions\GameServer.h"
#include "Functions\Minidump.h"
#include "Functions\Callbacks.h"
#include "Functions\Shutdown.h"
#include "Functions\CreateInterface.h"
#include "Functions\Flat.h"

void MyInvalidParameterHandler(const wchar_t* expression, const wchar_t* function, const wchar_t* file, unsigned int line, uintptr_t pReserved)
{
	MessageBoxA(nullptr, "steam_api(64).dll Crashed (Invalid Parameter Handler)!", "Invalid Parameter Handler", (MB_ICONERROR | MB_SETFOREGROUND));
	ExitProcess(0);
}

int FailedMemoryAllocationHandler(size_t Size)
{
	MessageBoxA(nullptr, "steam_api(64).dll Crashed (Memory Allocation Handler)!", "Failed To Allocate Memory", (MB_ICONERROR | MB_SETFOREGROUND));
	ExitProcess(0);
}

void WriteColoredText(int Color, int OriginalColor, const char* Text)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);

	_cprintf_s("%s", Text);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), OriginalColor);

	return;
}

void* InternalAPI_Init(HMODULE *hSteamclient, bool bInitLocal, const char *Interface)
{
	SteamUtilsForCallbacks = nullptr;
	SteamControllerForCallbacks = nullptr;
	SteamInputForCallbacks = nullptr;

	if (hSteamclient == nullptr)
		return nullptr;

	if (Interface == nullptr)
		return nullptr;

	*hSteamclient = nullptr;

	char szSteamClientDll[MAX_PATH] = { 0 };
	const char* InstallPath = SteamAPI_GetSteamInstallPath();

	if (_stricmp(InstallPath, "SteamAPIBaseInvalidPath") == 0)
	{
		if (bInitLocal == false)
			return nullptr;
	}
	else
	{
		if (Is64bit == false)
			_snprintf_s(szSteamClientDll, MAX_PATH, _TRUNCATE, "%s\\steamclient.dll", InstallPath);
		else
			_snprintf_s(szSteamClientDll, MAX_PATH, _TRUNCATE, "%s\\steamclient64.dll", InstallPath);
	}

	if (SteamAPI_IsSteamRunning() == true)
	{
		*hSteamclient = LoadLibraryExA(szSteamClientDll, nullptr, LOAD_WITH_ALTERED_SEARCH_PATH);

		if (*hSteamclient == nullptr)
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] InternalAPI_Init --> Failed to load steamclient(64).dll!\r\n");
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] InternalAPI_Init --> SteamAPI_IsSteamRunning() Failed!\r\n");
	}

	if (*hSteamclient == nullptr)
	{
		if (bInitLocal == false)
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] InternalAPI_Init --> Unable to locate a running instance of Steam and bInitLocal is false!\r\n");
			return nullptr;
		}

		if (Is64bit == false)
			*hSteamclient = LoadLibraryA("steamclient.dll");
		else
			*hSteamclient = LoadLibraryA("steamclient64.dll");

		if (*hSteamclient == nullptr)
		{
			WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] InternalAPI_Init --> Unable to locate a running instance of Steam, or a local steamclient(64).dll!\r\n");
			return nullptr;
		}
	}

	oCreateInterface = (_CreateInterface)GetProcAddress(*hSteamclient, "CreateInterface");

	if (oCreateInterface != nullptr)
	{
		SteamClientSafe = (ISteamClient *)oCreateInterface(STEAMCLIENT_INTERFACE_VERSION, nullptr);
		oReleaseThreadLocalMemory = (_ReleaseThreadLocalMemory)GetProcAddress(*hSteamclient, "Steam_ReleaseThreadLocalMemory");
		ContextCounter++;

		return oCreateInterface(Interface, nullptr);
	}
	else
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] InternalAPI_Init --> Unable to locate interface factory in steamclient(64).dll!\r\n");

		FreeLibrary(*hSteamclient);
		*hSteamclient = nullptr;
	}

	return nullptr;
}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpvReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		_invalid_parameter_handler OldHandler, NewHandler;
		NewHandler = MyInvalidParameterHandler;
		OldHandler = _set_invalid_parameter_handler(NewHandler);

		// Disable the message box for assertions.
		_CrtSetReportMode(_CRT_ASSERT, 0);

		_set_new_handler(FailedMemoryAllocationHandler);

		AllocConsole();

		char szFullDllPath[MAX_PATH] = { 0 };

		DWORD ModuleFileName = GetModuleFileNameA(hModule, szFullDllPath, sizeof(szFullDllPath));

		if (ModuleFileName == 0)
		{
			MessageBoxA(nullptr, "Unable to get dll name (1)!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
			ExitProcess(0);
		}

		if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
		{
			MessageBoxA(nullptr, "Unable to get dll name (2)!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
			ExitProcess(0);
		}

		_cprintf_s("[Steam_API_Base] Dll Path --> %s\r\n", szFullDllPath);

		if (StrStrIA(szFullDllPath, "steam_api.dll") != nullptr)
		{
			Is64bit = false;
		}
		else if (StrStrIA(szFullDllPath, "steam_api64.dll") != nullptr)
		{
			Is64bit = true;
		}
		else
		{
			MessageBoxA(nullptr, "Dll name must be steam_api.dll or steam_api64.dll!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
			ExitProcess(0);
		}

		PID = GetCurrentProcessId();
		_cprintf_s("[Steam_API_Base] PID --> %d\r\n", PID);
		_cprintf_s("[Steam_API_Base] ThreadID --> %d\r\n", GetCurrentThreadId());

		GetInterfacePointers.Clear();
		GetGameServerInterfacePointers.Clear();

		InitializeCriticalSectionEx(&ContextCriticalSection, 1, CRITICAL_SECTION_NO_DEBUG_INFO);
		InitializeCriticalSectionEx(&CallbackCriticalSection, 1, CRITICAL_SECTION_NO_DEBUG_INFO);
		SetCriticalSectionSpinCount(&ContextCriticalSection, 0);
		SetCriticalSectionSpinCount(&CallbackCriticalSection, 0);
	}

	return 1;
}