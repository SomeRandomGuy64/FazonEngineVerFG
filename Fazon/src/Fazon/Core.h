#pragma once

#ifdef FZ_PLATFORM_WINDOWS
	#pragma message("FZ_PLATFORM_WINDOWS is defined")
	#define DEBUG_BREAK() __debugbreak()
#else
	#error "Fazon only supports Windows!"
#endif

#ifdef FZ_DEBUG
	#define FZ_ENABLE_ASSERTS
#endif

#if FZ_ENABLE_ASSERTS
	// temp fix for assert
	#define FZ_ASSERT(x, ...) { if(!(x)) { FZ_ERROR("Assertion Failed: ", __VA_ARGS__); DEBUG_BREAK(); } }
	#define FZ_CORE_ASSERT(x, ...) { if(!(x)) { FZ_CORE_ERROR("Assertion Failed: ", __VA_ARGS__); DEBUG_BREAK(); } }
#else
	#define FZ_ASSERT(x, ...)
	#define FZ_CORE_ASSERT(x, ...)
#endif
