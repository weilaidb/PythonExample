static LIST_HEAD(rdev_list);
static cxio_hal_ev_callback_func_t cxio_ev_cb = NULL;
static struct cxio_rdev *cxio_hal_find_rdev_by_name(char *dev_name)
static struct cxio_rdev *cxio_hal_find_rdev_by_t3cdev(struct t3cdev *tdev)
int cxio_hal_cq_op(struct cxio_rdev *rdev_p, struct t3_cq *cq,
enum t3_cq_opcode op, u32 credit)
static int cxio_hal_clear_cq_ctx(struct cxio_rdev *rdev_p, u32 cqid)
static int cxio_hal_clear_qp_ctx(struct cxio_rdev *rdev_p, u32 qpid)
int cxio_create_cq(struct cxio_rdev *rdev_p, struct t3_cq *cq, int kernel)
int cxio_resize_cq(struct cxio_rdev *rdev_p, struct t3_cq *cq)
static u32 get_qpid(struct cxio_rdev *rdev_p, struct cxio_ucontext *uctx)
static void put_qpid(struct cxio_rdev *rdev_p, u32 qpid,
struct cxio_ucontext *uctx)
void cxio_release_ucontext(struct cxio_rdev *rdev_p, struct cxio_ucontext *uctx)
void cxio_init_ucontext(struct cxio_rdev *rdev_p, struct cxio_ucontext *uctx)
int cxio_create_qp(struct cxio_rdev *rdev_p, u32 kernel_domain,
struct t3_wq *wq, struct cxio_ucontext *uctx)
int cxio_destroy_cq(struct cxio_rdev *rdev_p, struct t3_cq *cq)
int cxio_destroy_qp(struct cxio_rdev *rdev_p, struct t3_wq *wq,
struct cxio_ucontext *uctx)
static void insert_recv_cqe(struct t3_wq *wq, struct t3_cq *cq)
int cxio_flush_rq(struct t3_wq *wq, struct t3_cq *cq, int count)
static void insert_sq_cqe(struct t3_wq *wq, struct t3_cq *cq,
struct t3_swsq *sqp)
int cxio_flush_sq(struct t3_wq *wq, struct t3_cq *cq, int count)
void cxio_flush_hw_cq(struct t3_cq *cq)
static int cqe_completes_wr(struct t3_cqe *cqe, struct t3_wq *wq)
void cxio_count_scqes(struct t3_cq *cq, struct t3_wq *wq, int *count)
void cxio_count_rcqes(struct t3_cq *cq, struct t3_wq *wq, int *count)
static int cxio_hal_init_ctrl_cq(struct cxio_rdev *rdev_p)
static int cxio_hal_init_ctrl_qp(struct cxio_rdev *rdev_p)
static int cxio_hal_destroy_ctrl_qp(struct cxio_rdev *rdev_p)
static int cxio_hal_ctrl_qp_write_mem(struct cxio_rdev *rdev_p, u32 addr,
u32 len, void *data)
static int __cxio_tpt_op(struct cxio_rdev *rdev_p, u32 reset_tpt_entry,
u32 *stag, u8 stag_state, u32 pdid,
enum tpt_mem_type type, enum tpt_mem_perm perm,
u32 zbva, u64 to, u32 len, u8 page_size,
u32 pbl_size, u32 pbl_addr)
int cxio_write_pbl(struct cxio_rdev *rdev_p, __be64 *pbl,
u32 pbl_addr, u32 pbl_size)
int cxio_register_phys_mem(struct cxio_rdev *rdev_p, u32 *stag, u32 pdid,
enum tpt_mem_perm perm, u32 zbva, u64 to, u32 len,
u8 page_size, u32 pbl_size, u32 pbl_addr)
int cxio_reregister_phys_mem(struct cxio_rdev *rdev_p, u32 *stag, u32 pdid,
enum tpt_mem_perm perm, u32 zbva, u64 to, u32 len,
u8 page_size, u32 pbl_size, u32 pbl_addr)
int cxio_dereg_mem(struct cxio_rdev *rdev_p, u32 stag, u32 pbl_size,
u32 pbl_addr)
int cxio_allocate_window(struct cxio_rdev *rdev_p, u32 * stag, u32 pdid)
int cxio_deallocate_window(struct cxio_rdev *rdev_p, u32 stag)
int cxio_allocate_stag(struct cxio_rdev *rdev_p, u32 *stag, u32 pdid, u32 pbl_size, u32 pbl_addr)
int cxio_rdma_init(struct cxio_rdev *rdev_p, struct t3_rdma_init_attr *attr)
void cxio_register_ev_cb(cxio_hal_ev_callback_func_t ev_cb)
void cxio_unregister_ev_cb(cxio_hal_ev_callback_func_t ev_cb)
static int cxio_hal_ev_handler(struct t3cdev *t3cdev_p, struct sk_buff *skb)
int cxio_rdev_open(struct cxio_rdev *rdev_p)
void cxio_rdev_close(struct cxio_rdev *rdev_p)
int __init cxio_hal_init(void)
void __exit cxio_hal_exit(void)
static void flush_completed_wrs(struct t3_wq *wq, struct t3_cq *cq)
static void create_read_req_cqe(struct t3_wq *wq, struct t3_cqe *hw_cqe,
struct t3_cqe *read_cqe)
static void advance_oldest_read(struct t3_wq *wq)
int cxio_poll_cq(struct t3_wq *wq, struct t3_cq *cq, struct t3_cqe *cqe,
u8 *cqe_flushed, u64 *cookie, u32 *credit)
