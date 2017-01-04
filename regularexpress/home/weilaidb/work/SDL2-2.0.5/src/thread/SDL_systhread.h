#define _SDL_systhread_h
extern int SDL_SYS_CreateThread(SDL_Thread * thread, void *args,
pfnSDL_CurrentBeginThread pfnBeginThread,
pfnSDL_CurrentEndThread pfnEndThread);
extern int SDL_SYS_CreateThread(SDL_Thread * thread, void *args);
extern void SDL_SYS_SetupThread(const char *name);
extern int SDL_SYS_SetThreadPriority(SDL_ThreadPriority priority);
extern void SDL_SYS_WaitThread(SDL_Thread * thread);
extern void SDL_SYS_DetachThread(SDL_Thread * thread);
extern SDL_TLSData *SDL_SYS_GetTLSData();
extern int SDL_SYS_SetTLSData(SDL_TLSData *data);
extern SDL_Thread *
SDL_CreateThreadInternal(int (SDLCALL * fn) (void *), const char *name,
const size_t stacksize, void *data);
