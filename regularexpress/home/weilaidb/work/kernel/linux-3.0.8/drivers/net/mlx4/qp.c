void mlx4_qp_event(struct mlx4_dev *dev, u32 qpn, int event_type)
int mlx4_qp_modify(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
enum mlx4_qp_state cur_state, enum mlx4_qp_state new_state,
struct mlx4_qp_context *context, enum mlx4_qp_optpar optpar,
int sqd_event, struct mlx4_qp *qp)
EXPORT_SYMBOL_GPL(mlx4_qp_modify);
int mlx4_qp_reserve_range(struct mlx4_dev *dev, int cnt, int align, int *base)
EXPORT_SYMBOL_GPL(mlx4_qp_reserve_range);
void mlx4_qp_release_range(struct mlx4_dev *dev, int base_qpn, int cnt)
EXPORT_SYMBOL_GPL(mlx4_qp_release_range);
int mlx4_qp_alloc(struct mlx4_dev *dev, int qpn, struct mlx4_qp *qp)
EXPORT_SYMBOL_GPL(mlx4_qp_alloc);
void mlx4_qp_remove(struct mlx4_dev *dev, struct mlx4_qp *qp)
EXPORT_SYMBOL_GPL(mlx4_qp_remove);
void mlx4_qp_free(struct mlx4_dev *dev, struct mlx4_qp *qp)
EXPORT_SYMBOL_GPL(mlx4_qp_free);
static int mlx4_CONF_SPECIAL_QP(struct mlx4_dev *dev, u32 base_qpn)
int mlx4_init_qp_table(struct mlx4_dev *dev)
void mlx4_cleanup_qp_table(struct mlx4_dev *dev)
int mlx4_qp_query(struct mlx4_dev *dev, struct mlx4_qp *qp,
struct mlx4_qp_context *context)
EXPORT_SYMBOL_GPL(mlx4_qp_query);
int mlx4_qp_to_ready(struct mlx4_dev *dev, struct mlx4_mtt *mtt,
struct mlx4_qp_context *context,
struct mlx4_qp *qp, enum mlx4_qp_state *qp_state)
EXPORT_SYMBOL_GPL(mlx4_qp_to_ready);
