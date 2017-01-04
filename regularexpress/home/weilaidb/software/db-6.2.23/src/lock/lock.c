static int __lock_allocobj __P((DB_LOCKTAB *, u_int32_t));
static int __lock_alloclock __P((DB_LOCKTAB *, u_int32_t));
static int  __lock_freelock __P((DB_LOCKTAB *,
struct __db_lock *, DB_LOCKER *, u_int32_t));
static int  __lock_getobj
__P((DB_LOCKTAB *, const DBT *, u_int32_t, int, DB_LOCKOBJ **));
static int __lock_get_api __P((ENV *,
u_int32_t, u_int32_t, const DBT *, db_lockmode_t, DB_LOCK *));
static int  __lock_inherit_locks __P ((DB_LOCKTAB *, DB_LOCKER *, u_int32_t));
static int  __lock_same_family __P((DB_LOCKTAB *, DB_LOCKER *, DB_LOCKER *));
static int  __lock_put_internal __P((DB_LOCKTAB *,
struct __db_lock *, u_int32_t,  u_int32_t));
static int  __lock_put_nolock __P((ENV *, DB_LOCK *, int *, u_int32_t));
static int __lock_remove_waiter __P((DB_LOCKTAB *,
DB_LOCKOBJ *, struct __db_lock *, db_status_t));
static int __lock_trade __P((ENV *, DB_LOCK *, DB_LOCKER *));
static int __lock_vec_api __P((ENV *,
u_int32_t, u_int32_t,  DB_LOCKREQ *, int, DB_LOCKREQ **));
#define	LOCK_INVALID_ERR DB_STR_A("2056", "%s: Lock is no longer valid", "%s")
#define	LOCKER_INVALID_ERR DB_STR("2057", "Locker is not valid")
extern void __db_loadme (void);
int
__lock_vec_pp(dbenv, lid, flags, list, nlist, elistp)
DB_ENV *dbenv;
u_int32_t lid, flags;
int nlist;
DB_LOCKREQ *list, **elistp;
static int
__lock_vec_api(env, lid, flags, list, nlist, elistp)
ENV *env;
u_int32_t lid, flags;
int nlist;
DB_LOCKREQ *list, **elistp;
int
__lock_vec(env, sh_locker, flags, list, nlist, elistp)
ENV *env;
DB_LOCKER *sh_locker;
u_int32_t flags;
int nlist;
DB_LOCKREQ *list, **elistp;
int
__lock_get_pp(dbenv, locker, flags, obj, lock_mode, lock)
DB_ENV *dbenv;
u_int32_t locker, flags;
DBT *obj;
db_lockmode_t lock_mode;
DB_LOCK *lock;
static int
__lock_get_api(env, locker, flags, obj, lock_mode, lock)
ENV *env;
u_int32_t locker, flags;
const DBT *obj;
db_lockmode_t lock_mode;
DB_LOCK *lock;
int
__lock_get(env, locker, flags, obj, lock_mode, lock)
ENV *env;
DB_LOCKER *locker;
u_int32_t flags;
const DBT *obj;
db_lockmode_t lock_mode;
DB_LOCK *lock;
static int
__lock_alloclock(lt, part_id)
DB_LOCKTAB *lt;
u_int32_t part_id;
int
__lock_get_internal(lt, sh_locker, flags, obj, lock_mode, timeout, lock)
DB_LOCKTAB *lt;
DB_LOCKER *sh_locker;
u_int32_t flags;
const DBT *obj;
db_lockmode_t lock_mode;
db_timeout_t timeout;
DB_LOCK *lock;
int
__lock_put_pp(dbenv, lock)
DB_ENV *dbenv;
DB_LOCK *lock;
int
__lock_put(env, lock)
ENV *env;
DB_LOCK *lock;
static int
__lock_put_nolock(env, lock, runp, flags)
ENV *env;
DB_LOCK *lock;
int *runp;
u_int32_t flags;
int
__lock_downgrade(env, lock, new_mode, flags)
ENV *env;
DB_LOCK *lock;
db_lockmode_t new_mode;
u_int32_t flags;
static int
__lock_put_internal(lt, lockp, obj_ndx, flags)
DB_LOCKTAB *lt;
struct __db_lock *lockp;
u_int32_t obj_ndx, flags;
static int
__lock_freelock(lt, lockp, sh_locker, flags)
DB_LOCKTAB *lt;
struct __db_lock *lockp;
DB_LOCKER *sh_locker;
u_int32_t flags;
#undef FREE_LIST_HEAD
#undef STRUCT_NAME
#undef CURRENT_COUNT
#undef MAX_COUNT
#undef STEAL_NAME
#undef STEAL_EVENT
static int
__lock_allocobj(lt, part_id)
DB_LOCKTAB *lt;
u_int32_t part_id;
static int
__lock_getobj(lt, obj, ndx, create, retp)
DB_LOCKTAB *lt;
const DBT *obj;
u_int32_t ndx;
int create;
DB_LOCKOBJ **retp;
static int
__lock_same_family(lt, sh_locker1, sh_locker2)
DB_LOCKTAB *lt;
DB_LOCKER *sh_locker1;
DB_LOCKER *sh_locker2;
int
__lock_locker_same_family(env, locker1, locker2, retp)
ENV *env;
DB_LOCKER *locker1;
DB_LOCKER *locker2;
int *retp;
static int
__lock_inherit_locks(lt, sh_locker, flags)
DB_LOCKTAB *lt;
DB_LOCKER *sh_locker;
u_int32_t flags;
int
__lock_wakeup(env, obj)
ENV *env;
const DBT *obj;
int
__lock_promote(lt, obj, state_changedp, flags)
DB_LOCKTAB *lt;
DB_LOCKOBJ *obj;
int *state_changedp;
u_int32_t flags;
static int
__lock_remove_waiter(lt, sh_obj, lockp, status)
DB_LOCKTAB *lt;
DB_LOCKOBJ *sh_obj;
struct __db_lock *lockp;
db_status_t status;
static int
__lock_trade(env, lock, new_locker)
ENV *env;
DB_LOCK *lock;
DB_LOCKER *new_locker;
int
__lock_change(env, old_lock, new_lock)
ENV *env;
DB_LOCK *old_lock, *new_lock;
