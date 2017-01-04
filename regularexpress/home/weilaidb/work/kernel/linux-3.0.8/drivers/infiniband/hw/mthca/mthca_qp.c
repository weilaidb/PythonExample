enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
struct mthca_qp_path  __attribute__((packed));
struct mthca_qp_context  __attribute__((packed));
struct mthca_qp_param  __attribute__((packed));
enum ;
static const u8 mthca_opcode[] = ;
static int is_sqp(struct mthca_dev *dev, struct mthca_qp *qp)
static int is_qp0(struct mthca_dev *dev, struct mthca_qp *qp)
static void *get_recv_wqe(struct mthca_qp *qp, int n)
static void *get_send_wqe(struct mthca_qp *qp, int n)
static void mthca_wq_reset(struct mthca_wq *wq)
void mthca_qp_event(struct mthca_dev *dev, u32 qpn,
enum ib_event_type event_type)
static int to_mthca_state(enum ib_qp_state ib_state)
enum ;
static int to_mthca_st(int transport)
static void store_attrs(struct mthca_sqp *sqp, const struct ib_qp_attr *attr,
int attr_mask)
static void init_port(struct mthca_dev *dev, int port)
static __be32 get_hw_access_flags(struct mthca_qp *qp, const struct ib_qp_attr *attr,
int attr_mask)
static inline enum ib_qp_state to_ib_qp_state(int mthca_state)
static inline enum ib_mig_state to_ib_mig_state(int mthca_mig_state)
static int to_ib_qp_access_flags(int mthca_flags)
static void to_ib_ah_attr(struct mthca_dev *dev, struct ib_ah_attr *ib_ah_attr,
struct mthca_qp_path *path)
int mthca_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *qp_attr, int qp_attr_mask,
struct ib_qp_init_attr *qp_init_attr)
static int mthca_path_set(struct mthca_dev *dev, const struct ib_ah_attr *ah,
struct mthca_qp_path *path, u8 port)
static int __mthca_modify_qp(struct ib_qp *ibqp,
const struct ib_qp_attr *attr, int attr_mask,
enum ib_qp_state cur_state, enum ib_qp_state new_state)
int mthca_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr, int attr_mask,
struct ib_udata *udata)
static int mthca_max_data_size(struct mthca_dev *dev, struct mthca_qp *qp, int desc_sz)
static inline int mthca_max_inline_data(struct mthca_pd *pd, int max_data_size)
static void mthca_adjust_qp_caps(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_qp *qp)
static int mthca_alloc_wqe_buf(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_qp *qp)
static void mthca_free_wqe_buf(struct mthca_dev *dev,
struct mthca_qp *qp)
static int mthca_map_memfree(struct mthca_dev *dev,
struct mthca_qp *qp)
static void mthca_unmap_memfree(struct mthca_dev *dev,
struct mthca_qp *qp)
static int mthca_alloc_memfree(struct mthca_dev *dev,
struct mthca_qp *qp)
static void mthca_free_memfree(struct mthca_dev *dev,
struct mthca_qp *qp)
static int mthca_alloc_qp_common(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_cq *send_cq,
struct mthca_cq *recv_cq,
enum ib_sig_type send_policy,
struct mthca_qp *qp)
static int mthca_set_qp_size(struct mthca_dev *dev, struct ib_qp_cap *cap,
struct mthca_pd *pd, struct mthca_qp *qp)
int mthca_alloc_qp(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_cq *send_cq,
struct mthca_cq *recv_cq,
enum ib_qp_type type,
enum ib_sig_type send_policy,
struct ib_qp_cap *cap,
struct mthca_qp *qp)
static void mthca_lock_cqs(struct mthca_cq *send_cq, struct mthca_cq *recv_cq)
__acquires(&send_cq->lock) __acquires(&recv_cq->lock)
static void mthca_unlock_cqs(struct mthca_cq *send_cq, struct mthca_cq *recv_cq)
__releases(&send_cq->lock) __releases(&recv_cq->lock)
int mthca_alloc_sqp(struct mthca_dev *dev,
struct mthca_pd *pd,
struct mthca_cq *send_cq,
struct mthca_cq *recv_cq,
enum ib_sig_type send_policy,
struct ib_qp_cap *cap,
int qpn,
int port,
struct mthca_sqp *sqp)
static inline int get_qp_refcount(struct mthca_dev *dev, struct mthca_qp *qp)
void mthca_free_qp(struct mthca_dev *dev,
struct mthca_qp *qp)
static int build_mlx_header(struct mthca_dev *dev, struct mthca_sqp *sqp,
int ind, struct ib_send_wr *wr,
struct mthca_mlx_seg *mlx,
struct mthca_data_seg *data)
static inline int mthca_wq_overflow(struct mthca_wq *wq, int nreq,
struct ib_cq *ib_cq)
static __always_inline void set_raddr_seg(struct mthca_raddr_seg *rseg,
u64 remote_addr, u32 rkey)
static __always_inline void set_atomic_seg(struct mthca_atomic_seg *aseg,
struct ib_send_wr *wr)
static void set_tavor_ud_seg(struct mthca_tavor_ud_seg *useg,
struct ib_send_wr *wr)
static void set_arbel_ud_seg(struct mthca_arbel_ud_seg *useg,
struct ib_send_wr *wr)
int mthca_tavor_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr)
int mthca_tavor_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
int mthca_arbel_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr)
int mthca_arbel_post_receive(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr)
void mthca_free_err_wqe(struct mthca_dev *dev, struct mthca_qp *qp, int is_send,
int index, int *dbd, __be32 *new_wqe)
int mthca_init_qp_table(struct mthca_dev *dev)
void mthca_cleanup_qp_table(struct mthca_dev *dev)
