#define MLX4_IB_H
struct mlx4_ib_ucontext ;
struct mlx4_ib_pd ;
struct mlx4_ib_cq_buf ;
struct mlx4_ib_cq_resize ;
struct mlx4_ib_cq ;
struct mlx4_ib_mr ;
struct mlx4_ib_fast_reg_page_list ;
struct mlx4_ib_fmr ;
struct mlx4_ib_wq ;
enum mlx4_ib_qp_flags ;
struct mlx4_ib_gid_entry ;
struct mlx4_ib_qp ;
struct mlx4_ib_srq ;
struct mlx4_ib_ah ;
struct mlx4_ib_iboe ;
struct mlx4_ib_dev ;
static inline struct mlx4_ib_dev *to_mdev(struct ib_device *ibdev)
static inline struct mlx4_ib_ucontext *to_mucontext(struct ib_ucontext *ibucontext)
static inline struct mlx4_ib_pd *to_mpd(struct ib_pd *ibpd)
static inline struct mlx4_ib_cq *to_mcq(struct ib_cq *ibcq)
static inline struct mlx4_ib_cq *to_mibcq(struct mlx4_cq *mcq)
static inline struct mlx4_ib_mr *to_mmr(struct ib_mr *ibmr)
static inline struct mlx4_ib_fast_reg_page_list *to_mfrpl(struct ib_fast_reg_page_list *ibfrpl)
static inline struct mlx4_ib_fmr *to_mfmr(struct ib_fmr *ibfmr)
static inline struct mlx4_ib_qp *to_mqp(struct ib_qp *ibqp)
static inline struct mlx4_ib_qp *to_mibqp(struct mlx4_qp *mqp)
static inline struct mlx4_ib_srq *to_msrq(struct ib_srq *ibsrq)
static inline struct mlx4_ib_srq *to_mibsrq(struct mlx4_srq *msrq)
static inline struct mlx4_ib_ah *to_mah(struct ib_ah *ibah)
int mlx4_ib_db_map_user(struct mlx4_ib_ucontext *context, unsigned long virt,
struct mlx4_db *db);
void mlx4_ib_db_unmap_user(struct mlx4_ib_ucontext *context, struct mlx4_db *db);
struct ib_mr *mlx4_ib_get_dma_mr(struct ib_pd *pd, int acc);
int mlx4_ib_umem_write_mtt(struct mlx4_ib_dev *dev, struct mlx4_mtt *mtt,
struct ib_umem *umem);
struct ib_mr *mlx4_ib_reg_user_mr(struct ib_pd *pd, u64 start, u64 length,
u64 virt_addr, int access_flags,
struct ib_udata *udata);
int mlx4_ib_dereg_mr(struct ib_mr *mr);
struct ib_mr *mlx4_ib_alloc_fast_reg_mr(struct ib_pd *pd,
int max_page_list_len);
struct ib_fast_reg_page_list *mlx4_ib_alloc_fast_reg_page_list(struct ib_device *ibdev,
int page_list_len);
void mlx4_ib_free_fast_reg_page_list(struct ib_fast_reg_page_list *page_list);
int mlx4_ib_modify_cq(struct ib_cq *cq, u16 cq_count, u16 cq_period);
int mlx4_ib_resize_cq(struct ib_cq *ibcq, int entries, struct ib_udata *udata);
struct ib_cq *mlx4_ib_create_cq(struct ib_device *ibdev, int entries, int vector,
struct ib_ucontext *context,
struct ib_udata *udata);
int mlx4_ib_destroy_cq(struct ib_cq *cq);
int mlx4_ib_poll_cq(struct ib_cq *ibcq, int num_entries, struct ib_wc *wc);
int mlx4_ib_arm_cq(struct ib_cq *cq, enum ib_cq_notify_flags flags);
void __mlx4_ib_cq_clean(struct mlx4_ib_cq *cq, u32 qpn, struct mlx4_ib_srq *srq);
void mlx4_ib_cq_clean(struct mlx4_ib_cq *cq, u32 qpn, struct mlx4_ib_srq *srq);
struct ib_ah *mlx4_ib_create_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr);
int mlx4_ib_query_ah(struct ib_ah *ibah, struct ib_ah_attr *ah_attr);
int mlx4_ib_destroy_ah(struct ib_ah *ah);
struct ib_srq *mlx4_ib_create_srq(struct ib_pd *pd,
struct ib_srq_init_attr *init_attr,
struct ib_udata *udata);
int mlx4_ib_modify_srq(struct ib_srq *ibsrq, struct ib_srq_attr *attr,
enum ib_srq_attr_mask attr_mask, struct ib_udata *udata);
int mlx4_ib_query_srq(struct ib_srq *srq, struct ib_srq_attr *srq_attr);
int mlx4_ib_destroy_srq(struct ib_srq *srq);
void mlx4_ib_free_srq_wqe(struct mlx4_ib_srq *srq, int wqe_index);
int mlx4_ib_post_srq_recv(struct ib_srq *ibsrq, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
struct ib_qp *mlx4_ib_create_qp(struct ib_pd *pd,
struct ib_qp_init_attr *init_attr,
struct ib_udata *udata);
int mlx4_ib_destroy_qp(struct ib_qp *qp);
int mlx4_ib_modify_qp(struct ib_qp *ibqp, struct ib_qp_attr *attr,
int attr_mask, struct ib_udata *udata);
int mlx4_ib_query_qp(struct ib_qp *ibqp, struct ib_qp_attr *qp_attr, int qp_attr_mask,
struct ib_qp_init_attr *qp_init_attr);
int mlx4_ib_post_send(struct ib_qp *ibqp, struct ib_send_wr *wr,
struct ib_send_wr **bad_wr);
int mlx4_ib_post_recv(struct ib_qp *ibqp, struct ib_recv_wr *wr,
struct ib_recv_wr **bad_wr);
int mlx4_MAD_IFC(struct mlx4_ib_dev *dev, int ignore_mkey, int ignore_bkey,
int port, struct ib_wc *in_wc, struct ib_grh *in_grh,
void *in_mad, void *response_mad);
int mlx4_ib_process_mad(struct ib_device *ibdev, int mad_flags,	u8 port_num,
struct ib_wc *in_wc, struct ib_grh *in_grh,
struct ib_mad *in_mad, struct ib_mad *out_mad);
int mlx4_ib_mad_init(struct mlx4_ib_dev *dev);
void mlx4_ib_mad_cleanup(struct mlx4_ib_dev *dev);
struct ib_fmr *mlx4_ib_fmr_alloc(struct ib_pd *pd, int mr_access_flags,
struct ib_fmr_attr *fmr_attr);
int mlx4_ib_map_phys_fmr(struct ib_fmr *ibfmr, u64 *page_list, int npages,
u64 iova);
int mlx4_ib_unmap_fmr(struct list_head *fmr_list);
int mlx4_ib_fmr_dealloc(struct ib_fmr *fmr);
int mlx4_ib_resolve_grh(struct mlx4_ib_dev *dev, const struct ib_ah_attr *ah_attr,
u8 *mac, int *is_mcast, u8 port);
static inline int mlx4_ib_ah_grh_present(struct mlx4_ib_ah *ah)
int mlx4_ib_add_mc(struct mlx4_ib_dev *mdev, struct mlx4_ib_qp *mqp,
union ib_gid *gid);
