#if SDL_THREAD_WINDOWS
#define STACK_SIZE_PARAM_IS_A_RESERVATION 0x00010000
#if (defined(__MINGW32__) && (__GNUC__ < 4))
typedef unsigned long (__cdecl *pfnSDL_CurrentBeginThread) (void *, unsigned,
unsigned (__stdcall *func)(void *), void *arg,
unsigned, unsigned *threadID);
typedef void (__cdecl *pfnSDL_CurrentEndThread)(unsigned code);
#elif defined(__WATCOMC__)
#if __WATCOMC__ < 1240
#define __watcall
typedef unsigned long (__watcall * pfnSDL_CurrentBeginThread) (void *,
unsigned,
unsigned
(__stdcall *
func) (void
*),
void *arg,
unsigned,
unsigned
*threadID);
typedef void (__watcall * pfnSDL_CurrentEndThread) (unsigned code);
typedef uintptr_t(__cdecl * pfnSDL_CurrentBeginThread) (void *, unsigned,
unsigned (__stdcall *
func) (void
*),
void *arg, unsigned,
unsigned *threadID);
typedef void (__cdecl * pfnSDL_CurrentEndThread) (unsigned code);
typedef struct ThreadStartParms
tThreadStartParms, *pThreadStartParms;
static DWORD
RunThread(void *data)
static DWORD WINAPI
RunThreadViaCreateThread(LPVOID data)
static unsigned __stdcall
RunThreadViaBeginThreadEx(void *data)
int
SDL_SYS_CreateThread(SDL_Thread * thread, void *args,
pfnSDL_CurrentBeginThread pfnBeginThread,
pfnSDL_CurrentEndThread pfnEndThread)
{
#elif defined(__CYGWIN__) || defined(__WINRT__)
int
SDL_SYS_CreateThread(SDL_Thread * thread, void *args)
{
pfnSDL_CurrentBeginThread pfnBeginThread = NULL;
pfnSDL_CurrentEndThread pfnEndThread = NULL;
int
SDL_SYS_CreateThread(SDL_Thread * thread, void *args)
typedef struct tagTHREADNAME_INFO
THREADNAME_INFO;
void
SDL_SYS_SetupThread(const char *name)
SDL_threadID
SDL_ThreadID(void)
int
SDL_SYS_SetThreadPriority(SDL_ThreadPriority priority)
void
SDL_SYS_WaitThread(SDL_Thread * thread)
void
SDL_SYS_DetachThread(SDL_Thread * thread)
