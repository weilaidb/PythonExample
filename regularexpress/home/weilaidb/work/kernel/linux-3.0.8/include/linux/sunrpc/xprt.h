#define _LINUX_SUNRPC_XPRT_H
#define RPC_MIN_SLOT_TABLE	(2U)
#define RPC_DEF_SLOT_TABLE	(16U)
#define RPC_MAX_SLOT_TABLE	(128U)
struct rpc_timeout ;
enum rpc_display_format_t ;
struct rpc_task;
struct rpc_xprt;
struct seq_file;
struct rpc_rqst ;
#define rq_svec			rq_snd_buf.head
#define rq_slen			rq_snd_buf.len
struct rpc_xprt_ops ;
#define XPRT_TRANSPORT_BC       (1 << 31)
enum xprt_transports ;
struct rpc_xprt ;
#if defined(CONFIG_NFS_V4_1)
#define	RPC_BC_PA_IN_USE	0x0001
#if defined(CONFIG_NFS_V4_1)
static inline int bc_prealloc(struct rpc_rqst *req)
static inline int bc_prealloc(struct rpc_rqst *req)
struct xprt_create ;
struct xprt_class ;
struct rpc_xprt		*xprt_create_transport(struct xprt_create *args);
void			xprt_connect(struct rpc_task *task);
void			xprt_reserve(struct rpc_task *task);
int			xprt_reserve_xprt(struct rpc_task *task);
int			xprt_reserve_xprt_cong(struct rpc_task *task);
int			xprt_prepare_transmit(struct rpc_task *task);
void			xprt_transmit(struct rpc_task *task);
void			xprt_end_transmit(struct rpc_task *task);
int			xprt_adjust_timeout(struct rpc_rqst *req);
void			xprt_release_xprt(struct rpc_xprt *xprt, struct rpc_task *task);
void			xprt_release_xprt_cong(struct rpc_xprt *xprt, struct rpc_task *task);
void			xprt_release(struct rpc_task *task);
struct rpc_xprt *	xprt_get(struct rpc_xprt *xprt);
void			xprt_put(struct rpc_xprt *xprt);
struct rpc_xprt *	xprt_alloc(struct net *net, int size, int max_req);
void			xprt_free(struct rpc_xprt *);
static inline __be32 *xprt_skip_transport_header(struct rpc_xprt *xprt, __be32 *p)
int			xprt_register_transport(struct xprt_class *type);
int			xprt_unregister_transport(struct xprt_class *type);
int			xprt_load_transport(const char *);
void			xprt_set_retrans_timeout_def(struct rpc_task *task);
void			xprt_set_retrans_timeout_rtt(struct rpc_task *task);
void			xprt_wake_pending_tasks(struct rpc_xprt *xprt, int status);
void			xprt_wait_for_buffer_space(struct rpc_task *task, rpc_action action);
void			xprt_write_space(struct rpc_xprt *xprt);
void			xprt_adjust_cwnd(struct rpc_task *task, int result);
struct rpc_rqst *	xprt_lookup_rqst(struct rpc_xprt *xprt, __be32 xid);
void			xprt_complete_rqst(struct rpc_task *task, int copied);
void			xprt_release_rqst_cong(struct rpc_task *task);
void			xprt_disconnect_done(struct rpc_xprt *xprt);
void			xprt_force_disconnect(struct rpc_xprt *xprt);
void			xprt_conditional_disconnect(struct rpc_xprt *xprt, unsigned int cookie);
#define XPRT_LOCKED		(0)
#define XPRT_CONNECTED		(1)
#define XPRT_CONNECTING		(2)
#define XPRT_CLOSE_WAIT		(3)
#define XPRT_BOUND		(4)
#define XPRT_BINDING		(5)
#define XPRT_CLOSING		(6)
#define XPRT_CONNECTION_ABORT	(7)
#define XPRT_CONNECTION_CLOSE	(8)
#define XPRT_INITIALIZED	(9)
static inline void xprt_set_connected(struct rpc_xprt *xprt)
static inline void xprt_clear_connected(struct rpc_xprt *xprt)
static inline int xprt_connected(struct rpc_xprt *xprt)
static inline int xprt_test_and_set_connected(struct rpc_xprt *xprt)
static inline int xprt_test_and_clear_connected(struct rpc_xprt *xprt)
static inline void xprt_clear_connecting(struct rpc_xprt *xprt)
static inline int xprt_connecting(struct rpc_xprt *xprt)
static inline int xprt_test_and_set_connecting(struct rpc_xprt *xprt)
static inline void xprt_set_bound(struct rpc_xprt *xprt)
static inline int xprt_bound(struct rpc_xprt *xprt)
static inline void xprt_clear_bound(struct rpc_xprt *xprt)
static inline void xprt_clear_binding(struct rpc_xprt *xprt)
static inline int xprt_test_and_set_binding(struct rpc_xprt *xprt)
