#define	LOAD_ACTUAL_MUTEX_CODE
static _TCHAR hex_digits[] = _T("0123456789abcdef");
static __inline int get_handle(env, mutexp, eventp)
ENV *env;
DB_MUTEX *mutexp;
HANDLE *eventp;
static __inline int
__db_win32_mutex_lock_int(env, mutex, timeout, wait)
ENV *env;
db_mutex_t mutex;
db_timeout_t timeout;
int wait;
int
__db_win32_mutex_init(env, mutex, flags)
ENV *env;
db_mutex_t mutex;
u_int32_t flags;
int
__db_win32_mutex_lock(env, mutex, timeout)
ENV *env;
db_mutex_t mutex;
db_timeout_t timeout;
int
__db_win32_mutex_trylock(env, mutex)
ENV *env;
db_mutex_t mutex;
#if defined(HAVE_SHARED_LATCHES)
int
__db_win32_mutex_readlock_int(env, mutex, nowait)
ENV *env;
db_mutex_t mutex;
int nowait;
int
__db_win32_mutex_readlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_win32_mutex_tryreadlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_win32_mutex_unlock(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__db_win32_mutex_destroy(env, mutex)
ENV *env;
db_mutex_t mutex;
int
db_env_set_win_security(sa)
SECURITY_ATTRIBUTES *sa;
