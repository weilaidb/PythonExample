#define _SDL_thread_h
struct SDL_Thread;
typedef struct SDL_Thread SDL_Thread;
typedef unsigned long SDL_threadID;
typedef unsigned int SDL_TLSID;
typedef enum  SDL_ThreadPriority;
typedef int (SDLCALL * SDL_ThreadFunction) (void *data);
#if defined(__WIN32__) && !defined(HAVE_LIBC)
#define SDL_PASSED_BEGINTHREAD_ENDTHREAD
typedef uintptr_t(__cdecl * pfnSDL_CurrentBeginThread) (void *, unsigned,
unsigned (__stdcall *
func) (void
*),
void *arg, unsigned,
unsigned *threadID);
typedef void (__cdecl * pfnSDL_CurrentEndThread) (unsigned code);
extern DECLSPEC SDL_Thread *SDLCALL
SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data,
pfnSDL_CurrentBeginThread pfnBeginThread,
pfnSDL_CurrentEndThread pfnEndThread);
#if defined(SDL_CreateThread) && SDL_DYNAMIC_API
#undef SDL_CreateThread
#define SDL_CreateThread(fn, name, data) SDL_CreateThread_REAL(fn, name, data, (pfnSDL_CurrentBeginThread)_beginthreadex, (pfnSDL_CurrentEndThread)_endthreadex)
#define SDL_CreateThread(fn, name, data) SDL_CreateThread(fn, name, data, (pfnSDL_CurrentBeginThread)_beginthreadex, (pfnSDL_CurrentEndThread)_endthreadex)
extern DECLSPEC SDL_Thread *SDLCALL
SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data);
extern DECLSPEC const char *SDLCALL SDL_GetThreadName(SDL_Thread *thread);
extern DECLSPEC SDL_threadID SDLCALL SDL_ThreadID(void);
extern DECLSPEC SDL_threadID SDLCALL SDL_GetThreadID(SDL_Thread * thread);
extern DECLSPEC int SDLCALL SDL_SetThreadPriority(SDL_ThreadPriority priority);
extern DECLSPEC void SDLCALL SDL_WaitThread(SDL_Thread * thread, int *status);
extern DECLSPEC void SDLCALL SDL_DetachThread(SDL_Thread * thread);
extern DECLSPEC SDL_TLSID SDLCALL SDL_TLSCreate(void);
extern DECLSPEC void * SDLCALL SDL_TLSGet(SDL_TLSID id);
extern DECLSPEC int SDLCALL SDL_TLSSet(SDL_TLSID id, const void *value, void (*destructor)(void*));
