#if SDL_THREAD_PSP
struct SDL_mutex
;
SDL_mutex *
SDL_CreateMutex(void)
void
SDL_DestroyMutex(SDL_mutex * mutex)
int
SDL_mutexP(SDL_mutex * mutex)
int
SDL_mutexV(SDL_mutex * mutex)
