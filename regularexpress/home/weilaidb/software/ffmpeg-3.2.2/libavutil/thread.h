#define AVUTIL_THREAD_H
#if HAVE_PTHREADS || HAVE_W32THREADS || HAVE_OS2THREADS
#define USE_ATOMICS 0
#if HAVE_PTHREADS
defined && ASSERT_LEVEL > 1
ASSERT_PTHREAD_NORET do  while (0)
ASSERT_PTHREAD do  while (0)
strict_pthread_join
strict_pthread_mutex_init
strict_pthread_mutex_destroy
strict_pthread_mutex_lock
strict_pthread_mutex_unlock
strict_pthread_cond_init
strict_pthread_cond_destroy
strict_pthread_cond_signal
strict_pthread_cond_broadcast
strict_pthread_cond_wait
strict_pthread_once(void))
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
ff_thread_once pthread_once(control, routine)
#define USE_ATOMICS 1
#define AVMutex char
ff_mutex_init (0)
ff_mutex_lock (0)
ff_mutex_unlock (0)
ff_mutex_destroy (0)
#define AVOnce char
#define AV_ONCE_INIT 0
ff_thread_once(void))
