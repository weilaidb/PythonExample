static REPMGR_MESSAGE *available_work __P((ENV *));
int
__repmgr_queue_destroy(env)
ENV *env;
int
__repmgr_queue_get(env, msgp, th)
ENV *env;
REPMGR_MESSAGE **msgp;
REPMGR_RUNNABLE *th;
static REPMGR_MESSAGE *
available_work(env)
ENV *env;
int
__repmgr_queue_put(env, msg)
ENV *env;
REPMGR_MESSAGE *msg;
