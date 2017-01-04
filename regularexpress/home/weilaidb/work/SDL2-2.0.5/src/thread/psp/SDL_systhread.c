#if SDL_THREAD_PSP
static int ThreadEntry(SceSize args, void *argp)
int SDL_SYS_CreateThread(SDL_Thread *thread, void *args)
void SDL_SYS_SetupThread(const char *name)
SDL_threadID SDL_ThreadID(void)
void SDL_SYS_WaitThread(SDL_Thread *thread)
void SDL_SYS_DetachThread(SDL_Thread *thread)
void SDL_SYS_KillThread(SDL_Thread *thread)
int SDL_SYS_SetThreadPriority(SDL_ThreadPriority priority)
