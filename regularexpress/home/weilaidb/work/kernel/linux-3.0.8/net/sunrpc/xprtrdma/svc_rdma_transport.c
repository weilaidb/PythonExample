#define RPCDBG_FACILITY	RPCDBG_SVCXPRT
static struct svc_xprt *svc_rdma_create(struct svc_serv *serv,
struct net *net,
struct sockaddr *sa, int salen,
int flags);
static struct svc_xprt *svc_rdma_accept(struct svc_xprt *xprt);
static void svc_rdma_release_rqst(struct svc_rqst *);
static void dto_tasklet_func(unsigned long data);
static void svc_rdma_detach(struct svc_xprt *xprt);
static void svc_rdma_free(struct svc_xprt *xprt);
static int svc_rdma_has_wspace(struct svc_xprt *xprt);
static void rq_cq_reap(struct svcxprt_rdma *xprt);
static void sq_cq_reap(struct svcxprt_rdma *xprt);
static DECLARE_TASKLET(dto_tasklet, dto_tasklet_func, 0UL);
static DEFINE_SPINLOCK(dto_lock);
static LIST_HEAD(dto_xprt_q);
static struct svc_xprt_ops svc_rdma_ops = ;
struct svc_xprt_class svc_rdma_class = ;
extern struct kmem_cache *svc_rdma_ctxt_cachep;
extern struct workqueue_struct *svc_rdma_wq;
struct svc_rdma_op_ctxt *svc_rdma_get_context(struct svcxprt_rdma *xprt)
void svc_rdma_unmap_dma(struct svc_rdma_op_ctxt *ctxt)
void svc_rdma_put_context(struct svc_rdma_op_ctxt *ctxt, int free_pages)
extern struct kmem_cache *svc_rdma_map_cachep;
struct svc_rdma_req_map *svc_rdma_get_req_map(void)
void svc_rdma_put_req_map(struct svc_rdma_req_map *map)
static void cq_event_handler(struct ib_event *event, void *context)
static void qp_event_handler(struct ib_event *event, void *context)
static void dto_tasklet_func(unsigned long data)
static void rq_comp_handler(struct ib_cq *cq, void *cq_context)
static void rq_cq_reap(struct svcxprt_rdma *xprt)
static void process_context(struct svcxprt_rdma *xprt,
struct svc_rdma_op_ctxt *ctxt)
static void sq_cq_reap(struct svcxprt_rdma *xprt)
static void sq_comp_handler(struct ib_cq *cq, void *cq_context)
static struct svcxprt_rdma *rdma_create_xprt(struct svc_serv *serv,
int listener)
struct page *svc_rdma_get_page(void)
int svc_rdma_post_recv(struct svcxprt_rdma *xprt)
static void handle_connect_req(struct rdma_cm_id *new_cma_id, size_t client_ird)
static int rdma_listen_handler(struct rdma_cm_id *cma_id,
struct rdma_cm_event *event)
static int rdma_cma_handler(struct rdma_cm_id *cma_id,
struct rdma_cm_event *event)
static struct svc_xprt *svc_rdma_create(struct svc_serv *serv,
struct net *net,
struct sockaddr *sa, int salen,
int flags)
static struct svc_rdma_fastreg_mr *rdma_alloc_frmr(struct svcxprt_rdma *xprt)
static void rdma_dealloc_frmr_q(struct svcxprt_rdma *xprt)
struct svc_rdma_fastreg_mr *svc_rdma_get_frmr(struct svcxprt_rdma *rdma)
static void frmr_unmap_dma(struct svcxprt_rdma *xprt,
struct svc_rdma_fastreg_mr *frmr)
void svc_rdma_put_frmr(struct svcxprt_rdma *rdma,
struct svc_rdma_fastreg_mr *frmr)
static struct svc_xprt *svc_rdma_accept(struct svc_xprt *xprt)
static void svc_rdma_release_rqst(struct svc_rqst *rqstp)
static void svc_rdma_detach(struct svc_xprt *xprt)
static void __svc_rdma_free(struct work_struct *work)
static void svc_rdma_free(struct svc_xprt *xprt)
static int svc_rdma_has_wspace(struct svc_xprt *xprt)
int svc_rdma_fastreg(struct svcxprt_rdma *xprt,
struct svc_rdma_fastreg_mr *frmr)
int svc_rdma_send(struct svcxprt_rdma *xprt, struct ib_send_wr *wr)
void svc_rdma_send_error(struct svcxprt_rdma *xprt, struct rpcrdma_msg *rmsgp,
enum rpcrdma_errcode err)
