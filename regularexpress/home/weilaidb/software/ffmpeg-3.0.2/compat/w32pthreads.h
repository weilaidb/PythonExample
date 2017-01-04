#define COMPAT_W32PTHREADS_H
#define WIN32_LEAN_AND_MEAN
#if _WIN32_WINNT < 0x0600 && defined(__MINGW32__)
#undef MemoryBarrier
#define MemoryBarrier __sync_synchronize
typedef struct pthread_t  pthread_t;
typedef CRITICAL_SECTION pthread_mutex_t;
#if HAVE_CONDITION_VARIABLE_PTR
typedef CONDITION_VARIABLE pthread_cond_t;
typedef struct pthread_cond_t  pthread_cond_t;
#if _WIN32_WINNT >= 0x0600
#define InitializeCriticalSection(x) InitializeCriticalSectionEx(x, 0, 0)
#define WaitForSingleObject(a, b) WaitForSingleObjectEx(a, b, FALSE)
static av_unused unsigned __stdcall attribute_align_arg win32thread_worker(void *arg)
static av_unused int pthread_create(pthread_t *thread, const void *unused_attr,
void *(*start_routine)(void*), void *arg)
static av_unused int pthread_join(pthread_t thread, void **value_ptr)
static inline int pthread_mutex_init(pthread_mutex_t *m, void* attr)
static inline int pthread_mutex_destroy(pthread_mutex_t *m)
static inline int pthread_mutex_lock(pthread_mutex_t *m)
static inline int pthread_mutex_unlock(pthread_mutex_t *m)
#if _WIN32_WINNT >= 0x0600
typedef INIT_ONCE pthread_once_t;
#define PTHREAD_ONCE_INIT INIT_ONCE_STATIC_INIT
static av_unused int pthread_once(pthread_once_t *once_control, void (*init_routine)(void))
static inline int pthread_cond_init(pthread_cond_t *cond, const void *unused_attr)
static inline int pthread_cond_destroy(pthread_cond_t *cond)
static inline int pthread_cond_broadcast(pthread_cond_t *cond)
static inline int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex)
static inline int pthread_cond_signal(pthread_cond_t *cond)
static LONG w32thread_init_state = 0;
static av_unused void w32thread_init(void);
typedef union pthread_once_t   pthread_once_t;
#define PTHREAD_ONCE_INIT
static BOOL (WINAPI *initonce_begin)(pthread_once_t *lpInitOnce, DWORD dwFlags, BOOL *fPending, void **lpContext);
static BOOL (WINAPI *initonce_complete)(pthread_once_t *lpInitOnce, DWORD dwFlags, void *lpContext);
static inline void w32thread_once_fallback(LONG volatile *state, void (*init_routine)(void))
static av_unused int pthread_once(pthread_once_t *once_control, void (*init_routine)(void))
typedef struct  win32_cond_t  win32_cond_t;
static void (WINAPI *cond_broadcast)(pthread_cond_t *cond);
static void (WINAPI *cond_init)(pthread_cond_t *cond);
static void (WINAPI *cond_signal)(pthread_cond_t *cond);
static BOOL (WINAPI *cond_wait)(pthread_cond_t *cond, pthread_mutex_t *mutex,
DWORD milliseconds);
static av_unused int pthread_cond_init(pthread_cond_t *cond, const void *unused_attr)
static av_unused int pthread_cond_destroy(pthread_cond_t *cond)
static av_unused int pthread_cond_broadcast(pthread_cond_t *cond)
static av_unused int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex)
static av_unused int pthread_cond_signal(pthread_cond_t *cond)
static av_unused void w32thread_init(void)
