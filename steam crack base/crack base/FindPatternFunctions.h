typedef PIMAGE_NT_HEADERS(WINAPI* _RtlImageNtHeader)(PVOID ModuleAddress);
_RtlImageNtHeader oRtlImageNtHeader = nullptr;

bool Compare(const BYTE* pData, const BYTE* bMask, const char* szMask)
{
	for (; *szMask; ++szMask, ++pData, ++bMask)
		if (*szMask == 'x' && *pData != *bMask)
			return false;

	return *szMask == NULL;
}

DWORD FindPattern(DWORD ImageBase, DWORD SizeOfImage, const BYTE* Pattern, const char* szMask)
{
	for (DWORD i = 0; i < SizeOfImage; i++)
		if (Compare((BYTE*)(ImageBase + i), Pattern, szMask))
			return ImageBase + i;

	return 0;
}

BOOL WriteToMemory(DWORD MemoryAddress, const void* PatchBytes, int byteNum)
{
	if (MemoryAddress == 0 || byteNum == 0)
		return FALSE;

	DWORD dwProtect = 0;

	BOOL VP = VirtualProtect((LPVOID)(MemoryAddress), byteNum, PAGE_READWRITE, &dwProtect);

	if (VP == TRUE)
	{
		memcpy((LPVOID)MemoryAddress, (const void*)PatchBytes, byteNum);
		VirtualProtect((LPVOID)(MemoryAddress), byteNum, dwProtect, &dwProtect);

		return TRUE;
	}
	return FALSE;
}