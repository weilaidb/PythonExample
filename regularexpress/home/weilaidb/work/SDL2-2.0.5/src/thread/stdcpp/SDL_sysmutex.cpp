extern "C"
extern "C"
SDL_mutex *
SDL_CreateMutex(void)
extern "C"
void
SDL_DestroyMutex(SDL_mutex * mutex)
extern "C"
int
SDL_mutexP(SDL_mutex * mutex)
int
SDL_TryLockMutex(SDL_mutex * mutex)
extern "C"
int
SDL_mutexV(SDL_mutex * mutex)
