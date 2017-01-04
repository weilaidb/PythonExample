#define	LOAD_ACTUAL_MUTEX_CODE
#define	pthread_cond_destroy(x)		0
#define	pthread_cond_signal		_lwp_cond_signal
#define	pthread_cond_broadcast		_lwp_cond_broadcast
#define	pthread_cond_wait		_lwp_cond_wait
#define	pthread_mutex_destroy(x)	0
#define	pthread_mutex_lock		_lwp_mutex_lock
#define	pthread_mutex_trylock		_lwp_mutex_trylock
#define	pthread_mutex_unlock		_lwp_mutex_unlock
#define	pthread_cond_destroy(x)		cond_destroy
#define	pthread_cond_broadcast		cond_broadcast
#define	pthread_cond_wait		cond_wait
#define	pthread_mutex_destroy		mutex_destroy
#define	pthread_mutex_lock		mutex_lock
#define	pthread_mutex_trylock		mutex_trylock
#define	pthread_mutex_unlock		mutex_unlock
#define	EFAULT_RETRY_ATTEMPTS	5
#define	RETRY_ON_EFAULT(func_invocation, ret) do  while (0)
#define	RET_SET(f, ret) do  while (0)
#define	ETIME_TO_ETIMEDOUT(ret)	((ret) == ETIME ? ETIMEDOUT : (ret))
#define	ETIME_TO_ETIMEDOUT(ret)	(ret)
int
__db_pthread_mutex_init(env, mutex, flags)
ENV *env;
db_mutex_t mutex;
u_int32_t flags;
inline static int
__db_pthread_mutex_prep(env, mutex, mutexp, exclusive)
ENV *env;
db_mutex_t mutex;
DB_MUTEX *mutexp;
int exclusive;
inline static int
__db_pthread_mutex_condwait(env, mutex, mutexp, timespec)
ENV *env;
db_mutex_t mutex;
DB_MUTEX *mutexp;
db_timespec *timespec;
int
__db_pthread_mutex_lock(env, mutex, timeout)
ENV *env;
db_mutex_t mutex;
db_timeout_t timeout;
#if defined(HAVE_SHARED_LATCHES) && !defined(HAVE_MUTEX_HYBRID)
int
__db_pthread_mutex_readlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_pthread_mutex_tryreadlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_hybrid_mutex_suspend(env, mutex, timespec, exclusive)
ENV *env;
db_mutex_t mutex;
db_timespec *timespec;
int exclusive;
int
__db_pthread_mutex_unlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_pthread_mutex_destroy(env, mutex)
ENV *env;
db_mutex_t mutex;
