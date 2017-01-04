#define INVALID_PTHREAD_KEY ((pthread_key_t)-1)
static pthread_key_t thread_local_storage = INVALID_PTHREAD_KEY;
static SDL_bool generic_local_storage = SDL_FALSE;
SDL_TLSData *
SDL_SYS_GetTLSData()
int
SDL_SYS_SetTLSData(SDL_TLSData *data)
