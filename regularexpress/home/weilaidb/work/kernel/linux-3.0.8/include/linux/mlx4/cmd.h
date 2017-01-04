#define MLX4_CMD_H
enum ;
enum ;
enum ;
enum ;
struct mlx4_dev;
struct mlx4_cmd_mailbox ;
int __mlx4_cmd(struct mlx4_dev *dev, u64 in_param, u64 *out_param,
int out_is_imm, u32 in_modifier, u8 op_modifier,
u16 op, unsigned long timeout);
static inline int mlx4_cmd(struct mlx4_dev *dev, u64 in_param, u32 in_modifier,
u8 op_modifier, u16 op, unsigned long timeout)
static inline int mlx4_cmd_box(struct mlx4_dev *dev, u64 in_param, u64 out_param,
u32 in_modifier, u8 op_modifier, u16 op,
unsigned long timeout)
static inline int mlx4_cmd_imm(struct mlx4_dev *dev, u64 in_param, u64 *out_param,
u32 in_modifier, u8 op_modifier, u16 op,
unsigned long timeout)
struct mlx4_cmd_mailbox *mlx4_alloc_cmd_mailbox(struct mlx4_dev *dev);
void mlx4_free_cmd_mailbox(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox);
