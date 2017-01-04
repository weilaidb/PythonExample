#define RPCDBG_FACILITY	RPCDBG_SVCXPRT
static int fast_reg_xdr(struct svcxprt_rdma *xprt,
struct xdr_buf *xdr,
struct svc_rdma_req_map *vec)
static int map_xdr(struct svcxprt_rdma *xprt,
struct xdr_buf *xdr,
struct svc_rdma_req_map *vec)
static dma_addr_t dma_map_xdr(struct svcxprt_rdma *xprt,
struct xdr_buf *xdr,
u32 xdr_off, size_t len, int dir)
static int send_write(struct svcxprt_rdma *xprt, struct svc_rqst *rqstp,
u32 rmr, u64 to,
u32 xdr_off, int write_len,
struct svc_rdma_req_map *vec)
static int send_write_chunks(struct svcxprt_rdma *xprt,
struct rpcrdma_msg *rdma_argp,
struct rpcrdma_msg *rdma_resp,
struct svc_rqst *rqstp,
struct svc_rdma_req_map *vec)
static int send_reply_chunks(struct svcxprt_rdma *xprt,
struct rpcrdma_msg *rdma_argp,
struct rpcrdma_msg *rdma_resp,
struct svc_rqst *rqstp,
struct svc_rdma_req_map *vec)
static int send_reply(struct svcxprt_rdma *rdma,
struct svc_rqst *rqstp,
struct page *page,
struct rpcrdma_msg *rdma_resp,
struct svc_rdma_op_ctxt *ctxt,
struct svc_rdma_req_map *vec,
int byte_count)
void svc_rdma_prep_reply_hdr(struct svc_rqst *rqstp)
static void *xdr_start(struct xdr_buf *xdr)
int svc_rdma_sendto(struct svc_rqst *rqstp)
