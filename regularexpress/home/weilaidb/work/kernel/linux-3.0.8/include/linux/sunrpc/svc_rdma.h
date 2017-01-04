#define SVC_RDMA_H
#define SVCRDMA_DEBUG
extern unsigned int svcrdma_ord;
extern unsigned int svcrdma_max_requests;
extern unsigned int svcrdma_max_req_size;
extern atomic_t rdma_stat_recv;
extern atomic_t rdma_stat_read;
extern atomic_t rdma_stat_write;
extern atomic_t rdma_stat_sq_starve;
extern atomic_t rdma_stat_rq_starve;
extern atomic_t rdma_stat_rq_poll;
extern atomic_t rdma_stat_rq_prod;
extern atomic_t rdma_stat_sq_poll;
extern atomic_t rdma_stat_sq_prod;
#define RPCRDMA_VERSION 1
struct svc_rdma_op_ctxt ;
struct svc_rdma_chunk_sge ;
struct svc_rdma_fastreg_mr ;
struct svc_rdma_req_map ;
#define RDMACTXT_F_FAST_UNREG	1
#define RDMACTXT_F_LAST_CTXT	2
#define	SVCRDMA_DEVCAP_FAST_REG		1
#define	SVCRDMA_DEVCAP_READ_W_INV	2
struct svcxprt_rdma ;
#define RDMAXPRT_RQ_PENDING	1
#define RDMAXPRT_SQ_PENDING	2
#define RDMAXPRT_CONN_PENDING	3
#define RPCRDMA_LISTEN_BACKLOG  10
#define RPCRDMA_ORD             (64/4)
#define RPCRDMA_SQ_DEPTH_MULT   8
#define RPCRDMA_MAX_THREADS     16
#define RPCRDMA_MAX_REQUESTS    16
#define RPCRDMA_MAX_REQ_SIZE    4096
extern void svc_rdma_rcl_chunk_counts(struct rpcrdma_read_chunk *,
int *, int *);
extern int svc_rdma_xdr_decode_req(struct rpcrdma_msg **, struct svc_rqst *);
extern int svc_rdma_xdr_decode_deferred_req(struct svc_rqst *);
extern int svc_rdma_xdr_encode_error(struct svcxprt_rdma *,
struct rpcrdma_msg *,
enum rpcrdma_errcode, u32 *);
extern void svc_rdma_xdr_encode_write_list(struct rpcrdma_msg *, int);
extern void svc_rdma_xdr_encode_reply_array(struct rpcrdma_write_array *, int);
extern void svc_rdma_xdr_encode_array_chunk(struct rpcrdma_write_array *, int,
u32, u64, u32);
extern void svc_rdma_xdr_encode_reply_header(struct svcxprt_rdma *,
struct rpcrdma_msg *,
struct rpcrdma_msg *,
enum rpcrdma_proc);
extern int svc_rdma_xdr_get_reply_hdr_len(struct rpcrdma_msg *);
extern int svc_rdma_recvfrom(struct svc_rqst *);
extern int svc_rdma_sendto(struct svc_rqst *);
extern int svc_rdma_send(struct svcxprt_rdma *, struct ib_send_wr *);
extern void svc_rdma_send_error(struct svcxprt_rdma *, struct rpcrdma_msg *,
enum rpcrdma_errcode);
struct page *svc_rdma_get_page(void);
extern int svc_rdma_post_recv(struct svcxprt_rdma *);
extern int svc_rdma_create_listen(struct svc_serv *, int, struct sockaddr *);
extern struct svc_rdma_op_ctxt *svc_rdma_get_context(struct svcxprt_rdma *);
extern void svc_rdma_put_context(struct svc_rdma_op_ctxt *, int);
extern void svc_rdma_unmap_dma(struct svc_rdma_op_ctxt *ctxt);
extern struct svc_rdma_req_map *svc_rdma_get_req_map(void);
extern void svc_rdma_put_req_map(struct svc_rdma_req_map *);
extern int svc_rdma_fastreg(struct svcxprt_rdma *, struct svc_rdma_fastreg_mr *);
extern struct svc_rdma_fastreg_mr *svc_rdma_get_frmr(struct svcxprt_rdma *);
extern void svc_rdma_put_frmr(struct svcxprt_rdma *,
struct svc_rdma_fastreg_mr *);
extern void svc_sq_reap(struct svcxprt_rdma *);
extern void svc_rq_reap(struct svcxprt_rdma *);
extern struct svc_xprt_class svc_rdma_class;
extern void svc_rdma_prep_reply_hdr(struct svc_rqst *);
extern int svc_rdma_init(void);
extern void svc_rdma_cleanup(void);
static inline struct rpcrdma_read_chunk *
svc_rdma_get_read_chunk(struct rpcrdma_msg *rmsgp)
static inline struct rpcrdma_write_array *
svc_rdma_get_write_array(struct rpcrdma_msg *rmsgp)
static inline struct rpcrdma_write_array *
svc_rdma_get_reply_array(struct rpcrdma_msg *rmsgp)
