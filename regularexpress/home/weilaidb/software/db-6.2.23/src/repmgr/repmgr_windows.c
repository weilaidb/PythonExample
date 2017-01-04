#define	DB_TIMEOUT_TO_WINDOWS_TIMEOUT(t) (((t) + (US_PER_MS - 1)) / US_PER_MS)
typedef struct __cond_waiter  COND_WAITER;
#define	WAITER_SLOT_IN_USE(w) ((w)->pred != NULL)
struct __cond_waiters_table ;
struct io_info ;
static int allocate_wait_slot __P((ENV *, int *, COND_WAITERS_TABLE *));
static void free_wait_slot __P((ENV *, int, COND_WAITERS_TABLE *));
static int handle_completion __P((ENV *, REPMGR_CONNECTION *));
static int prepare_io __P((ENV *, REPMGR_CONNECTION *, void *));
int
__repmgr_thread_start(env, runnable)
ENV *env;
REPMGR_RUNNABLE *runnable;
int
__repmgr_thread_join(thread)
REPMGR_RUNNABLE *thread;
int
__repmgr_set_nonblocking(s)
SOCKET s;
int
__repmgr_set_nonblock_conn(conn)
REPMGR_CONNECTION *conn;
int
__repmgr_wake_waiters(env, w)
ENV *env;
waiter_t *w;
int
__repmgr_await_cond(env, pred, ctx, timeout, waiters_p)
ENV *env;
PREDICATE pred;
void *ctx;
db_timeout_t timeout;
waiter_t *waiters_p;
static int
allocate_wait_slot(env, resultp, table)
ENV *env;
int *resultp;
COND_WAITERS_TABLE *table;
static void
free_wait_slot(env, slot_index, table)
ENV *env;
int slot_index;
COND_WAITERS_TABLE *table;
int
__repmgr_await_gmdbop(env)
ENV *env;
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
mgr_mutex_t  *mutex;
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
__repmgr_destroy_waiters(env, waitersp)
ENV *env;
waiter_t *waitersp;
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
__repmgr_readv(fd, iovec, buf_count, xfr_count_p)
socket_t fd;
db_iovec_t *iovec;
int buf_count;
size_t *xfr_count_p;
int
__repmgr_select_loop(env)
ENV *env;
static int
prepare_io(env, conn, info_)
ENV *env;
REPMGR_CONNECTION *conn;
void *info_;
static int
handle_completion(env, conn)
ENV *env;
REPMGR_CONNECTION *conn;
