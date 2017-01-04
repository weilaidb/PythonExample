static inline int __db_tas_mutex_lock_int
__P((ENV *, db_mutex_t, db_timeout_t, int));
static inline int __db_tas_mutex_readlock_int __P((ENV *, db_mutex_t, int));
int
__db_tas_mutex_init(env, mutex, flags)
ENV *env;
db_mutex_t mutex;
u_int32_t flags;
inline static int
__db_tas_mutex_lock_int(env, mutex, timeout, nowait)
ENV *env;
db_mutex_t mutex;
db_timeout_t timeout;
int nowait;
int
__db_tas_mutex_lock(env, mutex, timeout)
ENV *env;
db_mutex_t mutex;
db_timeout_t timeout;
int
__db_tas_mutex_trylock(env, mutex)
ENV *env;
db_mutex_t mutex;
#if defined(HAVE_SHARED_LATCHES)
static inline int
__db_tas_mutex_readlock_int(env, mutex, nowait)
ENV *env;
db_mutex_t mutex;
int nowait;
int
__db_tas_mutex_readlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_tas_mutex_tryreadlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_tas_mutex_unlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_tas_mutex_destroy(env, mutex)
ENV *env;
db_mutex_t mutex;
