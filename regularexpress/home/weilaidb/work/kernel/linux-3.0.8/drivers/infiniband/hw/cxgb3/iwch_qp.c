#define NO_SUPPORT -1
static int build_rdma_send(union t3_wr *wqe, struct ib_send_wr *wr,
u8 * flit_cnt)
static int build_rdma_write(union t3_wr *wqe, struct ib_send_wr *wr,
u8 *flit_cnt)
static int build_rdma_read(union t3_wr *wqe, struct ib_send_wr *wr,
u8 *flit_cnt)
static int build_fastreg(union t3_wr *wqe, struct ib_send_wr *wr,
u8 *flit_cnt, int *wr_cnt, struct t3_wq *wq)
static int build_inv_stag(union t3_wr *wqe, struct ib_send_wr *wr,
u8 *flit_cnt)
static int iwch_sgl2pbl_map(struct iwch_dev *rhp, struct ib_sge *sg_list,
u32 num_sgle, u32 * pbl_addr, u8 * page_size)
static int build_rdma_recv(struct iwch_qp *qhp, union t3_wr *wqe,
struct ib_recv_wr *wr)
static int build_zero_stag_recv(struct iwch_qp *qhp, union t3_wr *wqe,
struct ib_recv_wr *wr)
int iwch_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr)
int iwch_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
int iwch_bind_mw(struct ib_qp *qp,
struct ib_mw *mw,
struct ib_mw_bind *mw_bind)
static inline void build_term_codes(struct respQ_msg_t *rsp_msg,
u8 *layer_type, u8 *ecode)
int iwch_post_zb_read(struct iwch_ep *ep)
int iwch_post_terminate(struct iwch_qp *qhp, struct respQ_msg_t *rsp_msg)
static void __flush_qp(struct iwch_qp *qhp, struct iwch_cq *rchp,
struct iwch_cq *schp, unsigned long *flag)
static void flush_qp(struct iwch_qp *qhp, unsigned long *flag)
u16 iwch_rqes_posted(struct iwch_qp *qhp)
static int rdma_init(struct iwch_dev *rhp, struct iwch_qp *qhp,
enum iwch_qp_attr_mask mask,
struct iwch_qp_attributes *attrs)
int iwch_modify_qp(struct iwch_dev *rhp, struct iwch_qp *qhp,
enum iwch_qp_attr_mask mask,
struct iwch_qp_attributes *attrs,
int internal)
