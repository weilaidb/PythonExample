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
thread_entry
pthread_create(void*),
void *arg)
pthread_join
pthread_mutex_init
pthread_mutex_destroy
pthread_mutex_lock
pthread_mutex_unlock
pthread_cond_init
pthread_cond_destroy
pthread_cond_signal
pthread_cond_broadcast
pthread_cond_wait
pthread_once(void))
