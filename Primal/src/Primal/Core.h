#pragma once


#ifdef PR_PLATFORM_WINDOWS
	#ifdef PR_BUILD_DLL
		#define PRIMAL_API __declspec(dllexport)
	#else
		#define PRIMAL_API __declspec(dllimport)

	#endif

#else 
	#error Hazel only supports Windows!
#endif
