struct SDL_mutex
;
SDL_mutex *
SDL_CreateMutex(void)
void
SDL_DestroyMutex(SDL_mutex * mutex)
int
SDL_LockMutex(SDL_mutex * mutex)
int
SDL_TryLockMutex(SDL_mutex * mutex)
int
SDL_mutexV(SDL_mutex * mutex)
