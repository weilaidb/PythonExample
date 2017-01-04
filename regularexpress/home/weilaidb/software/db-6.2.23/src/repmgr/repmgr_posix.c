#define	NO_SUCH_FILE_DESC	(-1)
struct io_info ;
static int __repmgr_conn_work __P((ENV *, REPMGR_CONNECTION *, void *));
static int prepare_io __P((ENV *, REPMGR_CONNECTION *, void *));
int
__repmgr_thread_start(env, runnable)
ENV *env;
REPMGR_RUNNABLE *runnable;
int
__repmgr_thread_join(thread)
REPMGR_RUNNABLE *thread;
int
__repmgr_set_nonblock_conn(conn)
REPMGR_CONNECTION *conn;
int
__repmgr_set_nonblocking(fd)
socket_t fd;
int
__repmgr_wake_waiters(env, waiter)
ENV *env;
waiter_t *waiter;
int
__repmgr_await_cond(env, pred, ctx, timeout, wait_condition)
ENV *env;
PREDICATE pred;
void *ctx;
db_timeout_t timeout;
waiter_t *wait_condition;
int
__repmgr_await_gmdbop(env)
ENV *env;
void
__repmgr_compute_wait_deadline(env, result, wait)
ENV *env;
struct timespec *result;
db_timeout_t wait;
int
__repmgr_await_drain(env, conn, timeout)
ENV *env;
REPMGR_CONNECTION *conn;
db_timeout_t timeout;
int
__repmgr_alloc_cond(c)
cond_var_t *c;
int
__repmgr_free_cond(c)
cond_var_t *c;
void
__repmgr_env_create_pf(db_rep)
DB_REP *db_rep;
int
__repmgr_create_mutex_pf(mutex)
mgr_mutex_t *mutex;
int
__repmgr_destroy_mutex_pf(mutex)
mgr_mutex_t *mutex;
int
__repmgr_init(env)
ENV *env;
int
__repmgr_deinit(env)
ENV *env;
int
__repmgr_init_waiters(env, waiters)
ENV *env;
waiter_t *waiters;
int
__repmgr_destroy_waiters(env, waiters)
ENV *env;
waiter_t *waiters;
int
__repmgr_lock_mutex(mutex)
mgr_mutex_t  *mutex;
int
__repmgr_unlock_mutex(mutex)
mgr_mutex_t  *mutex;
int
__repmgr_signal(v)
cond_var_t *v;
int
__repmgr_wake_msngers(env, n)
ENV *env;
u_int n;
int
__repmgr_wake_main_thread(env)
ENV *env;
int
__repmgr_writev(fd, iovec, buf_count, byte_count_p)
socket_t fd;
db_iovec_t *iovec;
int buf_count;
size_t *byte_count_p;
int
__repmgr_readv(fd, iovec, buf_count, byte_count_p)
socket_t fd;
db_iovec_t *iovec;
int buf_count;
size_t *byte_count_p;
int
__repmgr_select_loop(env)
ENV *env;
static int
prepare_io(env, conn, info_)
ENV *env;
REPMGR_CONNECTION *conn;
void *info_;
static int
__repmgr_conn_work(env, conn, info_)
ENV *env;
REPMGR_CONNECTION *conn;
void *info_;
