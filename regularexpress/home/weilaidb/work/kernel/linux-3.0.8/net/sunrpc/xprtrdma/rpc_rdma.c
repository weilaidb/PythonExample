# define RPCDBG_FACILITY	RPCDBG_TRANS
enum rpcrdma_chunktype ;
static const char transfertypes[][12] = ;
static int
rpcrdma_convert_iovs(struct xdr_buf *xdrbuf, unsigned int pos,
enum rpcrdma_chunktype type, struct rpcrdma_mr_seg *seg, int nsegs)
static unsigned int
rpcrdma_create_chunks(struct rpc_rqst *rqst, struct xdr_buf *target,
struct rpcrdma_msg *headerp, enum rpcrdma_chunktype type)
static int
rpcrdma_inline_pullup(struct rpc_rqst *rqst, int pad)
int
rpcrdma_marshal_req(struct rpc_rqst *rqst)
static int
rpcrdma_count_chunks(struct rpcrdma_rep *rep, unsigned int max, int wrchunk, __be32 **iptrp)
static void
rpcrdma_inline_fixup(struct rpc_rqst *rqst, char *srcp, int copy_len, int pad)
void
rpcrdma_conn_func(struct rpcrdma_ep *ep)
static void
rpcrdma_unbind_func(struct rpcrdma_rep *rep)
void
rpcrdma_reply_handler(struct rpcrdma_rep *rep)
