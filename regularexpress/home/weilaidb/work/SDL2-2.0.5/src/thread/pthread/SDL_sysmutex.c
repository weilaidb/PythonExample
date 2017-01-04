#define _GNU_SOURCE
#if !SDL_THREAD_PTHREAD_RECURSIVE_MUTEX && \
!SDL_THREAD_PTHREAD_RECURSIVE_MUTEX_NP
#define FAKE_RECURSIVE_MUTEX 1
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
SDL_UnlockMutex(SDL_mutex * mutex)
