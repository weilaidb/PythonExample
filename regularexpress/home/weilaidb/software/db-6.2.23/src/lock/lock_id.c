static int __lock_freelocker_int
__P((DB_LOCKTAB *, DB_LOCKREGION *, DB_LOCKER *, int));
int
__lock_id_pp(dbenv, idp)
DB_ENV *dbenv;
u_int32_t *idp;
int
__lock_id(env, idp, lkp)
ENV *env;
u_int32_t *idp;
DB_LOCKER **lkp;
void
__lock_set_thread_id(lref_arg, pid, tid)
void *lref_arg;
pid_t pid;
db_threadid_t tid;
int
__lock_id_free_pp(dbenv, id)
DB_ENV *dbenv;
u_int32_t id;
int
__lock_id_free(env, sh_locker)
ENV *env;
DB_LOCKER *sh_locker;
int
__lock_id_set(env, cur_id, max_id)
ENV *env;
u_int32_t cur_id, max_id;
int
__lock_getlocker(lt, locker, create, retp)
DB_LOCKTAB *lt;
u_int32_t locker;
int create;
DB_LOCKER **retp;
int
__lock_getlocker_int(lt, locker, create, ip, retp)
DB_LOCKTAB *lt;
u_int32_t locker;
int create;
DB_THREAD_INFO *ip;
DB_LOCKER **retp;
int
__lock_addfamilylocker(env, pid, id, is_family)
ENV *env;
u_int32_t pid, id, is_family;
static int
__lock_freelocker_int(lt, region, sh_locker, reallyfree)
DB_LOCKTAB *lt;
DB_LOCKREGION *region;
DB_LOCKER *sh_locker;
int reallyfree;
int
__lock_freelocker(lt, sh_locker)
DB_LOCKTAB *lt;
DB_LOCKER *sh_locker;
int
__lock_familyremove(lt, sh_locker)
DB_LOCKTAB *lt;
DB_LOCKER *sh_locker;
int
__lock_local_locker_invalidate(env, mutex)
ENV *env;
db_mutex_t mutex;
