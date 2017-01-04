static char *__mutex_action_print __P((MUTEX_ACTION));
int
__mutex_alloc(env, alloc_id, flags, indxp)
ENV *env;
int alloc_id;
u_int32_t flags;
db_mutex_t *indxp;
int
__mutex_alloc_int(env, locksys, alloc_id, flags, indxp)
ENV *env;
int locksys, alloc_id;
u_int32_t flags;
db_mutex_t *indxp;
int
__mutex_free(env, indxp)
ENV *env;
db_mutex_t *indxp;
int
__mutex_free_int(env, locksys, indxp)
ENV *env;
int locksys;
db_mutex_t *indxp;
int
__mutex_died(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__mutex_refresh(env, mutex)
ENV *env;
db_mutex_t mutex;
int
__mutex_record_lock(env, mutex, action, retp)
ENV *env;
db_mutex_t mutex;
MUTEX_ACTION action;
MUTEX_STATE **retp;
int
__mutex_record_unlock(env, mutex)
ENV *env;
db_mutex_t mutex;
static char *
__mutex_action_print(action)
MUTEX_ACTION action;
int
__mutex_record_print(env, ip)
ENV *env;
DB_THREAD_INFO *ip;
