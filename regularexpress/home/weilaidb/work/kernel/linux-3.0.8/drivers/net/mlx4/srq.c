struct mlx4_srq_context ;
void mlx4_srq_event(struct mlx4_dev *dev, u32 srqn, int event_type)
static int mlx4_SW2HW_SRQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int srq_num)
static int mlx4_HW2SW_SRQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int srq_num)
static int mlx4_ARM_SRQ(struct mlx4_dev *dev, int srq_num, int limit_watermark)
static int mlx4_QUERY_SRQ(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox,
int srq_num)
int mlx4_srq_alloc(struct mlx4_dev *dev, u32 pdn, struct mlx4_mtt *mtt,
u64 db_rec, struct mlx4_srq *srq)
EXPORT_SYMBOL_GPL(mlx4_srq_alloc);
void mlx4_srq_free(struct mlx4_dev *dev, struct mlx4_srq *srq)
EXPORT_SYMBOL_GPL(mlx4_srq_free);
int mlx4_srq_arm(struct mlx4_dev *dev, struct mlx4_srq *srq, int limit_watermark)
EXPORT_SYMBOL_GPL(mlx4_srq_arm);
int mlx4_srq_query(struct mlx4_dev *dev, struct mlx4_srq *srq, int *limit_watermark)
EXPORT_SYMBOL_GPL(mlx4_srq_query);
int mlx4_init_srq_table(struct mlx4_dev *dev)
void mlx4_cleanup_srq_table(struct mlx4_dev *dev)
