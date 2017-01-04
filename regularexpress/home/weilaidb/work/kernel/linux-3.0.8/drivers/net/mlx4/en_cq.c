static void mlx4_en_cq_event(struct mlx4_cq *cq, enum mlx4_event event)
int mlx4_en_create_cq(struct mlx4_en_priv *priv,
struct mlx4_en_cq *cq,
int entries, int ring, enum cq_type mode)
int mlx4_en_activate_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq)
void mlx4_en_destroy_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq,
bool reserve_vectors)
void mlx4_en_deactivate_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq)
int mlx4_en_set_cq_moder(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq)
int mlx4_en_arm_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq)
