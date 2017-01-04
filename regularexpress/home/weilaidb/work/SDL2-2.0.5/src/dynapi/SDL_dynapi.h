#define _SDL_dynapi_h
#error Nope, you have to edit this file to force this off.
#if defined(TARGET_OS_IPHONE) && TARGET_OS_IPHONE
#define SDL_DYNAMIC_API 0
#elif defined(__native_client__) && __native_client__
#define SDL_DYNAMIC_API 0
#elif defined(__EMSCRIPTEN__) && __EMSCRIPTEN__
#define SDL_DYNAMIC_API 0
#elif defined(SDL_BUILDING_WINRT) && SDL_BUILDING_WINRT
#define SDL_DYNAMIC_API 0
#elif defined(__PSP__) && __PSP__
#define SDL_DYNAMIC_API 0
#elif defined(__clang_analyzer__)
#define SDL_DYNAMIC_API 0
#define SDL_DYNAMIC_API 1
