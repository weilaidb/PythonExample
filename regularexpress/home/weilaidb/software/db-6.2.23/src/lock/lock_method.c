int
__lock_env_create(dbenv)
DB_ENV *dbenv;
void
__lock_env_destroy(dbenv)
DB_ENV *dbenv;
int
__lock_get_lk_conflicts(dbenv, lk_conflictsp, lk_modesp)
DB_ENV *dbenv;
const u_int8_t **lk_conflictsp;
int *lk_modesp;
int
__lock_set_lk_conflicts(dbenv, lk_conflicts, lk_modes)
DB_ENV *dbenv;
u_int8_t *lk_conflicts;
int lk_modes;
int
__lock_get_lk_detect(dbenv, lk_detectp)
DB_ENV *dbenv;
u_int32_t *lk_detectp;
int
__lock_set_lk_detect(dbenv, lk_detect)
DB_ENV *dbenv;
u_int32_t lk_detect;
int
__lock_get_lk_max_locks(dbenv, lk_maxp)
DB_ENV *dbenv;
u_int32_t *lk_maxp;
int
__lock_set_lk_max_locks(dbenv, lk_max)
DB_ENV *dbenv;
u_int32_t lk_max;
int
__lock_get_lk_max_lockers(dbenv, lk_maxp)
DB_ENV *dbenv;
u_int32_t *lk_maxp;
int
__lock_set_lk_max_lockers(dbenv, lk_max)
DB_ENV *dbenv;
u_int32_t lk_max;
int
__lock_get_lk_max_objects(dbenv, lk_maxp)
DB_ENV *dbenv;
u_int32_t *lk_maxp;
int
__lock_set_lk_max_objects(dbenv, lk_max)
DB_ENV *dbenv;
u_int32_t lk_max;
int
__lock_get_lk_partitions(dbenv, lk_partitionp)
DB_ENV *dbenv;
u_int32_t *lk_partitionp;
int
__lock_set_lk_partitions(dbenv, lk_partitions)
DB_ENV *dbenv;
u_int32_t lk_partitions;
int
__lock_get_lk_tablesize(dbenv, lk_tablesizep)
DB_ENV *dbenv;
u_int32_t *lk_tablesizep;
int
__lock_set_lk_tablesize(dbenv, lk_tablesize)
DB_ENV *dbenv;
u_int32_t lk_tablesize;
int
__lock_set_lk_priority(dbenv, lockid, priority)
DB_ENV *dbenv;
u_int32_t lockid, priority;
int
__lock_get_lk_priority(dbenv, lockid, priorityp)
DB_ENV *dbenv;
u_int32_t lockid, *priorityp;
int
__lock_get_env_timeout(dbenv, timeoutp, flag)
DB_ENV *dbenv;
db_timeout_t *timeoutp;
u_int32_t flag;
int
__lock_set_env_timeout(dbenv, timeout, flags)
DB_ENV *dbenv;
db_timeout_t timeout;
u_int32_t flags;
