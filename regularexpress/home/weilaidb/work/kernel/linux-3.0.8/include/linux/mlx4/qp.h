#define MLX4_QP_H
#define MLX4_INVALID_LKEY	0x100
enum mlx4_qp_optpar ;
enum mlx4_qp_state ;
enum ;
enum ;
enum ;
struct mlx4_qp_path ;
struct mlx4_qp_context ;
#define MLX4_FW_VER_WQE_CTRL_NEC mlx4_fw_ver(2, 2, 232)
enum ;
struct mlx4_wqe_ctrl_seg ;
enum ;
struct mlx4_wqe_mlx_seg ;
struct mlx4_wqe_datagram_seg ;
struct mlx4_wqe_lso_seg ;
struct mlx4_wqe_bind_seg ;
enum ;
struct mlx4_wqe_fmr_seg ;
struct mlx4_wqe_fmr_ext_seg ;
struct mlx4_wqe_local_inval_seg ;
struct mlx4_wqe_raddr_seg ;
struct mlx4_wqe_atomic_seg ;
struct mlx4_wqe_masked_atomic_seg ;
struct mlx4_wqe_data_seg ;
enum ;
struct mlx4_wqe_inline_seg ;
int mlx4_qp_modify(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
enum mlx4_qp_state cur_state, enum mlx4_qp_state new_state,
struct mlx4_qp_context *context, enum mlx4_qp_optpar optpar,
int sqd_event, struct mlx4_qp *qp);
int mlx4_qp_query(struct mlx4_dev *dev, struct mlx4_qp *qp,
struct mlx4_qp_context *context);
int mlx4_qp_to_ready(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
struct mlx4_qp_context *context,
struct mlx4_qp *qp, enum mlx4_qp_state *qp_state);
static inline struct mlx4_qp *__mlx4_qp_lookup(struct mlx4_dev *dev, u32 qpn)
void mlx4_qp_remove(struct mlx4_dev *dev, struct mlx4_qp *qp);
