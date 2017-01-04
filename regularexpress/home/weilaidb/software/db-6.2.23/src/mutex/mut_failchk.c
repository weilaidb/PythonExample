static int __mutex_failchk_single __P((ENV *, db_mutex_t, DB_THREAD_INFO *));
int
__mutex_failchk(env)
ENV *env;
int
__mutex_failchk_thread(env, ip)
ENV *env;
DB_THREAD_INFO *ip;
static int
__mutex_failchk_single(env, mutex, ip)
ENV *env;
db_mutex_t mutex;
DB_THREAD_INFO *ip;
