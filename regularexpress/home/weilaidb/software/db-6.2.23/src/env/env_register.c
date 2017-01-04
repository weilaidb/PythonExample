#define	REGISTER_FILE	"__db.register"
#define	PID_EMPTY	"X                      0\n"
#define	PID_FMT		"%24lu\n"
#define	PID_ISEMPTY(p)	(memcmp(p, PID_EMPTY, PID_LEN) == 0)
#define	PID_LEN		(25)
#define	REGISTRY_LOCK(env, pos, nowait)					\
__os_fdlock(env, (env)->dbenv->registry, (off_t)(pos), 1, nowait)
#define	REGISTRY_UNLOCK(env, pos)					\
__os_fdlock(env, (env)->dbenv->registry, (off_t)(pos), 0, 0)
#define	REGISTRY_EXCL_LOCK(env, nowait)					\
REGISTRY_LOCK(env, 1, nowait)
#define	REGISTRY_EXCL_UNLOCK(env)					\
REGISTRY_UNLOCK(env, 1)
static	int __envreg_add __P((ENV *, int *, u_int32_t));
static	int __envreg_pid_compare __P((const void *, const void *));
static	int __envreg_create_active_pid __P((ENV *, char *));
static	int __envreg_add_active_pid __P((ENV*, char *));
#define	DB_ENVREG_KILL_ALL	0
int
__envreg_register(env, need_recoveryp, flags)
ENV *env;
int *need_recoveryp;
u_int32_t flags;
static int
__envreg_add(env, need_recoveryp, flags)
ENV *env;
int *need_recoveryp;
u_int32_t flags;
int
__envreg_unregister(env, recovery_failed)
ENV *env;
int recovery_failed;
int
__envreg_xunlock(env)
ENV *env;
static int
__envreg_pid_compare(key, membr)
const void *key;
const void *membr;
int
__envreg_isalive(dbenv, pid, tid, flags )
DB_ENV *dbenv;
pid_t pid;
db_threadid_t tid;
u_int32_t flags;
static int
__envreg_create_active_pid(env, my_pid)
ENV *env;
char *my_pid;
static int
__envreg_add_active_pid(env, pid)
ENV *env;
char *pid;
