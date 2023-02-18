#pragma once

#ifdef HT_PLATFORM_WINDOWS
	#ifdef HT_BUILD_DLL
		#define HATHOR_API __declspec(dllexport)
	#else
		#define HATHOR_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Hathor only supports Windows!
#endif // HZ_PLATFORM_WINDOWS
