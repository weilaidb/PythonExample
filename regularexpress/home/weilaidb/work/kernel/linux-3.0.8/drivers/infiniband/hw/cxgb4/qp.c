static int ocqp_support = 1;
module_param(ocqp_support, int, 0644);
MODULE_PARM_DESC(ocqp_support, "Support on-chip SQs (default=1)");
static void set_state(struct c4iw_qp *qhp, enum c4iw_qp_state state)
static void dealloc_oc_sq(struct c4iw_rdev *rdev, struct t4_sq *sq)
static void dealloc_host_sq(struct c4iw_rdev *rdev, struct t4_sq *sq)
static void dealloc_sq(struct c4iw_rdev *rdev, struct t4_sq *sq)
static int alloc_oc_sq(struct c4iw_rdev *rdev, struct t4_sq *sq)
static int alloc_host_sq(struct c4iw_rdev *rdev, struct t4_sq *sq)
static int destroy_qp(struct c4iw_rdev *rdev, struct t4_wq *wq,
struct c4iw_dev_ucontext *uctx)
static int create_qp(struct c4iw_rdev *rdev, struct t4_wq *wq,
struct t4_cq *rcq, struct t4_cq *scq,
struct c4iw_dev_ucontext *uctx)
static int build_immd(struct t4_sq *sq, struct fw_ri_immd *immdp,
struct ib_send_wr *wr, int max, u32 *plenp)
static int build_isgl(__be64 *queue_start, __be64 *queue_end,
struct fw_ri_isgl *isglp, struct ib_sge *sg_list,
int num_sge, u32 *plenp)
static int build_rdma_send(struct t4_sq *sq, union t4_wr *wqe,
struct ib_send_wr *wr, u8 *len16)
static int build_rdma_write(struct t4_sq *sq, union t4_wr *wqe,
struct ib_send_wr *wr, u8 *len16)
static int build_rdma_read(union t4_wr *wqe, struct ib_send_wr *wr, u8 *len16)
static int build_rdma_recv(struct c4iw_qp *qhp, union t4_recv_wr *wqe,
struct ib_recv_wr *wr, u8 *len16)
static int build_fastreg(struct t4_sq *sq, union t4_wr *wqe,
struct ib_send_wr *wr, u8 *len16)
static int build_inv_stag(union t4_wr *wqe, struct ib_send_wr *wr,
u8 *len16)
void c4iw_qp_add_ref(struct ib_qp *qp)
void c4iw_qp_rem_ref(struct ib_qp *qp)
int c4iw_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr)
int c4iw_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
int c4iw_bind_mw(struct ib_qp *qp, struct ib_mw *mw, struct ib_mw_bind *mw_bind)
static inline void build_term_codes(struct t4_cqe *err_cqe, u8 *layer_type,
u8 *ecode)
static void post_terminate(struct c4iw_qp *qhp, struct t4_cqe *err_cqe,
gfp_t gfp)
static void __flush_qp(struct c4iw_qp *qhp, struct c4iw_cq *rchp,
struct c4iw_cq *schp)
static void flush_qp(struct c4iw_qp *qhp)
static int rdma_fini(struct c4iw_dev *rhp, struct c4iw_qp *qhp,
struct c4iw_ep *ep)
static void build_rtr_msg(u8 p2p_type, struct fw_ri_init *init)
static int rdma_init(struct c4iw_dev *rhp, struct c4iw_qp *qhp)
int c4iw_modify_qp(struct c4iw_dev *rhp, struct c4iw_qp *qhp,
enum c4iw_qp_attr_mask mask,
struct c4iw_qp_attributes *attrs,
int internal)
int c4iw_destroy_qp(struct ib_qp *ib_qp)
struct ib_qp *c4iw_create_qp(struct ib_pd *pd, struct ib_qp_init_attr *attrs,
struct ib_udata *udata)
int c4iw_ib_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata)
struct ib_qp *c4iw_get_qp(struct ib_device *dev, int qpn)
