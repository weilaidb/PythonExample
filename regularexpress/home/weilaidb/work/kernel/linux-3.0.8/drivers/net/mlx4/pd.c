enum ;
int mlx4_pd_alloc(struct mlx4_dev *dev, u32 *pdn)
EXPORT_SYMBOL_GPL(mlx4_pd_alloc);
void mlx4_pd_free(struct mlx4_dev *dev, u32 pdn)
EXPORT_SYMBOL_GPL(mlx4_pd_free);
int mlx4_init_pd_table(struct mlx4_dev *dev)
void mlx4_cleanup_pd_table(struct mlx4_dev *dev)
int mlx4_uar_alloc(struct mlx4_dev *dev, struct mlx4_uar *uar)
EXPORT_SYMBOL_GPL(mlx4_uar_alloc);
void mlx4_uar_free(struct mlx4_dev *dev, struct mlx4_uar *uar)
EXPORT_SYMBOL_GPL(mlx4_uar_free);
int mlx4_bf_alloc(struct mlx4_dev *dev, struct mlx4_bf *bf)
EXPORT_SYMBOL_GPL(mlx4_bf_alloc);
void mlx4_bf_free(struct mlx4_dev *dev, struct mlx4_bf *bf)
EXPORT_SYMBOL_GPL(mlx4_bf_free);
int mlx4_init_uar_table(struct mlx4_dev *dev)
void mlx4_cleanup_uar_table(struct mlx4_dev *dev)
