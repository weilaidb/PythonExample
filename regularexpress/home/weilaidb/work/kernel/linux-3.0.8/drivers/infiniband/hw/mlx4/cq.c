static void mlx4_ib_cq_comp(struct mlx4_cq *cq)
static void mlx4_ib_cq_event(struct mlx4_cq *cq, enum mlx4_event type)
static void *get_cqe_from_buf(struct mlx4_ib_cq_buf *buf, int n)
static void *get_cqe(struct mlx4_ib_cq *cq, int n)
static void *get_sw_cqe(struct mlx4_ib_cq *cq, int n)
static struct mlx4_cqe *next_cqe_sw(struct mlx4_ib_cq *cq)
int mlx4_ib_modify_cq(struct ib_cq *cq, u16 cq_count, u16 cq_period)
static int mlx4_ib_alloc_cq_buf(struct mlx4_ib_dev *dev, struct mlx4_ib_cq_buf *buf, int nent)
static void mlx4_ib_free_cq_buf(struct mlx4_ib_dev *dev, struct mlx4_ib_cq_buf *buf, int cqe)
static int mlx4_ib_get_cq_umem(struct mlx4_ib_dev *dev, struct ib_ucontext *context,
struct mlx4_ib_cq_buf *buf, struct ib_umem **umem,
u64 buf_addr, int cqe)
struct ib_cq *mlx4_ib_create_cq(struct ib_device *ibdev, int entries, int vector,
struct ib_ucontext *context,
struct ib_udata *udata)
static int mlx4_alloc_resize_buf(struct mlx4_ib_dev *dev, struct mlx4_ib_cq *cq,
int entries)
static int mlx4_alloc_resize_umem(struct mlx4_ib_dev *dev, struct mlx4_ib_cq *cq,
int entries, struct ib_udata *udata)
static int mlx4_ib_get_outstanding_cqes(struct mlx4_ib_cq *cq)
static void mlx4_ib_cq_resize_copy_cqes(struct mlx4_ib_cq *cq)
int mlx4_ib_resize_cq(struct ib_cq *ibcq, int entries, struct ib_udata *udata)
int mlx4_ib_destroy_cq(struct ib_cq *cq)
static void dump_cqe(void *cqe)
static void mlx4_ib_handle_error_cqe(struct mlx4_err_cqe *cqe,
struct ib_wc *wc)
static int mlx4_ib_ipoib_csum_ok(__be16 status, __be16 checksum)
static int mlx4_ib_poll_one(struct mlx4_ib_cq *cq,
struct mlx4_ib_qp **cur_qp,
struct ib_wc *wc)
int mlx4_ib_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *wc)
int mlx4_ib_arm_cq(struct ib_cq *ibcq, enum ib_cq_notify_flags flags)
void __mlx4_ib_cq_clean(struct mlx4_ib_cq *cq, u32 qpn, struct mlx4_ib_srq *srq)
void mlx4_ib_cq_clean(struct mlx4_ib_cq *cq, u32 qpn, struct mlx4_ib_srq *srq)
