struct SDL_cond
;
SDL_cond *
SDL_CreateCond(void)
void
SDL_DestroyCond(SDL_cond * cond)
int
SDL_CondSignal(SDL_cond * cond)
int
SDL_CondBroadcast(SDL_cond * cond)
int
SDL_CondWaitTimeout(SDL_cond * cond, SDL_mutex * mutex, Uint32 ms)
int
SDL_CondWait(SDL_cond * cond, SDL_mutex * mutex)
