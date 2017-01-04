enum ;
enum ;
enum ;
enum ;
struct mlx4_ib_sqp ;
enum ;
static const __be32 mlx4_ib_opcode[] = ;
static struct mlx4_ib_sqp *to_msqp(struct mlx4_ib_qp *mqp)
static int is_sqp(struct mlx4_ib_dev *dev, struct mlx4_ib_qp *qp)
static int is_qp0(struct mlx4_ib_dev *dev, struct mlx4_ib_qp *qp)
static void *get_wqe(struct mlx4_ib_qp *qp, int offset)
static void *get_recv_wqe(struct mlx4_ib_qp *qp, int n)
static void *get_send_wqe(struct mlx4_ib_qp *qp, int n)
static void stamp_send_wqe(struct mlx4_ib_qp *qp, int n, int size)
static void post_nop_wqe(struct mlx4_ib_qp *qp, int n, int size)
static inline unsigned pad_wraparound(struct mlx4_ib_qp *qp, int ind)
static void mlx4_ib_qp_event(struct mlx4_qp *qp, enum mlx4_event type)
static int send_wqe_overhead(enum ib_qp_type type, u32 flags)
static int set_rq_size(struct mlx4_ib_dev *dev, struct ib_qp_cap *cap,
int is_user, int has_srq, struct mlx4_ib_qp *qp)
static int set_kernel_sq_size(struct mlx4_ib_dev *dev, struct ib_qp_cap *cap,
enum ib_qp_type type, struct mlx4_ib_qp *qp)
static int set_user_sq_size(struct mlx4_ib_dev *dev,
struct mlx4_ib_qp *qp,
struct mlx4_ib_create_qp *ucmd)
static int create_qp_common(struct mlx4_ib_dev *dev, struct ib_pd *pd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata, int sqpn, struct mlx4_ib_qp *qp)
static enum mlx4_qp_state to_mlx4_state(enum ib_qp_state state)
static void mlx4_ib_lock_cqs(struct mlx4_ib_cq *send_cq, struct mlx4_ib_cq *recv_cq)
__acquires(&send_cq->lock) __acquires(&recv_cq->lock)
static void mlx4_ib_unlock_cqs(struct mlx4_ib_cq *send_cq, struct mlx4_ib_cq *recv_cq)
__releases(&send_cq->lock) __releases(&recv_cq->lock)
static void del_gid_entries(struct mlx4_ib_qp *qp)
static void destroy_qp_common(struct mlx4_ib_dev *dev, struct mlx4_ib_qp *qp,
int is_user)
struct ib_qp *mlx4_ib_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata)
int mlx4_ib_destroy_qp(struct ib_qp *qp)
static int to_mlx4_st(enum ib_qp_type type)
static __be32 to_mlx4_access_flags(struct mlx4_ib_qp *qp, const struct ib_qp_attr *attr,
int attr_mask)
static void store_sqp_attrs(struct mlx4_ib_sqp *sqp, const struct ib_qp_attr *attr,
int attr_mask)
static void mlx4_set_sched(struct mlx4_qp_path *path, u8 port)
static int mlx4_set_path(struct mlx4_ib_dev *dev, const struct ib_ah_attr *ah,
struct mlx4_qp_path *path, u8 port)
static void update_mcg_macs(struct mlx4_ib_dev *dev, struct mlx4_ib_qp *qp)
static int __mlx4_ib_modify_qp(struct ib_qp *ibqp,
const struct ib_qp_attr *attr, int attr_mask,
enum ib_qp_state cur_state, enum ib_qp_state new_state)
int mlx4_ib_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata)
static int build_mlx_header(struct mlx4_ib_sqp *sqp, struct ib_send_wr *wr,
void *wqe, unsigned *mlx_seg_len)
static int mlx4_wq_overflow(struct mlx4_ib_wq *wq, int nreq, struct ib_cq *ib_cq)
static __be32 convert_access(int acc)
static void set_fmr_seg(struct mlx4_wqe_fmr_seg *fseg, struct ib_send_wr *wr)
static void set_local_inv_seg(struct mlx4_wqe_local_inval_seg *iseg, u32 rkey)
static __always_inline void set_raddr_seg(struct mlx4_wqe_raddr_seg *rseg,
u64 remote_addr, u32 rkey)
static void set_atomic_seg(struct mlx4_wqe_atomic_seg *aseg, struct ib_send_wr *wr)
static void set_masked_atomic_seg(struct mlx4_wqe_masked_atomic_seg *aseg,
struct ib_send_wr *wr)
static void set_datagram_seg(struct mlx4_wqe_datagram_seg *dseg,
struct ib_send_wr *wr, __be16 *vlan)
static void set_mlx_icrc_seg(void *dseg)
static void set_data_seg(struct mlx4_wqe_data_seg *dseg, struct ib_sge *sg)
static void __set_data_seg(struct mlx4_wqe_data_seg *dseg, struct ib_sge *sg)
static int build_lso_seg(struct mlx4_wqe_lso_seg *wqe, struct ib_send_wr *wr,
struct mlx4_ib_qp *qp, unsigned *lso_seg_len,
__be32 *lso_hdr_sz, __be32 *blh)
static __be32 send_ieth(struct ib_send_wr *wr)
int mlx4_ib_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr)
int mlx4_ib_post_recv(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
static inline enum ib_qp_state to_ib_qp_state(enum mlx4_qp_state mlx4_state)
static inline enum ib_mig_state to_ib_mig_state(int mlx4_mig_state)
static int to_ib_qp_access_flags(int mlx4_flags)
static void to_ib_ah_attr(struct mlx4_ib_dev *ibdev, struct ib_ah_attr *ib_ah_attr,
struct mlx4_qp_path *path)
int mlx4_ib_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *qp_attr, int qp_attr_mask,
struct ib_qp_init_attr *qp_init_attr)
