static db_timeout_t __repmgr_compute_response_time __P((ENV *));
static int __repmgr_elect __P((ENV *, u_int32_t, db_timespec *));
static int __repmgr_elect_main __P((ENV *,
DB_THREAD_INFO *, REPMGR_RUNNABLE *));
static void *__repmgr_elect_thread __P((void *));
int
__repmgr_init_election(env, flags)
ENV *env;
u_int32_t flags;
static void *
__repmgr_elect_thread(argsp)
void *argsp;
static int
__repmgr_elect_main(env, ip, th)
ENV *env;
DB_THREAD_INFO *ip;
REPMGR_RUNNABLE *th;
static db_timeout_t
__repmgr_compute_response_time(env)
ENV *env;
static int
__repmgr_elect(env, flags, failtimep)
ENV *env;
u_int32_t flags;
db_timespec *failtimep;
int
__repmgr_claim_victory(env)
ENV *env;
int
__repmgr_turn_on_elections(env)
ENV *env;
