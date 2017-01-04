# define RPCDBG_FACILITY	RPCDBG_TRANS
static DEFINE_SPINLOCK(rpcrdma_tk_lock_g);
static LIST_HEAD(rpcrdma_tasklets_g);
static void
rpcrdma_run_tasklet(unsigned long data)
static DECLARE_TASKLET(rpcrdma_tasklet_g, rpcrdma_run_tasklet, 0UL);
static inline void
rpcrdma_schedule_tasklet(struct rpcrdma_rep *rep)
static void
rpcrdma_qp_async_error_upcall(struct ib_event *event, void *context)
static void
rpcrdma_cq_async_error_upcall(struct ib_event *event, void *context)
static inline
void rpcrdma_event_process(struct ib_wc *wc)
static inline int
rpcrdma_cq_poll(struct ib_cq *cq)
static void
rpcrdma_cq_event_upcall(struct ib_cq *cq, void *context)
static const char * const conn[] = ;
static int
rpcrdma_conn_upcall(struct rdma_cm_id *id, struct rdma_cm_event *event)
static struct rdma_cm_id *
rpcrdma_create_id(struct rpcrdma_xprt *xprt,
struct rpcrdma_ia *ia, struct sockaddr *addr)
static void
rpcrdma_clean_cq(struct ib_cq *cq)
int
rpcrdma_ia_open(struct rpcrdma_xprt *xprt, struct sockaddr *addr, int memreg)
void
rpcrdma_ia_close(struct rpcrdma_ia *ia)
int
rpcrdma_ep_create(struct rpcrdma_ep *ep, struct rpcrdma_ia *ia,
struct rpcrdma_create_data_internal *cdata)
int
rpcrdma_ep_destroy(struct rpcrdma_ep *ep, struct rpcrdma_ia *ia)
int
rpcrdma_ep_connect(struct rpcrdma_ep *ep, struct rpcrdma_ia *ia)
int
rpcrdma_ep_disconnect(struct rpcrdma_ep *ep, struct rpcrdma_ia *ia)
int
rpcrdma_buffer_create(struct rpcrdma_buffer *buf, struct rpcrdma_ep *ep,
struct rpcrdma_ia *ia, struct rpcrdma_create_data_internal *cdata)
void
rpcrdma_buffer_destroy(struct rpcrdma_buffer *buf)
struct rpcrdma_req *
rpcrdma_buffer_get(struct rpcrdma_buffer *buffers)
void
rpcrdma_buffer_put(struct rpcrdma_req *req)
void
rpcrdma_recv_buffer_get(struct rpcrdma_req *req)
void
rpcrdma_recv_buffer_put(struct rpcrdma_rep *rep)
int
rpcrdma_register_internal(struct rpcrdma_ia *ia, void *va, int len,
struct ib_mr **mrp, struct ib_sge *iov)
int
rpcrdma_deregister_internal(struct rpcrdma_ia *ia,
struct ib_mr *mr, struct ib_sge *iov)
static void
rpcrdma_map_one(struct rpcrdma_ia *ia, struct rpcrdma_mr_seg *seg, int writing)
static void
rpcrdma_unmap_one(struct rpcrdma_ia *ia, struct rpcrdma_mr_seg *seg)
static int
rpcrdma_register_frmr_external(struct rpcrdma_mr_seg *seg,
int *nsegs, int writing, struct rpcrdma_ia *ia,
struct rpcrdma_xprt *r_xprt)
static int
rpcrdma_deregister_frmr_external(struct rpcrdma_mr_seg *seg,
struct rpcrdma_ia *ia, struct rpcrdma_xprt *r_xprt)
static int
rpcrdma_register_fmr_external(struct rpcrdma_mr_seg *seg,
int *nsegs, int writing, struct rpcrdma_ia *ia)
static int
rpcrdma_deregister_fmr_external(struct rpcrdma_mr_seg *seg,
struct rpcrdma_ia *ia)
static int
rpcrdma_register_memwin_external(struct rpcrdma_mr_seg *seg,
int *nsegs, int writing, struct rpcrdma_ia *ia,
struct rpcrdma_xprt *r_xprt)
static int
rpcrdma_deregister_memwin_external(struct rpcrdma_mr_seg *seg,
struct rpcrdma_ia *ia,
struct rpcrdma_xprt *r_xprt, void **r)
static int
rpcrdma_register_default_external(struct rpcrdma_mr_seg *seg,
int *nsegs, int writing, struct rpcrdma_ia *ia)
static int
rpcrdma_deregister_default_external(struct rpcrdma_mr_seg *seg,
struct rpcrdma_ia *ia)
int
rpcrdma_register_external(struct rpcrdma_mr_seg *seg,
int nsegs, int writing, struct rpcrdma_xprt *r_xprt)
int
rpcrdma_deregister_external(struct rpcrdma_mr_seg *seg,
struct rpcrdma_xprt *r_xprt, void *r)
int
rpcrdma_ep_post(struct rpcrdma_ia *ia,
struct rpcrdma_ep *ep,
struct rpcrdma_req *req)
int
rpcrdma_ep_post_recv(struct rpcrdma_ia *ia,
struct rpcrdma_ep *ep,
struct rpcrdma_rep *rep)
