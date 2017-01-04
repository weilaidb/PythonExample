#if SDL_THREAD_PSP
struct SDL_semaphore ;
SDL_sem *SDL_CreateSemaphore(Uint32 initial_value)
void SDL_DestroySemaphore(SDL_sem *sem)
int SDL_SemWaitTimeout(SDL_sem *sem, Uint32 timeout)
int SDL_SemTryWait(SDL_sem *sem)
int SDL_SemWait(SDL_sem *sem)
Uint32 SDL_SemValue(SDL_sem *sem)
int SDL_SemPost(SDL_sem *sem)
