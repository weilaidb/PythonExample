#define PTHREAD_H
#define WIN32_LEAN_AND_MEAN
#define pthread_mutex_t CRITICAL_SECTION
#define pthread_mutex_init(a,b) (InitializeCriticalSection((a)), 0)
#define pthread_mutex_destroy(a) DeleteCriticalSection((a))
#define pthread_mutex_lock EnterCriticalSection
#define pthread_mutex_unlock LeaveCriticalSection
typedef int pthread_mutexattr_t;
#define pthread_mutexattr_init(a) (*(a) = 0)
#define pthread_mutexattr_destroy(a) do  while (0)
#define pthread_mutexattr_settype(a, t) 0
#define PTHREAD_MUTEX_RECURSIVE 0
typedef struct  pthread_cond_t;
extern int pthread_cond_init(pthread_cond_t *cond, const void *unused);
extern int pthread_cond_destroy(pthread_cond_t *cond);
extern int pthread_cond_wait(pthread_cond_t *cond, CRITICAL_SECTION *mutex);
extern int pthread_cond_signal(pthread_cond_t *cond);
extern int pthread_cond_broadcast(pthread_cond_t *cond);
typedef struct  pthread_t;
extern int pthread_create(pthread_t *thread, const void *unused,
void *(*start_routine)(void*), void *arg);
#define pthread_join(a, b) win32_pthread_join(&(a), (b))
extern int win32_pthread_join(pthread_t *thread, void **value_ptr);
#define pthread_equal(t1, t2) ((t1).tid == (t2).tid)
extern pthread_t pthread_self(void);
static inline int pthread_exit(void *ret)
typedef DWORD pthread_key_t;
static inline int pthread_key_create(pthread_key_t *keyp, void (*destructor)(void *value))
static inline int pthread_key_delete(pthread_key_t key)
static inline int pthread_setspecific(pthread_key_t key, const void *value)
static inline void *pthread_getspecific(pthread_key_t key)
