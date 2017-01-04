#define AVUTIL_THREAD_H
#if HAVE_PTHREADS || HAVE_W32THREADS || HAVE_OS2THREADS
#define USE_ATOMICS 0
#if HAVE_PTHREADS
#if defined(ASSERT_LEVEL) && ASSERT_LEVEL > 1
#define ASSERT_PTHREAD_NORET(func, ...) do  while (0)
#define ASSERT_PTHREAD(func, ...) do  while (0)
static inline int strict_pthread_join(pthread_t thread, void **value_ptr)
static inline int strict_pthread_mutex_init(pthread_mutex_t *mutex, const pthread_mutexattr_t *attr)
static inline int strict_pthread_mutex_destroy(pthread_mutex_t *mutex)
static inline int strict_pthread_mutex_lock(pthread_mutex_t *mutex)
static inline int strict_pthread_mutex_unlock(pthread_mutex_t *mutex)
static inline int strict_pthread_cond_init(pthread_cond_t *cond, const pthread_condattr_t *attr)
static inline int strict_pthread_cond_destroy(pthread_cond_t *cond)
static inline int strict_pthread_cond_signal(pthread_cond_t *cond)
static inline int strict_pthread_cond_broadcast(pthread_cond_t *cond)
static inline int strict_pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex)
static inline int strict_pthread_once(pthread_once_t *once_control, void (*init_routine)(void))
#define pthread_join           strict_pthread_join
#define pthread_mutex_init     strict_pthread_mutex_init
#define pthread_mutex_destroy  strict_pthread_mutex_destroy
#define pthread_mutex_lock     strict_pthread_mutex_lock
#define pthread_mutex_unlock   strict_pthread_mutex_unlock
#define pthread_cond_init      strict_pthread_cond_init
#define pthread_cond_destroy   strict_pthread_cond_destroy
#define pthread_cond_signal    strict_pthread_cond_signal
#define pthread_cond_broadcast strict_pthread_cond_broadcast
#define pthread_cond_wait      strict_pthread_cond_wait
#define pthread_once           strict_pthread_once
#elif HAVE_OS2THREADS
#define AVMutex pthread_mutex_t
#define ff_mutex_init    pthread_mutex_init
#define ff_mutex_lock    pthread_mutex_lock
#define ff_mutex_unlock  pthread_mutex_unlock
#define ff_mutex_destroy pthread_mutex_destroy
#define AVOnce pthread_once_t
#define AV_ONCE_INIT PTHREAD_ONCE_INIT
#define ff_thread_once(control, routine) pthread_once(control, routine)
#define USE_ATOMICS 1
#define AVMutex char
#define ff_mutex_init(mutex, attr) (0)
#define ff_mutex_lock(mutex) (0)
#define ff_mutex_unlock(mutex) (0)
#define ff_mutex_destroy(mutex) (0)
#define AVOnce char
#define AV_ONCE_INIT 0
static inline int ff_thread_once(char *control, void (*routine)(void))
