static int destroy_cq(struct c4iw_rdev *rdev, struct t4_cq *cq,
struct c4iw_dev_ucontext *uctx)
static int create_cq(struct c4iw_rdev *rdev, struct t4_cq *cq,
struct c4iw_dev_ucontext *uctx)
static void insert_recv_cqe(struct t4_wq *wq, struct t4_cq *cq)
int c4iw_flush_rq(struct t4_wq *wq, struct t4_cq *cq, int count)
static void insert_sq_cqe(struct t4_wq *wq, struct t4_cq *cq,
struct t4_swsqe *swcqe)
int c4iw_flush_sq(struct t4_wq *wq, struct t4_cq *cq, int count)
void c4iw_flush_hw_cq(struct t4_cq *cq)
static int cqe_completes_wr(struct t4_cqe *cqe, struct t4_wq *wq)
void c4iw_count_scqes(struct t4_cq *cq, struct t4_wq *wq, int *count)
void c4iw_count_rcqes(struct t4_cq *cq, struct t4_wq *wq, int *count)
static void flush_completed_wrs(struct t4_wq *wq, struct t4_cq *cq)
static void create_read_req_cqe(struct t4_wq *wq, struct t4_cqe *hw_cqe,
struct t4_cqe *read_cqe)
static void advance_oldest_read(struct t4_wq *wq)
static int poll_cq(struct t4_wq *wq, struct t4_cq *cq, struct t4_cqe *cqe,
u8 *cqe_flushed, u64 *cookie, u32 *credit)
static int c4iw_poll_cq_one(struct c4iw_cq *chp, struct ib_wc *wc)
int c4iw_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *wc)
int c4iw_destroy_cq(struct ib_cq *ib_cq)
struct ib_cq *c4iw_create_cq(struct ib_device *ibdev, int entries,
int vector, struct ib_ucontext *ib_context,
struct ib_udata *udata)
int c4iw_resize_cq(struct ib_cq *cq, int cqe, struct ib_udata *udata)
int c4iw_arm_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags flags)
