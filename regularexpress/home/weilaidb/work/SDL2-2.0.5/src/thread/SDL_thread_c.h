#define _SDL_thread_c_h
#if SDL_THREADS_DISABLED
#elif SDL_THREAD_PTHREAD
#elif SDL_THREAD_WINDOWS
#elif SDL_THREAD_PSP
#elif SDL_THREAD_STDCPP
#error Need thread implementation for this platform
typedef enum SDL_ThreadState
SDL_ThreadState;
struct SDL_Thread
;
extern void SDL_RunThread(void *data);
typedef struct  SDL_TLSData;
#define TLS_ALLOC_CHUNKSIZE 4
extern SDL_TLSData *SDL_Generic_GetTLSData();
extern int SDL_Generic_SetTLSData(SDL_TLSData *data);
