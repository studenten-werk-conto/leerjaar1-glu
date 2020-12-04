#include <Windows.h>
#include <conio.h>
#include <Shlwapi.h>
#include "Win32MiniDump.h"

//Made by RevCrew, Steam006

void WriteColoredText(int Color, int OriginalColor, const char* Text);

char szMinidumpFolder[245] = { 0 };

CWin32MiniDump::CWin32MiniDump()
{
	this->m_sName.clear();
	this->m_sComment.clear();
	this->m_hDbgHelp = nullptr;
	this->m_fnMiniDumpWriteDump = nullptr;

	this->m_hDbgHelp = LoadLibraryExA("DbgHelp.dll", nullptr, LOAD_LIBRARY_SEARCH_SYSTEM32);

	if (this->m_hDbgHelp != nullptr)
	{
		FARPROC fpMiniDumpWriteDump = GetProcAddress(this->m_hDbgHelp, "MiniDumpWriteDump");

		if (fpMiniDumpWriteDump != nullptr)
		{
			this->m_fnMiniDumpWriteDump = fnMiniDumpWriteDump(fpMiniDumpWriteDump);

			char szExePath[MAX_PATH] = { 0 };
			DWORD ModuleFileName = GetModuleFileNameA(nullptr, szExePath, sizeof(szExePath));

			if (ModuleFileName == 0)
			{
				MessageBoxA(nullptr, "Unable to get minidump folder path (1)!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
				ExitProcess(0);
			}

			if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
			{
				MessageBoxA(nullptr, "Unable to get minidump folder path (2)!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
				ExitProcess(0);
			}

			char szExeName[MAX_PATH] = { 0 };
			_snprintf_s(szExeName, MAX_PATH, _TRUNCATE, "%s", szExePath);

			PathStripPathA(szExeName);
			PathRemoveExtensionA(szExeName);

			this->m_sName.assign(szExeName);

			BOOL FixPath = PathRemoveFileSpecA(szExePath);

			if (FixPath == TRUE)
			{
				int StringFactory = _snprintf_s(szMinidumpFolder, sizeof(szMinidumpFolder), _TRUNCATE, "%s\\%s_Minidumps", szExePath, szExeName);

				if (StringFactory == -1)
				{
					MessageBoxA(nullptr, "Unable to get minidump folder path (4)!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
					ExitProcess(0);
				}

				CreateDirectoryA(szMinidumpFolder, nullptr);
			}
			else
			{
				MessageBoxA(nullptr, "Unable to get minidump folder path (3)!", "Steam API Base", (MB_ICONERROR | MB_SETFOREGROUND));
				ExitProcess(0);
			}
		}
		else
		{
			FreeLibrary(this->m_hDbgHelp);
			this->m_hDbgHelp = nullptr;
		}
	}
}

CWin32MiniDump::~CWin32MiniDump()
{
	this->m_sName.clear();

	if (this->m_hDbgHelp != nullptr)
	{
		FreeLibrary(this->m_hDbgHelp);
		this->m_hDbgHelp = nullptr;
	}

	this->m_fnMiniDumpWriteDump = nullptr;
	this->m_sComment.clear();
}

void CWin32MiniDump::SetComment(const char* cszComment)
{
	this->m_sComment.assign(cszComment);
}

size_t CWin32MiniDump::GetCommentSize()
{
	if (this->m_sComment.length() >= this->m_sComment.max_size())
		return this->m_sComment.max_size() - 1;

	return this->m_sComment.length();
}

const char* CWin32MiniDump::GetComment()
{
	return this->m_sComment.c_str();
}

void CWin32MiniDump::ClearComment()
{
	this->m_sComment.clear();
}

void CWin32MiniDump::WriteUsingExceptionInfo(DWORD dwExceptionCode, _EXCEPTION_POINTERS* pStructuredExceptionPointers)
{
	if (this->m_hDbgHelp == nullptr || this->m_hDbgHelp != GetModuleHandleA("DbgHelp.dll"))
		return;

	if (this->m_fnMiniDumpWriteDump == nullptr || (FARPROC)this->m_fnMiniDumpWriteDump != GetProcAddress(this->m_hDbgHelp, "MiniDumpWriteDump"))
		return;

	if (this->m_sName.length() == 0)
		return;

	HANDLE hCurrentProcess = GetCurrentProcess();

	if (hCurrentProcess != (HANDLE)-1)
		return;

	if (GetCurrentProcessId() != PID)
		return;

	SYSTEMTIME Time = { 0 };
	GetLocalTime(&Time);

	char szFileName[MAX_PATH] = { 0 };
	int StringFactory = _snprintf_s(szFileName, MAX_PATH, _TRUNCATE, "%s\\%s_%04u-%02u-%02u-%02u.%02u.%02u.mdmp", szMinidumpFolder, this->m_sName.c_str(), Time.wYear, Time.wMonth, Time.wDay, Time.wHour, Time.wMinute, Time.wSecond);

	if (StringFactory == -1)
		return;

	HANDLE hMiniDumpFile = CreateFileA(szFileName, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);

	if (hMiniDumpFile == INVALID_HANDLE_VALUE)
		return;

	__try
	{
		MINIDUMP_EXCEPTION_INFORMATION mdmpExceptionInfo = { 0 };
		mdmpExceptionInfo.ThreadId = GetCurrentThreadId();
		mdmpExceptionInfo.ExceptionPointers = pStructuredExceptionPointers;
		mdmpExceptionInfo.ClientPointers = FALSE;

		if (this->GetCommentSize() != 0)
		{
			MINIDUMP_USER_STREAM UserStream[2] = { 0 };

			UserStream[0].Type = CommentStreamA;
			UserStream[0].BufferSize = this->GetCommentSize() + 1;
			UserStream[0].Buffer = (LPVOID)this->GetComment();

			MINIDUMP_EXCEPTION_STREAM MinidumpExcptionStream = { 0 };
			MinidumpExcptionStream.ExceptionRecord.ExceptionCode = dwExceptionCode;

			UserStream[1].Type = ExceptionStream;
			UserStream[1].BufferSize = sizeof(MINIDUMP_EXCEPTION_STREAM);
			UserStream[1].Buffer = &MinidumpExcptionStream;

			MINIDUMP_USER_STREAM_INFORMATION MinidumpUserStreamInfo = { 0 };
			MinidumpUserStreamInfo.UserStreamCount = 2;
			MinidumpUserStreamInfo.UserStreamArray = UserStream;

			this->m_fnMiniDumpWriteDump(hCurrentProcess, PID, hMiniDumpFile, (_MINIDUMP_TYPE)(MiniDumpNormal | MiniDumpWithHandleData | MiniDumpWithUnloadedModules | MiniDumpWithProcessThreadData | MiniDumpWithFullMemoryInfo | MiniDumpWithThreadInfo), &mdmpExceptionInfo, &MinidumpUserStreamInfo, nullptr);
		}
		else
		{
			MINIDUMP_USER_STREAM UserStream[1] = { 0 };

			MINIDUMP_EXCEPTION_STREAM MinidumpExcptionStream = { 0 };
			MinidumpExcptionStream.ExceptionRecord.ExceptionCode = dwExceptionCode;

			UserStream[0].Type = ExceptionStream;
			UserStream[0].BufferSize = sizeof(MINIDUMP_EXCEPTION_STREAM);
			UserStream[0].Buffer = &MinidumpExcptionStream;

			MINIDUMP_USER_STREAM_INFORMATION MinidumpUserStreamInfo = { 0 };
			MinidumpUserStreamInfo.UserStreamCount = 1;
			MinidumpUserStreamInfo.UserStreamArray = UserStream;

			this->m_fnMiniDumpWriteDump(hCurrentProcess, PID, hMiniDumpFile, (_MINIDUMP_TYPE)(MiniDumpNormal | MiniDumpWithHandleData | MiniDumpWithUnloadedModules | MiniDumpWithProcessThreadData | MiniDumpWithFullMemoryInfo | MiniDumpWithThreadInfo), &mdmpExceptionInfo, &MinidumpUserStreamInfo, nullptr);
		}

		CloseHandle(hMiniDumpFile);
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Exception in minidump code!\r\n");
	}

	return;
}