int mlx4_ib_resolve_grh(struct mlx4_ib_dev *dev, const struct ib_ah_attr *ah_attr,
u8 *mac, int *is_mcast, u8 port)
static struct ib_ah *create_ib_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr,
struct mlx4_ib_ah *ah)
static struct ib_ah *create_iboe_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr,
struct mlx4_ib_ah *ah)
struct ib_ah *mlx4_ib_create_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr)
int mlx4_ib_query_ah(struct ib_ah *ibah, struct ib_ah_attr *ah_attr)
int mlx4_ib_destroy_ah(struct ib_ah *ah)
