#define __IW_CXGB4_H__
#define DRV_NAME "iw_cxgb4"
#define MOD DRV_NAME ":"
extern int c4iw_debug;
#define PDBG(fmt, args...) \
do  while (0)
#define PBL_OFF(rdev_p, a) ((a) - (rdev_p)->lldi.vr->pbl.start)
#define RQT_OFF(rdev_p, a) ((a) - (rdev_p)->lldi.vr->rq.start)
static inline void *cplhdr(struct sk_buff *skb)
struct c4iw_resource ;
struct c4iw_qid_list ;
struct c4iw_dev_ucontext ;
enum c4iw_rdev_flags ;
struct c4iw_rdev ;
static inline int c4iw_fatal_error(struct c4iw_rdev *rdev)
static inline int c4iw_num_stags(struct c4iw_rdev *rdev)
#define C4IW_WR_TO (10*HZ)
struct c4iw_wr_wait ;
static inline void c4iw_init_wr_wait(struct c4iw_wr_wait *wr_waitp)
static inline void c4iw_wake_up(struct c4iw_wr_wait *wr_waitp, int ret)
static inline int c4iw_wait_for_reply(struct c4iw_rdev *rdev,
struct c4iw_wr_wait *wr_waitp,
u32 hwtid, u32 qpid,
const char *func)
struct c4iw_dev ;
static inline struct c4iw_dev *to_c4iw_dev(struct ib_device *ibdev)
static inline struct c4iw_dev *rdev_to_c4iw_dev(struct c4iw_rdev *rdev)
static inline struct c4iw_cq *get_chp(struct c4iw_dev *rhp, u32 cqid)
static inline struct c4iw_qp *get_qhp(struct c4iw_dev *rhp, u32 qpid)
static inline struct c4iw_mr *get_mhp(struct c4iw_dev *rhp, u32 mmid)
static inline int insert_handle(struct c4iw_dev *rhp, struct idr *idr,
void *handle, u32 id)
static inline void remove_handle(struct c4iw_dev *rhp, struct idr *idr, u32 id)
struct c4iw_pd ;
static inline struct c4iw_pd *to_c4iw_pd(struct ib_pd *ibpd)
struct tpt_attributes ;
struct c4iw_mr ;
static inline struct c4iw_mr *to_c4iw_mr(struct ib_mr *ibmr)
struct c4iw_mw ;
static inline struct c4iw_mw *to_c4iw_mw(struct ib_mw *ibmw)
struct c4iw_fr_page_list ;
static inline struct c4iw_fr_page_list *to_c4iw_fr_page_list(
struct ib_fast_reg_page_list *ibpl)
struct c4iw_cq ;
static inline struct c4iw_cq *to_c4iw_cq(struct ib_cq *ibcq)
struct c4iw_mpa_attributes ;
struct c4iw_qp_attributes ;
struct c4iw_qp ;
static inline struct c4iw_qp *to_c4iw_qp(struct ib_qp *ibqp)
struct c4iw_ucontext ;
static inline struct c4iw_ucontext *to_c4iw_ucontext(struct ib_ucontext *c)
struct c4iw_mm_entry ;
static inline struct c4iw_mm_entry *remove_mmap(struct c4iw_ucontext *ucontext,
u32 key, unsigned len)
static inline void insert_mmap(struct c4iw_ucontext *ucontext,
struct c4iw_mm_entry *mm)
enum c4iw_qp_attr_mask ;
int c4iw_modify_qp(struct c4iw_dev *rhp,
struct c4iw_qp *qhp,
enum c4iw_qp_attr_mask mask,
struct c4iw_qp_attributes *attrs,
int internal);
enum c4iw_qp_state ;
static inline int c4iw_convert_state(enum ib_qp_state ib_state)
static inline u32 c4iw_ib_to_tpt_access(int a)
static inline u32 c4iw_ib_to_tpt_bind_access(int acc)
enum c4iw_mmid_state ;
#define C4IW_NODE_DESC "cxgb4 Chelsio Communications"
#define MPA_KEY_REQ "MPA ID Req Frame"
#define MPA_KEY_REP "MPA ID Rep Frame"
#define MPA_MAX_PRIVATE_DATA	256
#define MPA_REJECT		0x20
#define MPA_CRC			0x40
#define MPA_MARKERS		0x80
#define MPA_FLAGS_MASK		0xE0
#define c4iw_put_ep(ep)
#define c4iw_get_ep(ep)
void _c4iw_free_ep(struct kref *kref);
struct mpa_message ;
struct terminate_message ;
#define TERM_MAX_LENGTH (sizeof(struct terminate_message) + 2 + 18 + 28)
enum c4iw_layers_types ;
enum c4iw_rdma_ecodes ;
enum c4iw_ddp_ecodes ;
enum c4iw_mpa_ecodes ;
enum c4iw_ep_state ;
enum c4iw_ep_flags ;
struct c4iw_ep_common ;
struct c4iw_listen_ep ;
struct c4iw_ep ;
static inline struct c4iw_ep *to_ep(struct iw_cm_id *cm_id)
static inline struct c4iw_listen_ep *to_listen_ep(struct iw_cm_id *cm_id)
static inline int compute_wscale(int win)
typedef int (*c4iw_handler_func)(struct c4iw_dev *dev, struct sk_buff *skb);
int c4iw_ep_redirect(void *ctx, struct dst_entry *old, struct dst_entry *new,
struct l2t_entry *l2t);
void c4iw_put_qpid(struct c4iw_rdev *rdev, u32 qpid,
struct c4iw_dev_ucontext *uctx);
u32 c4iw_get_resource(struct kfifo *fifo, spinlock_t *lock);
void c4iw_put_resource(struct kfifo *fifo, u32 entry, spinlock_t *lock);
int c4iw_init_resource(struct c4iw_rdev *rdev, u32 nr_tpt, u32 nr_pdid);
int c4iw_init_ctrl_qp(struct c4iw_rdev *rdev);
int c4iw_pblpool_create(struct c4iw_rdev *rdev);
int c4iw_rqtpool_create(struct c4iw_rdev *rdev);
int c4iw_ocqp_pool_create(struct c4iw_rdev *rdev);
void c4iw_pblpool_destroy(struct c4iw_rdev *rdev);
void c4iw_rqtpool_destroy(struct c4iw_rdev *rdev);
void c4iw_ocqp_pool_destroy(struct c4iw_rdev *rdev);
void c4iw_destroy_resource(struct c4iw_resource *rscp);
int c4iw_destroy_ctrl_qp(struct c4iw_rdev *rdev);
int c4iw_register_device(struct c4iw_dev *dev);
void c4iw_unregister_device(struct c4iw_dev *dev);
int __init c4iw_cm_init(void);
void __exit c4iw_cm_term(void);
void c4iw_release_dev_ucontext(struct c4iw_rdev *rdev,
struct c4iw_dev_ucontext *uctx);
void c4iw_init_dev_ucontext(struct c4iw_rdev *rdev,
struct c4iw_dev_ucontext *uctx);
int c4iw_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *wc);
int c4iw_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr);
int c4iw_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
int c4iw_bind_mw(struct ib_qp *qp, struct ib_mw *mw,
struct ib_mw_bind *mw_bind);
int c4iw_connect(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param);
int c4iw_create_listen(struct iw_cm_id *cm_id, int backlog);
int c4iw_destroy_listen(struct iw_cm_id *cm_id);
int c4iw_accept_cr(struct iw_cm_id *cm_id, struct iw_cm_conn_param *conn_param);
int c4iw_reject_cr(struct iw_cm_id *cm_id, const void *pdata, u8 pdata_len);
void c4iw_qp_add_ref(struct ib_qp *qp);
void c4iw_qp_rem_ref(struct ib_qp *qp);
void c4iw_free_fastreg_pbl(struct ib_fast_reg_page_list *page_list);
struct ib_fast_reg_page_list *c4iw_alloc_fastreg_pbl(
struct ib_device *device,
int page_list_len);
struct ib_mr *c4iw_alloc_fast_reg_mr(struct ib_pd *pd, int pbl_depth);
int c4iw_dealloc_mw(struct ib_mw *mw);
struct ib_mw *c4iw_alloc_mw(struct ib_pd *pd);
struct ib_mr *c4iw_reg_user_mr(struct ib_pd *pd, u64 start,
u64 length, u64 virt, int acc,
struct ib_udata *udata);
struct ib_mr *c4iw_get_dma_mr(struct ib_pd *pd, int acc);
struct ib_mr *c4iw_register_phys_mem(struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf,
int acc,
u64 *iova_start);
int c4iw_reregister_phys_mem(struct ib_mr *mr,
int mr_rereg_mask,
struct ib_pd *pd,
struct ib_phys_buf *buffer_list,
int num_phys_buf,
int acc, u64 *iova_start);
int c4iw_dereg_mr(struct ib_mr *ib_mr);
int c4iw_destroy_cq(struct ib_cq *ib_cq);
struct ib_cq *c4iw_create_cq(struct ib_device *ibdev, int entries,
int vector,
struct ib_ucontext *ib_context,
struct ib_udata *udata);
int c4iw_resize_cq(struct ib_cq *cq, int cqe, struct ib_udata *udata);
int c4iw_arm_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags flags);
int c4iw_destroy_qp(struct ib_qp *ib_qp);
struct ib_qp *c4iw_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *attrs,
struct ib_udata *udata);
int c4iw_ib_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata);
struct ib_qp *c4iw_get_qp(struct ib_device *dev, int qpn);
u32 c4iw_rqtpool_alloc(struct c4iw_rdev *rdev, int size);
void c4iw_rqtpool_free(struct c4iw_rdev *rdev, u32 addr, int size);
u32 c4iw_pblpool_alloc(struct c4iw_rdev *rdev, int size);
void c4iw_pblpool_free(struct c4iw_rdev *rdev, u32 addr, int size);
u32 c4iw_ocqp_pool_alloc(struct c4iw_rdev *rdev, int size);
void c4iw_ocqp_pool_free(struct c4iw_rdev *rdev, u32 addr, int size);
int c4iw_ofld_send(struct c4iw_rdev *rdev, struct sk_buff *skb);
void c4iw_flush_hw_cq(struct t4_cq *cq);
void c4iw_count_rcqes(struct t4_cq *cq, struct t4_wq *wq, int *count);
void c4iw_count_scqes(struct t4_cq *cq, struct t4_wq *wq, int *count);
int c4iw_ep_disconnect(struct c4iw_ep *ep, int abrupt, gfp_t gfp);
int c4iw_flush_rq(struct t4_wq *wq, struct t4_cq *cq, int count);
int c4iw_flush_sq(struct t4_wq *wq, struct t4_cq *cq, int count);
int c4iw_ev_handler(struct c4iw_dev *rnicp, u32 qid);
u16 c4iw_rqes_posted(struct c4iw_qp *qhp);
int c4iw_post_terminate(struct c4iw_qp *qhp, struct t4_cqe *err_cqe);
u32 c4iw_get_cqid(struct c4iw_rdev *rdev, struct c4iw_dev_ucontext *uctx);
void c4iw_put_cqid(struct c4iw_rdev *rdev, u32 qid,
struct c4iw_dev_ucontext *uctx);
u32 c4iw_get_qpid(struct c4iw_rdev *rdev, struct c4iw_dev_ucontext *uctx);
void c4iw_put_qpid(struct c4iw_rdev *rdev, u32 qid,
struct c4iw_dev_ucontext *uctx);
void c4iw_ev_dispatch(struct c4iw_dev *dev, struct t4_cqe *err_cqe);
extern struct cxgb4_client t4c_client;
extern c4iw_handler_func c4iw_handlers[NUM_CPL_CMDS];
extern int c4iw_max_read_depth;
