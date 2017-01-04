#if HAVE_PTHREAD_NP_H
#if defined(__LINUX__) || defined(__MACOSX__) || defined(__IPHONEOS__)
#define RTLD_DEFAULT NULL
static const int sig_list[] = ;
static void *
RunThread(void *data)
#if defined(__MACOSX__) || defined(__IPHONEOS__)
static SDL_bool checked_setname = SDL_FALSE;
static int (*ppthread_setname_np)(const char*) = NULL;
#elif defined(__LINUX__)
static SDL_bool checked_setname = SDL_FALSE;
static int (*ppthread_setname_np)(pthread_t, const char*) = NULL;
int
SDL_SYS_CreateThread(SDL_Thread * thread, void *args)
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
