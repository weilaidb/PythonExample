extern "C"
static void
RunThread(void *args)
extern "C"
int
SDL_SYS_CreateThread(SDL_Thread * thread, void *args)
extern "C"
void
SDL_SYS_SetupThread(const char *name)
extern "C"
SDL_threadID
SDL_ThreadID(void)
extern "C"
int
SDL_SYS_SetThreadPriority(SDL_ThreadPriority priority)
extern "C"
void
SDL_SYS_WaitThread(SDL_Thread * thread)
extern "C"
void
SDL_SYS_DetachThread(SDL_Thread * thread)
extern "C"
SDL_TLSData *
SDL_SYS_GetTLSData()
extern "C"
int
SDL_SYS_SetTLSData(SDL_TLSData *data)
