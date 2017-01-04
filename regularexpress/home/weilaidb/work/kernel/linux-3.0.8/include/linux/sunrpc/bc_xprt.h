#define _LINUX_SUNRPC_BC_XPRT_H
struct rpc_rqst *xprt_alloc_bc_request(struct rpc_xprt *xprt);
void xprt_free_bc_request(struct rpc_rqst *req);
int xprt_setup_backchannel(struct rpc_xprt *, unsigned int min_reqs);
void xprt_destroy_backchannel(struct rpc_xprt *, int max_reqs);
int bc_send(struct rpc_rqst *req);
static inline int svc_is_backchannel(const struct svc_rqst *rqstp)
static inline int xprt_setup_backchannel(struct rpc_xprt *xprt,
unsigned int min_reqs)
static inline int svc_is_backchannel(const struct svc_rqst *rqstp)
static inline void xprt_free_bc_request(struct rpc_rqst *req)
