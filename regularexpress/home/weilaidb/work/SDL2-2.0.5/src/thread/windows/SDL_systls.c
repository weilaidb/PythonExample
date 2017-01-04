#if SDL_THREAD_WINDOWS
static DWORD thread_local_storage = TLS_OUT_OF_INDEXES;
static SDL_bool generic_local_storage = SDL_FALSE;
SDL_TLSData *
SDL_SYS_GetTLSData()
int
SDL_SYS_SetTLSData(SDL_TLSData *data)
