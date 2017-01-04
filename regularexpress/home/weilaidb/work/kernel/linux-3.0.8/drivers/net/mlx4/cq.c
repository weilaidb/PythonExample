struct mlx4_cq_context ;
#define MLX4_CQ_STATUS_OK		( 0 << 28)
#define MLX4_CQ_STATUS_OVERFLOW		( 9 << 28)
#define MLX4_CQ_STATUS_WRITE_FAIL	(10 << 28)
#define MLX4_CQ_FLAG_CC			( 1 << 18)
#define MLX4_CQ_FLAG_OI			( 1 << 17)
#define MLX4_CQ_STATE_ARMED		( 9 <<  8)
#define MLX4_CQ_STATE_ARMED_SOL		( 6 <<  8)
#define MLX4_EQ_STATE_FIRED		(10 <<  8)
void mlx4_cq_completion(struct mlx4_dev *dev, u32 cqn)
void mlx4_cq_event(struct mlx4_dev *dev, u32 cqn, int event_type)
static int mlx4_SW2HW_CQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int cq_num)
static int mlx4_MODIFY_CQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int cq_num, u32 opmod)
static int mlx4_HW2SW_CQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int cq_num)
int mlx4_cq_modify(struct mlx4_dev *dev, struct mlx4_cq *cq,
u16 count, u16 period)
EXPORT_SYMBOL_GPL(mlx4_cq_modify);
int mlx4_cq_resize(struct mlx4_dev *dev, struct mlx4_cq *cq,
int entries, struct mlx4_mtt *mtt)
EXPORT_SYMBOL_GPL(mlx4_cq_resize);
int mlx4_cq_alloc(struct mlx4_dev *dev, int nent, struct mlx4_mtt *mtt,
struct mlx4_uar *uar, u64 db_rec, struct mlx4_cq *cq,
unsigned vector, int collapsed)
EXPORT_SYMBOL_GPL(mlx4_cq_alloc);
void mlx4_cq_free(struct mlx4_dev *dev, struct mlx4_cq *cq)
EXPORT_SYMBOL_GPL(mlx4_cq_free);
int mlx4_init_cq_table(struct mlx4_dev *dev)
void mlx4_cleanup_cq_table(struct mlx4_dev *dev)
