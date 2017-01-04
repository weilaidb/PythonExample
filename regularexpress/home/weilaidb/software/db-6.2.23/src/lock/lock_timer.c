int
__lock_set_timeout(env, locker, timeout, op)
ENV *env;
DB_LOCKER *locker;
db_timeout_t timeout;
u_int32_t op;
int
__lock_set_timeout_internal(env, sh_locker, timeout, op)
ENV *env;
DB_LOCKER *sh_locker;
db_timeout_t timeout;
u_int32_t op;
int
__lock_inherit_timeout(env, parent, locker)
ENV *env;
DB_LOCKER *parent, *locker;
