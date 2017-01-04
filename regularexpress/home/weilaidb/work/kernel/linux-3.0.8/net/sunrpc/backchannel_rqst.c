#define RPCDBG_FACILITY	RPCDBG_TRANS
#if defined(CONFIG_NFS_V4_1)
static inline int xprt_need_to_requeue(struct rpc_xprt *xprt)
static inline void xprt_inc_alloc_count(struct rpc_xprt *xprt, unsigned int n)
static inline int xprt_dec_alloc_count(struct rpc_xprt *xprt, unsigned int n)
static void xprt_free_allocation(struct rpc_rqst *req)
int xprt_setup_backchannel(struct rpc_xprt *xprt, unsigned int min_reqs)
EXPORT_SYMBOL(xprt_setup_backchannel);
void xprt_destroy_backchannel(struct rpc_xprt *xprt, unsigned int max_reqs)
EXPORT_SYMBOL(xprt_destroy_backchannel);
struct rpc_rqst *xprt_alloc_bc_request(struct rpc_xprt *xprt)
void xprt_free_bc_request(struct rpc_rqst *req)
