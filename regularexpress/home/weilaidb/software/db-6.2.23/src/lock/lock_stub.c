static int __db_nolocking __P((ENV *));
static int
__db_nolocking(env)
ENV *env;
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
__lock_get_lk_detect(dbenv, lk_detectp)
DB_ENV *dbenv;
u_int32_t *lk_detectp;
int
__lock_get_lk_init_lockers(dbenv, lk_initp)
DB_ENV *dbenv;
u_int32_t *lk_initp;
int
__lock_get_lk_init_locks(dbenv, lk_initp)
DB_ENV *dbenv;
u_int32_t *lk_initp;
int
__lock_get_lk_init_objects(dbenv, lk_initp)
DB_ENV *dbenv;
u_int32_t *lk_initp;
int
__lock_get_lk_max_lockers(dbenv, lk_maxp)
DB_ENV *dbenv;
u_int32_t *lk_maxp;
int
__lock_get_lk_max_locks(dbenv, lk_maxp)
DB_ENV *dbenv;
u_int32_t *lk_maxp;
int
__lock_get_lk_max_objects(dbenv, lk_maxp)
DB_ENV *dbenv;
u_int32_t *lk_maxp;
int
__lock_get_lk_partitions(dbenv, lk_maxp)
DB_ENV *dbenv;
u_int32_t *lk_maxp;
int
__lock_get_lk_tablesize(dbenv, lk_tablesizep)
DB_ENV *dbenv;
u_int32_t *lk_tablesizep;
int
__lock_set_lk_tablesize(dbenv, lk_tablesize)
DB_ENV *dbenv;
u_int32_t lk_tablesize;
int
__lock_get_lk_priority(dbenv, lockid, priorityp)
DB_ENV *dbenv;
u_int32_t lockid, *priorityp;
int
__lock_set_lk_priority(dbenv, lockid, priority)
DB_ENV *dbenv;
u_int32_t lockid, priority;
int
__lock_get_env_timeout(dbenv, timeoutp, flag)
DB_ENV *dbenv;
db_timeout_t *timeoutp;
u_int32_t flag;
int
__lock_detect_pp(dbenv, flags, atype, abortp)
DB_ENV *dbenv;
u_int32_t flags, atype;
int *abortp;
int
__lock_get_pp(dbenv, locker, flags, obj, lock_mode, lock)
DB_ENV *dbenv;
u_int32_t locker, flags;
DBT *obj;
db_lockmode_t lock_mode;
DB_LOCK *lock;
int
__lock_id_pp(dbenv, idp)
DB_ENV *dbenv;
u_int32_t *idp;
int
__lock_id_free_pp(dbenv, id)
DB_ENV *dbenv;
u_int32_t id;
int
__lock_put_pp(dbenv, lock)
DB_ENV *dbenv;
DB_LOCK *lock;
int
__lock_stat_pp(dbenv, statp, flags)
DB_ENV *dbenv;
DB_LOCK_STAT **statp;
u_int32_t flags;
int
__lock_stat_print_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__lock_vec_pp(dbenv, locker, flags, list, nlist, elistp)
DB_ENV *dbenv;
u_int32_t locker, flags;
int nlist;
DB_LOCKREQ *list, **elistp;
int
__lock_set_lk_conflicts(dbenv, lk_conflicts, lk_modes)
DB_ENV *dbenv;
u_int8_t *lk_conflicts;
int lk_modes;
int
__lock_set_lk_detect(dbenv, lk_detect)
DB_ENV *dbenv;
u_int32_t lk_detect;
int
__lock_set_lk_max_locks(dbenv, lk_max)
DB_ENV *dbenv;
u_int32_t lk_max;
int
__lock_set_lk_max_lockers(dbenv, lk_max)
DB_ENV *dbenv;
u_int32_t lk_max;
int
__lock_set_lk_max_objects(dbenv, lk_max)
DB_ENV *dbenv;
u_int32_t lk_max;
int
__lock_set_lk_partitions(dbenv, lk_max)
DB_ENV *dbenv;
u_int32_t lk_max;
int
__lock_set_env_timeout(dbenv, timeout, flags)
DB_ENV *dbenv;
db_timeout_t timeout;
u_int32_t flags;
int
__lock_open(env)
ENV *env;
u_int32_t
__lock_region_mutex_count(env)
ENV *env;
u_int32_t
__lock_region_mutex_max(env)
ENV *env;
size_t
__lock_region_max(env)
ENV *env;
size_t
__lock_region_size(env, other_alloc)
ENV *env;
size_t other_alloc;
int
__lock_id_free(env, sh_locker)
ENV *env;
DB_LOCKER *sh_locker;
int
__lock_env_refresh(env)
ENV *env;
int
__lock_stat_print(env, flags)
ENV *env;
u_int32_t flags;
int
__lock_put(env, lock)
ENV *env;
DB_LOCK *lock;
int
__lock_vec(env, sh_locker, flags, list, nlist, elistp)
ENV *env;
DB_LOCKER *sh_locker;
u_int32_t flags;
int nlist;
DB_LOCKREQ *list, **elistp;
int
__lock_get(env, locker, flags, obj, lock_mode, lock)
ENV *env;
DB_LOCKER *locker;
u_int32_t flags;
const DBT *obj;
db_lockmode_t lock_mode;
DB_LOCK *lock;
int
__lock_id(env, idp, lkp)
ENV *env;
u_int32_t *idp;
DB_LOCKER **lkp;
int
__lock_inherit_timeout(env, parent, locker)
ENV *env;
DB_LOCKER *parent, *locker;
int
__lock_set_timeout(env, locker, timeout, op)
ENV *env;
DB_LOCKER *locker;
db_timeout_t timeout;
u_int32_t op;
int
__lock_addfamilylocker(env, pid, id, is_family)
ENV *env;
u_int32_t pid, id, is_family;
int
__lock_freelocker(lt, sh_locker)
DB_LOCKTAB *lt;
DB_LOCKER *sh_locker;
int
__lock_familyremove(lt, sh_locker)
DB_LOCKTAB *lt;
DB_LOCKER *sh_locker;
int
__lock_downgrade(env, lock, new_mode, flags)
ENV *env;
DB_LOCK *lock;
db_lockmode_t new_mode;
u_int32_t flags;
int
__lock_locker_same_family(env, locker1, locker2, retp)
ENV *env;
DB_LOCKER *locker1;
DB_LOCKER *locker2;
int *retp;
void
__lock_set_thread_id(lref, pid, tid)
void *lref;
pid_t pid;
db_threadid_t tid;
int
__lock_failchk(env)
ENV *env;
int
__lock_get_list(env, locker, flags, lock_mode, list)
ENV *env;
DB_LOCKER *locker;
u_int32_t flags;
db_lockmode_t lock_mode;
DBT *list;
void
__lock_list_print(env, mbp, list)
ENV *env;
DB_MSGBUF *mbp;
DBT *list;
int
__lock_getlocker(lt, locker, create, retp)
DB_LOCKTAB *lt;
u_int32_t locker;
int create;
DB_LOCKER **retp;
int
__lock_id_set(env, cur_id, max_id)
ENV *env;
u_int32_t cur_id, max_id;
int
__lock_wakeup(env, obj)
ENV *env;
const DBT *obj;
int
__lock_change(env, old_lock, new_lock)
ENV *env;
DB_LOCK *old_lock, *new_lock;
