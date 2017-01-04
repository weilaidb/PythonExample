#define _SDL_cpuinfo_h
#if defined(_MSC_VER) && (_MSC_VER >= 1500) && (defined(_M_IX86) || defined(_M_X64))
#define __MMX__
#define __3dNOW__
#define __SSE__
#define __SSE2__
#elif defined(__MINGW64_VERSION_MAJOR)
#if HAVE_ALTIVEC_H && !defined(__APPLE_ALTIVEC__)
#undef pixel
#define SDL_CACHELINE_SIZE  128
extern DECLSPEC int SDLCALL SDL_GetCPUCount(void);
extern DECLSPEC int SDLCALL SDL_GetCPUCacheLineSize(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasRDTSC(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasAltiVec(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasMMX(void);
extern DECLSPEC SDL_bool SDLCALL SDL_Has3DNow(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasSSE(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasSSE2(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasSSE3(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasSSE41(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasSSE42(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasAVX(void);
extern DECLSPEC SDL_bool SDLCALL SDL_HasAVX2(void);
extern DECLSPEC int SDLCALL SDL_GetSystemRAM(void);
