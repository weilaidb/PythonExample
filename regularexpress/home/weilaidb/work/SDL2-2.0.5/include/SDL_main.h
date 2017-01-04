#define _SDL_main_h
#if defined(__WIN32__)
#define SDL_MAIN_AVAILABLE
#elif defined(__WINRT__)
#define SDL_MAIN_NEEDED
#elif defined(__IPHONEOS__)
#define SDL_MAIN_NEEDED
#elif defined(__ANDROID__)
#define SDL_MAIN_NEEDED
#elif defined(__NACL__)
#define SDL_MAIN_NEEDED
#if defined(SDL_MAIN_NEEDED) || defined(SDL_MAIN_AVAILABLE)
#define main    SDL_main
extern C_LINKAGE int SDL_main(int argc, char *argv[]);
extern DECLSPEC void SDLCALL SDL_SetMainReady(void);
extern DECLSPEC int SDLCALL SDL_RegisterApp(char *name, Uint32 style,
void *hInst);
extern DECLSPEC void SDLCALL SDL_UnregisterApp(void);
extern DECLSPEC int SDLCALL SDL_WinRTRunApp(int (*mainFunction)(int, char **), void * reserved);
