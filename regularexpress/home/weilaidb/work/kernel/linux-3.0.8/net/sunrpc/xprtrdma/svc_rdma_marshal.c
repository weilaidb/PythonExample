#define RPCDBG_FACILITY	RPCDBG_SVCXPRT
static u32 *decode_read_list(u32 *va, u32 *vaend)
void svc_rdma_rcl_chunk_counts(struct rpcrdma_read_chunk *ch,
int *ch_count, int *byte_count)
static u32 *decode_write_list(u32 *va, u32 *vaend)
static u32 *decode_reply_array(u32 *va, u32 *vaend)
int svc_rdma_xdr_decode_req(struct rpcrdma_msg **rdma_req,
struct svc_rqst *rqstp)
int svc_rdma_xdr_decode_deferred_req(struct svc_rqst *rqstp)
int svc_rdma_xdr_encode_error(struct svcxprt_rdma *xprt,
struct rpcrdma_msg *rmsgp,
enum rpcrdma_errcode err, u32 *va)
int svc_rdma_xdr_get_reply_hdr_len(struct rpcrdma_msg *rmsgp)
void svc_rdma_xdr_encode_write_list(struct rpcrdma_msg *rmsgp, int chunks)
void svc_rdma_xdr_encode_reply_array(struct rpcrdma_write_array *ary,
int chunks)
void svc_rdma_xdr_encode_array_chunk(struct rpcrdma_write_array *ary,
int chunk_no,
u32 rs_handle, u64 rs_offset,
u32 write_len)
void svc_rdma_xdr_encode_reply_header(struct svcxprt_rdma *xprt,
struct rpcrdma_msg *rdma_argp,
struct rpcrdma_msg *rdma_resp,
enum rpcrdma_proc rdma_type)
