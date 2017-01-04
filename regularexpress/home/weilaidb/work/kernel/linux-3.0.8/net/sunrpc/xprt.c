# define RPCDBG_FACILITY	RPCDBG_XPRT
static void	xprt_request_init(struct rpc_task *, struct rpc_xprt *);
static void	xprt_connect_status(struct rpc_task *task);
static int      __xprt_get_cong(struct rpc_xprt *, struct rpc_task *);
static DEFINE_SPINLOCK(xprt_list_lock);
static LIST_HEAD(xprt_list);
#define RPC_CWNDSHIFT		(8U)
#define RPC_CWNDSCALE		(1U << RPC_CWNDSHIFT)
#define RPC_INITCWND		RPC_CWNDSCALE
#define RPC_MAXCWND(xprt)	((xprt)->max_reqs << RPC_CWNDSHIFT)
#define RPCXPRT_CONGESTED(xprt) ((xprt)->cong >= (xprt)->cwnd)
int xprt_register_transport(struct xprt_class *transport)
EXPORT_SYMBOL_GPL(xprt_register_transport);
int xprt_unregister_transport(struct xprt_class *transport)
EXPORT_SYMBOL_GPL(xprt_unregister_transport);
int xprt_load_transport(const char *transport_name)
EXPORT_SYMBOL_GPL(xprt_load_transport);
int xprt_reserve_xprt(struct rpc_task *task)
EXPORT_SYMBOL_GPL(xprt_reserve_xprt);
static void xprt_clear_locked(struct rpc_xprt *xprt)
int xprt_reserve_xprt_cong(struct rpc_task *task)
EXPORT_SYMBOL_GPL(xprt_reserve_xprt_cong);
static inline int xprt_lock_write(struct rpc_xprt *xprt, struct rpc_task *task)
static void __xprt_lock_write_next(struct rpc_xprt *xprt)
static void __xprt_lock_write_next_cong(struct rpc_xprt *xprt)
void xprt_release_xprt(struct rpc_xprt *xprt, struct rpc_task *task)
EXPORT_SYMBOL_GPL(xprt_release_xprt);
void xprt_release_xprt_cong(struct rpc_xprt *xprt, struct rpc_task *task)
EXPORT_SYMBOL_GPL(xprt_release_xprt_cong);
static inline void xprt_release_write(struct rpc_xprt *xprt, struct rpc_task *task)
static int
__xprt_get_cong(struct rpc_xprt *xprt, struct rpc_task *task)
static void
__xprt_put_cong(struct rpc_xprt *xprt, struct rpc_rqst *req)
void xprt_release_rqst_cong(struct rpc_task *task)
EXPORT_SYMBOL_GPL(xprt_release_rqst_cong);
void xprt_adjust_cwnd(struct rpc_task *task, int result)
EXPORT_SYMBOL_GPL(xprt_adjust_cwnd);
void xprt_wake_pending_tasks(struct rpc_xprt *xprt, int status)
EXPORT_SYMBOL_GPL(xprt_wake_pending_tasks);
void xprt_wait_for_buffer_space(struct rpc_task *task, rpc_action action)
EXPORT_SYMBOL_GPL(xprt_wait_for_buffer_space);
void xprt_write_space(struct rpc_xprt *xprt)
EXPORT_SYMBOL_GPL(xprt_write_space);
void xprt_set_retrans_timeout_def(struct rpc_task *task)
EXPORT_SYMBOL_GPL(xprt_set_retrans_timeout_def);
void xprt_set_retrans_timeout_rtt(struct rpc_task *task)
EXPORT_SYMBOL_GPL(xprt_set_retrans_timeout_rtt);
static void xprt_reset_majortimeo(struct rpc_rqst *req)
int xprt_adjust_timeout(struct rpc_rqst *req)
static void xprt_autoclose(struct work_struct *work)
void xprt_disconnect_done(struct rpc_xprt *xprt)
EXPORT_SYMBOL_GPL(xprt_disconnect_done);
void xprt_force_disconnect(struct rpc_xprt *xprt)
void xprt_conditional_disconnect(struct rpc_xprt *xprt, unsigned int cookie)
static void
xprt_init_autodisconnect(unsigned long data)
void xprt_connect(struct rpc_task *task)
static void xprt_connect_status(struct rpc_task *task)
struct rpc_rqst *xprt_lookup_rqst(struct rpc_xprt *xprt, __be32 xid)
EXPORT_SYMBOL_GPL(xprt_lookup_rqst);
static void xprt_update_rtt(struct rpc_task *task)
void xprt_complete_rqst(struct rpc_task *task, int copied)
EXPORT_SYMBOL_GPL(xprt_complete_rqst);
static void xprt_timer(struct rpc_task *task)
static inline int xprt_has_timer(struct rpc_xprt *xprt)
int xprt_prepare_transmit(struct rpc_task *task)
void xprt_end_transmit(struct rpc_task *task)
void xprt_transmit(struct rpc_task *task)
static void xprt_alloc_slot(struct rpc_task *task)
static void xprt_free_slot(struct rpc_xprt *xprt, struct rpc_rqst *req)
struct rpc_xprt *xprt_alloc(struct net *net, int size, int max_req)
EXPORT_SYMBOL_GPL(xprt_alloc);
void xprt_free(struct rpc_xprt *xprt)
EXPORT_SYMBOL_GPL(xprt_free);
void xprt_reserve(struct rpc_task *task)
static inline __be32 xprt_alloc_xid(struct rpc_xprt *xprt)
static inline void xprt_init_xid(struct rpc_xprt *xprt)
static void xprt_request_init(struct rpc_task *task, struct rpc_xprt *xprt)
void xprt_release(struct rpc_task *task)
struct rpc_xprt *xprt_create_transport(struct xprt_create *args)
static void xprt_destroy(struct rpc_xprt *xprt)
void xprt_put(struct rpc_xprt *xprt)
struct rpc_xprt *xprt_get(struct rpc_xprt *xprt)
