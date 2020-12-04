#include <Windows.h>
#include <conio.h>
#include "Steam\steam_api.h"
#include "Steam\steamclientpublic.h"
#include "CallbackManager.h"

void WriteColoredText(int Color, int OriginalColor, const char* Text);
bool bCallbackManagerInitialized = false;

CCallbackMgr::CCallbackMgr()
{
	this->oSteam_BGetCallback = nullptr;
	this->oSteam_FreeLastCallback = nullptr;
	this->oSteam_GetAPICallResult = nullptr;
	this->HSteamUserCurrent = 0;
	this->ManualDispatchCallback = 0;
	this->ManualDispatchCallbackSize = 0;
	this->bIsRunningCallbacks = false;
	this->CallResultBuffer = nullptr;
	this->CallResultBufferSize = 0;
	this->MapCallbacks.clear();
	this->MapAPICalls.clear();
	bCallbackManagerInitialized = true;
}

CCallbackMgr::~CCallbackMgr()
{
	bCallbackManagerInitialized = false;
	this->oSteam_BGetCallback = nullptr;
	this->oSteam_FreeLastCallback = nullptr;
	this->oSteam_GetAPICallResult = nullptr;
	this->HSteamUserCurrent = 0;
	this->ManualDispatchCallback = 0;
	this->ManualDispatchCallbackSize = 0;
	this->bIsRunningCallbacks = false;

	if (this->CallResultBuffer != nullptr && this->CallResultBufferSize != 0)
	{
		SecureZeroMemory(this->CallResultBuffer, this->CallResultBufferSize);
		delete[]this->CallResultBuffer;
	}

	this->CallResultBuffer = nullptr;
	this->CallResultBufferSize = 0;
	this->MapCallbacks.clear();
	this->MapAPICalls.clear();
}

void CCallbackMgr::RunCallResult(HSteamPipe hSteamPipe, SteamAPICall_t APICall, CCallbackBase* pCallback)
{
	if (pCallback != nullptr && APICall != k_uAPICallInvalid)
	{
		if (pCallback->GetICallback() != 0 && pCallback->GetCallbackSizeBytes() != 0)
		{
			if (this->CallResultBuffer != nullptr && this->CallResultBufferSize != 0)
			{
				WriteColoredText(FOREGROUND_BLUE | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Freeing CallResultBuffer\r\n");

				SecureZeroMemory(this->CallResultBuffer, this->CallResultBufferSize);

				delete[]this->CallResultBuffer;
				this->CallResultBuffer = nullptr;
				this->CallResultBufferSize = 0;
			}

			this->CallResultBuffer = new char[pCallback->GetCallbackSizeBytes()]();
			this->CallResultBufferSize = pCallback->GetCallbackSizeBytes();

			_cprintf_s("[Steam_API_Base] Running CallResult --> %lld --> Callback --> %d --> Size --> %d\r\n", APICall, pCallback->GetICallback(), pCallback->GetCallbackSizeBytes());

			bool pbFailed = false;

			// If hSteamAPICall is not found, IsAPICallCompleted is called and the result is stored in pbFailed. GetAPICallResult returns false and no data is copied to the buffer.
			// If iCallbackExpected is incorrect, both GetAPICallResult and pbFailed will return true and no data is copied to the buffer.
			// If the expected size is the same size as cubCallback the data is copied to the buffer with that size.
			// If the expected size is larger than cubCallback the data is copied to the buffer with cubCallback.
			// If the expected size is less than cubCallback but >= 1024 bytes the data is copied to the buffer with the expected size.
			// If the expected size is less than cubCallback but <= 1023 bytes the data is padded to cubCallback (up to 1024 bytes) and copied to the buffer with that size.
			bool bAPICall = this->oSteam_GetAPICallResult(hSteamPipe, APICall, this->CallResultBuffer, pCallback->GetCallbackSizeBytes(), pCallback->GetICallback(), &pbFailed);

			// Callback data was only copied to the buffer if pbFailed is false
			if (bAPICall == true && pbFailed == false)
			{
				size_t OriginalCallbackMapSize = this->MapCallbacks.size();

				pCallback->Run(this->CallResultBuffer, pbFailed, APICall);

				if (OriginalCallbackMapSize != this->MapCallbacks.size())
				{
					WriteColoredText(FOREGROUND_BLUE | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Callback(s) was added or removed while CallResult was running!\r\n");
					pCallback->Run(this->CallResultBuffer);
				}
			}
			else
			{
				WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Steam_GetAPICallResult Failed!\r\n");

				SecureZeroMemory(this->CallResultBuffer, this->CallResultBufferSize);

				delete[]this->CallResultBuffer;
				this->CallResultBuffer = nullptr;
				this->CallResultBufferSize = 0;
			}
		}
	}

	return;
}

void CCallbackMgr::RunCallbacks(HSteamPipe hSteamPipe, bool bGameServerCallbacks)
{
	if (this->oSteam_BGetCallback != nullptr && this->oSteam_FreeLastCallback != nullptr && this->oSteam_GetAPICallResult != nullptr)
	{
		CallbackMsg_t CallbackMsg = { 0 };
		if (this->oSteam_BGetCallback(hSteamPipe, &CallbackMsg))
		{
			_cprintf_s("[Steam_API_Base] Callback --> %d\r\n", CallbackMsg.m_iCallback);

			this->HSteamUserCurrent = CallbackMsg.m_hSteamUser;

			if (CallbackMsg.m_iCallback == SteamAPICallCompleted_t::k_iCallback && CallbackMsg.m_cubParam == sizeof(SteamAPICallCompleted_t))
			{
				SteamAPICallCompleted_t* SteamAPICallCompleted = (SteamAPICallCompleted_t*)CallbackMsg.m_pubParam;

				if (this->MapAPICalls.size() != 0)
				{
					std::multimap<SteamAPICall_t, CCallbackBase*>::iterator mapCallResultIterator;

					for (mapCallResultIterator = this->MapAPICalls.begin(); mapCallResultIterator != this->MapAPICalls.end(); mapCallResultIterator++)
					{
						if (SteamAPICallCompleted->m_hAsyncCall == mapCallResultIterator->first &&
							SteamAPICallCompleted->m_iCallback == mapCallResultIterator->second->GetICallback() &&
							SteamAPICallCompleted->m_cubParam == mapCallResultIterator->second->GetCallbackSizeBytes() &&
							mapCallResultIterator->second->m_nCallbackFlags & mapCallResultIterator->second->k_ECallbackFlagsRegistered)
						{
							this->RunCallResult(hSteamPipe, mapCallResultIterator->first, mapCallResultIterator->second);
						}
					}
				}
			}

			if (this->MapCallbacks.size() != 0)
			{
				std::multimap<int, class CCallbackBase*>::iterator mapCallbacksIterator;

				for (mapCallbacksIterator = this->MapCallbacks.begin(); mapCallbacksIterator != this->MapCallbacks.end(); mapCallbacksIterator++)
				{
					CCallbackBase* pCallback = mapCallbacksIterator->second;

					if (mapCallbacksIterator->first == CallbackMsg.m_iCallback && ((pCallback->m_nCallbackFlags & pCallback->k_ECallbackFlagsGameServer) >> 1) == (int)bGameServerCallbacks)
					{
						_cprintf_s("[Steam_API_Base] Running Callback --> %d --> Flag(s) --> %d\r\n", CallbackMsg.m_iCallback, pCallback->m_nCallbackFlags);

						//We will not run invalid HTML_NeedsPaint_t callbacks
						bool SkipPaintCallback = false;

						if (CallbackMsg.m_iCallback == HTML_NeedsPaint_t::k_iCallback && CallbackMsg.m_cubParam == sizeof(HTML_NeedsPaint_t))
						{
							HTML_NeedsPaint_t* HTML_NeedsPaint = (HTML_NeedsPaint_t*)CallbackMsg.m_pubParam;

							if (HTML_NeedsPaint->unWide == 1 || HTML_NeedsPaint->unTall == 1)
								SkipPaintCallback = true;
						}

						if (SkipPaintCallback == false)
							pCallback->Run(CallbackMsg.m_pubParam);

						SecureZeroMemory(CallbackMsg.m_pubParam, CallbackMsg.m_cubParam);
						this->oSteam_FreeLastCallback(hSteamPipe);
						return;
					}
				}
			}
			_cprintf_s("[Steam_API_Base] Freeing Callback --> %d\r\n", CallbackMsg.m_iCallback);

			SecureZeroMemory(CallbackMsg.m_pubParam, CallbackMsg.m_cubParam);
			this->oSteam_FreeLastCallback(hSteamPipe);
		}
	}

	return;
}

void CCallbackMgr::RunCallbacksTryCatch(HSteamPipe hSteamPipe, bool bGameServerCallbacks)
{
	try
	{
		if (this->oSteam_BGetCallback != nullptr && this->oSteam_FreeLastCallback != nullptr && this->oSteam_GetAPICallResult != nullptr)
		{
			CallbackMsg_t CallbackMsg = { 0 };
			if (this->oSteam_BGetCallback(hSteamPipe, &CallbackMsg))
			{
				_cprintf_s("[Steam_API_Base] Callback (TryCatch) --> %d\r\n", CallbackMsg.m_iCallback);

				this->HSteamUserCurrent = CallbackMsg.m_hSteamUser;

				if (CallbackMsg.m_iCallback == SteamAPICallCompleted_t::k_iCallback && CallbackMsg.m_cubParam == sizeof(SteamAPICallCompleted_t))
				{
					SteamAPICallCompleted_t* SteamAPICallCompleted = (SteamAPICallCompleted_t*)CallbackMsg.m_pubParam;

					if (this->MapAPICalls.size() != 0)
					{
						std::multimap<SteamAPICall_t, CCallbackBase*>::iterator mapCallResultIterator;

						for (mapCallResultIterator = this->MapAPICalls.begin(); mapCallResultIterator != this->MapAPICalls.end(); mapCallResultIterator++)
						{
							if (SteamAPICallCompleted->m_hAsyncCall == mapCallResultIterator->first &&
								SteamAPICallCompleted->m_iCallback == mapCallResultIterator->second->GetICallback() &&
								SteamAPICallCompleted->m_cubParam == mapCallResultIterator->second->GetCallbackSizeBytes() &&
								mapCallResultIterator->second->m_nCallbackFlags & mapCallResultIterator->second->k_ECallbackFlagsRegistered)
							{
								this->RunCallResult(hSteamPipe, mapCallResultIterator->first, mapCallResultIterator->second);
							}
						}
					}
				}

				if (this->MapCallbacks.size() != 0)
				{
					std::multimap<int, class CCallbackBase*>::iterator mapCallbacksIterator;

					for (mapCallbacksIterator = this->MapCallbacks.begin(); mapCallbacksIterator != this->MapCallbacks.end(); mapCallbacksIterator++)
					{
						CCallbackBase* pCallback = mapCallbacksIterator->second;
						if (mapCallbacksIterator->first == CallbackMsg.m_iCallback && ((pCallback->m_nCallbackFlags & pCallback->k_ECallbackFlagsGameServer) >> 1) == (int)bGameServerCallbacks)
						{
							_cprintf_s("[Steam_API_Base] Running Callback (TryCatch) --> %d --> Flag(s) --> %d\r\n", CallbackMsg.m_iCallback, pCallback->m_nCallbackFlags);

							pCallback->Run(CallbackMsg.m_pubParam);

							SecureZeroMemory(CallbackMsg.m_pubParam, CallbackMsg.m_cubParam);
							this->oSteam_FreeLastCallback(hSteamPipe);
							return;
						}
					}
				}
				_cprintf_s("[Steam_API_Base] Freeing Callback (TryCatch) --> %d\r\n", CallbackMsg.m_iCallback);

				SecureZeroMemory(CallbackMsg.m_pubParam, CallbackMsg.m_cubParam);
				this->oSteam_FreeLastCallback(hSteamPipe);
			}
		}
	}
	catch (...)
	{
		WriteColoredText(FOREGROUND_RED | FOREGROUND_INTENSITY, 7, "[Steam_API_Base] Exception in callback code!\r\n");
	}

	return;
}

void CCallbackMgr::RegisterCallback(CCallbackBase *pCallback, int iCallback)
{
	if (pCallback != nullptr && iCallback != 0)
	{
		if (pCallback->GetCallbackSizeBytes() != 0)
		{
			_cprintf_s("[Steam_API_Base] CCallbackMgr::RegisterCallback --> %d --> Size --> %d --> Original flag(s) --> %d\r\n", iCallback, pCallback->GetCallbackSizeBytes(), pCallback->m_nCallbackFlags);

			pCallback->m_nCallbackFlags |= pCallback->k_ECallbackFlagsRegistered;
			pCallback->m_iCallback = iCallback;
			this->MapCallbacks.insert(std::make_pair(iCallback, pCallback));
		}
	}

	return;
}

void CCallbackMgr::UnregisterCallback(CCallbackBase* pCallback)
{
	if (pCallback != nullptr)
	{
		if (pCallback->GetICallback() != 0)
		{
			if (pCallback->m_nCallbackFlags & pCallback->k_ECallbackFlagsRegistered)
			{
				if (this->MapCallbacks.size() != 0)
				{
					_cprintf_s("[Steam_API_Base] CCallbackMgr::UnregisterCallback --> %d --> Flag(s) --> %d\r\n", pCallback->GetICallback(), pCallback->m_nCallbackFlags);

					if (pCallback->m_nCallbackFlags & pCallback->k_ECallbackFlagsGameServer)
					{
						//We will not unregister gameserver SteamServersConnected_t callbacks
						if (pCallback->GetICallback() == SteamServersConnected_t::k_iCallback)
						{
							return;
						}
					}

					this->MapCallbacks.erase(pCallback->GetICallback());
				}
			}
		}
	}

	return;
}

void CCallbackMgr::RegisterCallResult(CCallbackBase *pCallback, SteamAPICall_t APICall)
{
	if (pCallback != nullptr && APICall != k_uAPICallInvalid)
	{
		if (pCallback->GetICallback() != 0 && pCallback->GetCallbackSizeBytes() != 0)
		{
			_cprintf_s("[Steam_API_Base] CCallbackMgr::RegisterCallResult --> %lld --> Callback --> %d --> Size --> %d --> Original flag(s) --> %d\r\n", APICall, pCallback->GetICallback(), pCallback->GetCallbackSizeBytes(), pCallback->m_nCallbackFlags);

			pCallback->m_nCallbackFlags |= pCallback->k_ECallbackFlagsRegistered;
			this->MapAPICalls.insert(std::make_pair(APICall, pCallback));
		}
	}

	return;
}

void CCallbackMgr::UnregisterCallResult(CCallbackBase *pCallback, SteamAPICall_t APICall)
{
	if (pCallback != nullptr && APICall != k_uAPICallInvalid)
	{
		if (pCallback->GetICallback() != 0 && pCallback->m_nCallbackFlags & pCallback->k_ECallbackFlagsRegistered)
		{
			if (this->MapAPICalls.size() != 0)
			{
				_cprintf_s("[Steam_API_Base] CCallbackMgr::UnregisterCallResult --> %lld --> Callback --> %d --> Flag(s) --> %d\r\n", APICall, pCallback->GetICallback(), pCallback->m_nCallbackFlags);

				this->MapAPICalls.erase(APICall);
			}
		}
	}

	return;
}

CCallbackMgr* GCallbackMgr()
{
	static CCallbackMgr CallbackMgr;
	return &CallbackMgr;
}