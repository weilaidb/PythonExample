#define RPCDBG_FACILITY	RPCDBG_SVCXPRT
static void rdma_build_arg_xdr(struct svc_rqst *rqstp,
struct svc_rdma_op_ctxt *ctxt,
u32 byte_count)
static int map_read_chunks(struct svcxprt_rdma *xprt,
struct svc_rqst *rqstp,
struct svc_rdma_op_ctxt *head,
struct rpcrdma_msg *rmsgp,
struct svc_rdma_req_map *rpl_map,
struct svc_rdma_req_map *chl_map,
int ch_count,
int byte_count)
static int fast_reg_read_chunks(struct svcxprt_rdma *xprt,
struct svc_rqst *rqstp,
struct svc_rdma_op_ctxt *head,
struct rpcrdma_msg *rmsgp,
struct svc_rdma_req_map *rpl_map,
struct svc_rdma_req_map *chl_map,
int ch_count,
int byte_count)
static int rdma_set_ctxt_sge(struct svcxprt_rdma *xprt,
struct svc_rdma_op_ctxt *ctxt,
struct svc_rdma_fastreg_mr *frmr,
struct kvec *vec,
u64 *sgl_offset,
int count)
static int rdma_read_max_sge(struct svcxprt_rdma *xprt, int sge_count)
static int rdma_read_xdr(struct svcxprt_rdma *xprt,
struct rpcrdma_msg *rmsgp,
struct svc_rqst *rqstp,
struct svc_rdma_op_ctxt *hdr_ctxt)
static int rdma_read_complete(struct svc_rqst *rqstp,
struct svc_rdma_op_ctxt *head)
int svc_rdma_recvfrom(struct svc_rqst *rqstp)
