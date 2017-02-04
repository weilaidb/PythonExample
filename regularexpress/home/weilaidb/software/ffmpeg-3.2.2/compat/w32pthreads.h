#define COMPAT_W32PTHREADS_H
#define WIN32_LEAN_AND_MEAN
defined
#undef MemoryBarrier
#define MemoryBarrier __sync_synchronize
typedef struct pthread_t  pthread_t;
typedef CRITICAL_SECTION pthread_mutex_t;
#if HAVE_CONDITION_VARIABLE_PTR
typedef CONDITION_VARIABLE pthread_cond_t;
typedef struct pthread_cond_t  pthread_cond_t;
#if _WIN32_WINNT >= 0x0600
InitializeCriticalSection InitializeCriticalSectionEx(x, 0, 0)
WaitForSingleObject WaitForSingleObjectEx(a, b, FALSE)
win32thread_worker
pthread_create(void*), void *arg)
pthread_join
pthread_mutex_init
pthread_mutex_destroy
pthread_mutex_lock
pthread_mutex_unlock
#if _WIN32_WINNT >= 0x0600
typedef INIT_ONCE pthread_once_t;
#define PTHREAD_ONCE_INIT INIT_ONCE_STATIC_INIT
pthread_once(void))
pthread_cond_init
pthread_cond_destroy
pthread_cond_broadcast
pthread_cond_wait
pthread_cond_signal
static LONG w32thread_init_state = 0;
w32thread_init;
typedef union pthread_once_t   pthread_once_t;
#define PTHREAD_ONCE_INIT
static BOOL (WINAPI *initonce_begin)(pthread_once_t *lpInitOnce, DWORD dwFlags, BOOL *fPending, void **lpContext);
static BOOL (WINAPI *initonce_complete)(pthread_once_t *lpInitOnce, DWORD dwFlags, void *lpContext);
w32thread_once_fallback(void))
pthread_once(void))
typedef struct  win32_cond_t  win32_cond_t;
static void (WINAPI *cond_broadcast)(pthread_cond_t *cond);
static void (WINAPI *cond_init)(pthread_cond_t *cond);
static void (WINAPI *cond_signal)(pthread_cond_t *cond);
static BOOL (WINAPI *cond_wait)(pthread_cond_t *cond, pthread_mutex_t *mutex,
DWORD milliseconds);
pthread_cond_init
pthread_cond_destroy
pthread_cond_broadcast
pthread_cond_wait
pthread_cond_signal
w32thread_init
