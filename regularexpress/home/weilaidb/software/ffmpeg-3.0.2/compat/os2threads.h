#define COMPAT_OS2THREADS_H
#define INCL_DOS
#undef __STRICT_ANSI__
typedef struct  pthread_t;
typedef void pthread_attr_t;
typedef HMTX pthread_mutex_t;
typedef void pthread_mutexattr_t;
typedef struct  pthread_cond_t;
typedef void pthread_condattr_t;
typedef struct  pthread_once_t;
#define PTHREAD_ONCE_INIT
static void thread_entry(void *arg)
static av_always_inline int pthread_create(pthread_t *thread,
const pthread_attr_t *attr,
void *(*start_routine)(void*),
void *arg)
static av_always_inline int pthread_join(pthread_t thread, void **value_ptr)
static av_always_inline int pthread_mutex_init(pthread_mutex_t *mutex,
const pthread_mutexattr_t *attr)
static av_always_inline int pthread_mutex_destroy(pthread_mutex_t *mutex)
static av_always_inline int pthread_mutex_lock(pthread_mutex_t *mutex)
static av_always_inline int pthread_mutex_unlock(pthread_mutex_t *mutex)
static av_always_inline int pthread_cond_init(pthread_cond_t *cond,
const pthread_condattr_t *attr)
static av_always_inline int pthread_cond_destroy(pthread_cond_t *cond)
static av_always_inline int pthread_cond_signal(pthread_cond_t *cond)
static av_always_inline int pthread_cond_broadcast(pthread_cond_t *cond)
static av_always_inline int pthread_cond_wait(pthread_cond_t *cond,
pthread_mutex_t *mutex)
static av_always_inline int pthread_once(pthread_once_t *once_control,
void (*init_routine)(void))
