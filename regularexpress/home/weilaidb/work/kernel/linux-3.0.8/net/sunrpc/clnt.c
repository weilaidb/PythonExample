# define RPCDBG_FACILITY	RPCDBG_CALL
#define dprint_status(t)					\
dprintk("RPC: %5u %s (status %d)\n", t->tk_pid,		\
__func__, t->tk_status)
static LIST_HEAD(all_clients);
static DEFINE_SPINLOCK(rpc_client_lock);
static DECLARE_WAIT_QUEUE_HEAD(destroy_wait);
static void	call_start(struct rpc_task *task);
static void	call_reserve(struct rpc_task *task);
static void	call_reserveresult(struct rpc_task *task);
static void	call_allocate(struct rpc_task *task);
static void	call_decode(struct rpc_task *task);
static void	call_bind(struct rpc_task *task);
static void	call_bind_status(struct rpc_task *task);
static void	call_transmit(struct rpc_task *task);
#if defined(CONFIG_NFS_V4_1)
static void	call_bc_transmit(struct rpc_task *task);
static void	call_status(struct rpc_task *task);
static void	call_transmit_status(struct rpc_task *task);
static void	call_refresh(struct rpc_task *task);
static void	call_refreshresult(struct rpc_task *task);
static void	call_timeout(struct rpc_task *task);
static void	call_connect(struct rpc_task *task);
static void	call_connect_status(struct rpc_task *task);
static __be32	*rpc_encode_header(struct rpc_task *task);
static __be32	*rpc_verify_header(struct rpc_task *task);
static int	rpc_ping(struct rpc_clnt *clnt);
static void rpc_register_client(struct rpc_clnt *clnt)
static void rpc_unregister_client(struct rpc_clnt *clnt)
static int
rpc_setup_pipedir(struct rpc_clnt *clnt, char *dir_name)
static struct rpc_clnt * rpc_new_client(const struct rpc_create_args *args, struct rpc_xprt *xprt)
struct rpc_clnt *rpc_create(struct rpc_create_args *args)
EXPORT_SYMBOL_GPL(rpc_create);
struct rpc_clnt *
rpc_clone_client(struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_clone_client);
void rpc_killall_tasks(struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_killall_tasks);
void rpc_shutdown_client(struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_shutdown_client);
static void
rpc_free_client(struct rpc_clnt *clnt)
static void
rpc_free_auth(struct rpc_clnt *clnt)
void
rpc_release_client(struct rpc_clnt *clnt)
struct rpc_clnt *rpc_bind_new_program(struct rpc_clnt *old,
struct rpc_program *program,
u32 vers)
EXPORT_SYMBOL_GPL(rpc_bind_new_program);
void rpc_task_release_client(struct rpc_task *task)
static
void rpc_task_set_client(struct rpc_task *task, struct rpc_clnt *clnt)
void rpc_task_reset_client(struct rpc_task *task, struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_task_reset_client);
static void
rpc_task_set_rpc_message(struct rpc_task *task, const struct rpc_message *msg)
static void
rpc_default_callback(struct rpc_task *task, void *data)
static const struct rpc_call_ops rpc_default_ops = ;
struct rpc_task *rpc_run_task(const struct rpc_task_setup *task_setup_data)
EXPORT_SYMBOL_GPL(rpc_run_task);
int rpc_call_sync(struct rpc_clnt *clnt, const struct rpc_message *msg, int flags)
EXPORT_SYMBOL_GPL(rpc_call_sync);
int
rpc_call_async(struct rpc_clnt *clnt, const struct rpc_message *msg, int flags,
const struct rpc_call_ops *tk_ops, void *data)
EXPORT_SYMBOL_GPL(rpc_call_async);
#if defined(CONFIG_NFS_V4_1)
struct rpc_task *rpc_run_bc_task(struct rpc_rqst *req,
const struct rpc_call_ops *tk_ops)
void
rpc_call_start(struct rpc_task *task)
EXPORT_SYMBOL_GPL(rpc_call_start);
size_t rpc_peeraddr(struct rpc_clnt *clnt, struct sockaddr *buf, size_t bufsize)
EXPORT_SYMBOL_GPL(rpc_peeraddr);
const char *rpc_peeraddr2str(struct rpc_clnt *clnt,
enum rpc_display_format_t format)
EXPORT_SYMBOL_GPL(rpc_peeraddr2str);
void
rpc_setbufsize(struct rpc_clnt *clnt, unsigned int sndsize, unsigned int rcvsize)
EXPORT_SYMBOL_GPL(rpc_setbufsize);
size_t rpc_max_payload(struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_max_payload);
void rpc_force_rebind(struct rpc_clnt *clnt)
EXPORT_SYMBOL_GPL(rpc_force_rebind);
int
rpc_restart_call_prepare(struct rpc_task *task)
EXPORT_SYMBOL_GPL(rpc_restart_call_prepare);
int
rpc_restart_call(struct rpc_task *task)
EXPORT_SYMBOL_GPL(rpc_restart_call);
static const char *rpc_proc_name(const struct rpc_task *task)
static void
call_start(struct rpc_task *task)
static void
call_reserve(struct rpc_task *task)
static void
call_reserveresult(struct rpc_task *task)
static void
call_refresh(struct rpc_task *task)
static void
call_refreshresult(struct rpc_task *task)
static void
call_allocate(struct rpc_task *task)
static inline int
rpc_task_need_encode(struct rpc_task *task)
static inline void
rpc_task_force_reencode(struct rpc_task *task)
static inline void
rpc_xdr_buf_init(struct xdr_buf *buf, void *start, size_t len)
static void
rpc_xdr_encode(struct rpc_task *task)
static void
call_bind(struct rpc_task *task)
static void
call_bind_status(struct rpc_task *task)
static void
call_connect(struct rpc_task *task)
static void
call_connect_status(struct rpc_task *task)
static void
call_transmit(struct rpc_task *task)
static void
call_transmit_status(struct rpc_task *task)
#if defined(CONFIG_NFS_V4_1)
static void
call_bc_transmit(struct rpc_task *task)
static void
call_status(struct rpc_task *task)
static void
call_timeout(struct rpc_task *task)
static void
call_decode(struct rpc_task *task)
static __be32 *
rpc_encode_header(struct rpc_task *task)
static __be32 *
rpc_verify_header(struct rpc_task *task)
static void rpcproc_encode_null(void *rqstp, struct xdr_stream *xdr, void *obj)
static int rpcproc_decode_null(void *rqstp, struct xdr_stream *xdr, void *obj)
static struct rpc_procinfo rpcproc_null = ;
static int rpc_ping(struct rpc_clnt *clnt)
struct rpc_task *rpc_call_null(struct rpc_clnt *clnt, struct rpc_cred *cred, int flags)
EXPORT_SYMBOL_GPL(rpc_call_null);
static void rpc_show_header(void)
static void rpc_show_task(const struct rpc_clnt *clnt,
const struct rpc_task *task)
void rpc_show_tasks(void)
