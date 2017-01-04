extern "C"
struct SDL_cond
;
extern "C"
SDL_cond *
SDL_CreateCond(void)
extern "C"
void
SDL_DestroyCond(SDL_cond * cond)
extern "C"
int
SDL_CondSignal(SDL_cond * cond)
extern "C"
int
SDL_CondBroadcast(SDL_cond * cond)
extern "C"
int
SDL_CondWaitTimeout(SDL_cond * cond, SDL_mutex * mutex, Uint32 ms)
extern "C"
int
SDL_CondWait(SDL_cond * cond, SDL_mutex * mutex)
