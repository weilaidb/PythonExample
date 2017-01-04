int
SDL_SYS_CreateThread(SDL_Thread * thread, void *args,
pfnSDL_CurrentBeginThread pfnBeginThread,
pfnSDL_CurrentEndThread pfnEndThread)
int
SDL_SYS_CreateThread(SDL_Thread * thread, void *args)
void
SDL_SYS_SetupThread(const char *name)
SDL_threadID
SDL_ThreadID(void)
int
SDL_SYS_SetThreadPriority(SDL_ThreadPriority priority)
void
SDL_SYS_WaitThread(SDL_Thread * thread)
void
SDL_SYS_DetachThread(SDL_Thread * thread)
