void mlx4_en_fill_qp_context(struct mlx4_en_priv *priv, int size, int stride,
int is_tx, int rss, int qpn, int cqn,
struct mlx4_qp_context *context)
int mlx4_en_map_buffer(struct mlx4_buf *buf)
void mlx4_en_unmap_buffer(struct mlx4_buf *buf)
void mlx4_en_sqp_event(struct mlx4_qp *qp, enum mlx4_event event)
