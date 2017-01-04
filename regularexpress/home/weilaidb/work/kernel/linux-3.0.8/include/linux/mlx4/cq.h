#define MLX4_CQ_H
struct mlx4_cqe ;
struct mlx4_err_cqe ;
enum ;
enum ;
enum ;
enum ;
enum ;
static inline void mlx4_cq_arm(struct mlx4_cq *cq, u32 cmd,
void __iomem *uar_page,
spinlock_t *doorbell_lock)
static inline void mlx4_cq_set_ci(struct mlx4_cq *cq)
enum ;
int mlx4_cq_modify(struct mlx4_dev *dev, struct mlx4_cq *cq,
u16 count, u16 period);
int mlx4_cq_resize(struct mlx4_dev *dev, struct mlx4_cq *cq,
int entries, struct mlx4_mtt *mtt);
