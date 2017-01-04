#define _LINUX_SUNRPC_XPRT_RDMA_H
#define RDMA_RESOLVE_TIMEOUT	(5000)
#define RDMA_CONNECT_RETRY_MAX	(2)
struct rpcrdma_ia ;
struct rpcrdma_ep ;
#define INIT_CQCOUNT(ep) atomic_set(&(ep)->rep_cqcount, (ep)->rep_cqinit)
#define DECR_CQCOUNT(ep) atomic_sub_return(1, &(ep)->rep_cqcount)
#define RPCRDMA_MAX_DATA_SEGS	(8)
#define RPCRDMA_MAX_SEGS 	(RPCRDMA_MAX_DATA_SEGS + 2)
#define MAX_RPCRDMAHDR	(\ \
sizeof(struct rpcrdma_msg) + (2 * sizeof(u32)) + \
(sizeof(struct rpcrdma_read_chunk) * RPCRDMA_MAX_SEGS) + sizeof(u32))
struct rpcrdma_buffer;
struct rpcrdma_rep ;
struct rpcrdma_mr_seg ;
struct rpcrdma_req ;
#define rpcr_to_rdmar(r) \
container_of((r)->rq_buffer, struct rpcrdma_req, rl_xdr_buf[0])
struct rpcrdma_buffer ;
#define rdmab_to_ia(b) (&container_of((b), struct rpcrdma_xprt, rx_buf)->rx_ia)
struct rpcrdma_create_data_internal ;
#define RPCRDMA_INLINE_READ_THRESHOLD(rq) \
(rpcx_to_rdmad(rq->rq_task->tk_xprt).inline_rsize)
#define RPCRDMA_INLINE_WRITE_THRESHOLD(rq)\
(rpcx_to_rdmad(rq->rq_task->tk_xprt).inline_wsize)
#define RPCRDMA_INLINE_PAD_VALUE(rq)\
rpcx_to_rdmad(rq->rq_task->tk_xprt).padding
struct rpcrdma_stats ;
struct rpcrdma_xprt ;
#define rpcx_to_rdmax(x) container_of(x, struct rpcrdma_xprt, xprt)
#define rpcx_to_rdmad(x) (rpcx_to_rdmax(x)->rx_data)
extern int xprt_rdma_pad_optimize;
int rpcrdma_ia_open(struct rpcrdma_xprt *, struct sockaddr *, int);
void rpcrdma_ia_close(struct rpcrdma_ia *);
int rpcrdma_ep_create(struct rpcrdma_ep *, struct rpcrdma_ia *,
struct rpcrdma_create_data_internal *);
int rpcrdma_ep_destroy(struct rpcrdma_ep *, struct rpcrdma_ia *);
int rpcrdma_ep_connect(struct rpcrdma_ep *, struct rpcrdma_ia *);
int rpcrdma_ep_disconnect(struct rpcrdma_ep *, struct rpcrdma_ia *);
int rpcrdma_ep_post(struct rpcrdma_ia *, struct rpcrdma_ep *,
struct rpcrdma_req *);
int rpcrdma_ep_post_recv(struct rpcrdma_ia *, struct rpcrdma_ep *,
struct rpcrdma_rep *);
int rpcrdma_buffer_create(struct rpcrdma_buffer *, struct rpcrdma_ep *,
struct rpcrdma_ia *,
struct rpcrdma_create_data_internal *);
void rpcrdma_buffer_destroy(struct rpcrdma_buffer *);
struct rpcrdma_req *rpcrdma_buffer_get(struct rpcrdma_buffer *);
void rpcrdma_buffer_put(struct rpcrdma_req *);
void rpcrdma_recv_buffer_get(struct rpcrdma_req *);
void rpcrdma_recv_buffer_put(struct rpcrdma_rep *);
int rpcrdma_register_internal(struct rpcrdma_ia *, void *, int,
struct ib_mr **, struct ib_sge *);
int rpcrdma_deregister_internal(struct rpcrdma_ia *,
struct ib_mr *, struct ib_sge *);
int rpcrdma_register_external(struct rpcrdma_mr_seg *,
int, int, struct rpcrdma_xprt *);
int rpcrdma_deregister_external(struct rpcrdma_mr_seg *,
struct rpcrdma_xprt *, void *);
void rpcrdma_conn_func(struct rpcrdma_ep *);
void rpcrdma_reply_handler(struct rpcrdma_rep *);
int rpcrdma_marshal_req(struct rpc_rqst *);
