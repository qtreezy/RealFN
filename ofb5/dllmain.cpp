#include <Windows.h>
#include "curl.h"

BOOL APIENTRY DllMain(HMODULE module, DWORD call_reason, LPVOID reserved) {
	if (call_reason != 1)
		return 1;

	hookCurl();
	return 1;
}