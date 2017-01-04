SDL_TLSID
SDL_TLSCreate()
void *
SDL_TLSGet(SDL_TLSID id)
int
SDL_TLSSet(SDL_TLSID id, const void *value, void (*destructor)(void *))
static void
SDL_TLSCleanup()
typedef struct SDL_TLSEntry  SDL_TLSEntry;
static SDL_mutex *SDL_generic_TLS_mutex;
static SDL_TLSEntry *SDL_generic_TLS;
SDL_TLSData *
SDL_Generic_GetTLSData()
int
SDL_Generic_SetTLSData(SDL_TLSData *storage)
SDL_error *
SDL_GetErrBuf(void)
typedef struct
thread_args;
void
SDL_RunThread(void *data)
#undef SDL_CreateThread
#if SDL_DYNAMIC_API
#define SDL_CreateThread SDL_CreateThread_REAL
static SDL_Thread *
SDL_CreateThreadWithStackSize(int (SDLCALL * fn) (void *),
const char *name, const size_t stacksize, void *data,
pfnSDL_CurrentBeginThread pfnBeginThread,
pfnSDL_CurrentEndThread pfnEndThread)
static SDL_Thread *
SDL_CreateThreadWithStackSize(int (SDLCALL * fn) (void *),
const char *name, const size_t stacksize, void *data)
DECLSPEC SDL_Thread *SDLCALL
SDL_CreateThread(int (SDLCALL * fn) (void *),
const char *name, void *data,
pfnSDL_CurrentBeginThread pfnBeginThread,
pfnSDL_CurrentEndThread pfnEndThread)
DECLSPEC SDL_Thread *SDLCALL
SDL_CreateThread(int (SDLCALL * fn) (void *),
const char *name, void *data)
SDL_Thread *
SDL_CreateThreadInternal(int (SDLCALL * fn) (void *), const char *name,
const size_t stacksize, void *data)
SDL_threadID
SDL_GetThreadID(SDL_Thread * thread)
const char *
SDL_GetThreadName(SDL_Thread * thread)
int
SDL_SetThreadPriority(SDL_ThreadPriority priority)
void
SDL_WaitThread(SDL_Thread * thread, int *status)
void
SDL_DetachThread(SDL_Thread * thread)
