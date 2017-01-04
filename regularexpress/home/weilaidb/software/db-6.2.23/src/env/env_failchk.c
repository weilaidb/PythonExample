static int __env_in_api __P((ENV *));
static void __env_clear_state __P((ENV *));
#define	FAILCHK_PROCESS_ERROR(t_ret, ret)	\
if ((t_ret) != 0 && (ret) == 0)	(ret) = (t_ret)
#define	FAILCHK_PROCESS_ERROR(t_ret, ret)	\
if (((ret) = (t_ret)) != 0) goto err
#define	DB_THREAD_INFOS_PER_BUCKET	8
int
__env_failchk_pp(dbenv, flags)
DB_ENV *dbenv;
u_int32_t flags;
int
__env_failchk_int(dbenv)
DB_ENV *dbenv;
size_t
__env_thread_size(env, other_alloc)
ENV *env;
size_t other_alloc;
size_t
__env_thread_max(env)
ENV *env;
int
__env_thread_init(env, during_creation)
ENV *env;
int during_creation;
void
__env_thread_destroy(env)
ENV *env;
static int
__env_in_api(env)
ENV *env;
static void
__env_clear_state(env)
ENV *env;
struct __db_threadid ;
int
__env_set_state(env, ipp, state)
ENV *env;
DB_THREAD_INFO **ipp;
DB_THREAD_STATE state;
char *
__env_thread_id_string(dbenv, pid, tid, buf)
DB_ENV *dbenv;
pid_t pid;
db_threadid_t tid;
char *buf;
