struct mlx4_ib_user_db_page ;
int mlx4_ib_db_map_user(struct mlx4_ib_ucontext *context, unsigned long virt,
struct mlx4_db *db)
void mlx4_ib_db_unmap_user(struct mlx4_ib_ucontext *context, struct mlx4_db *db)
