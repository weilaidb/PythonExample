#define CMD_POLL_TOKEN 0xffff
enum ;
enum ;
enum ;
struct mlx4_cmd_context ;
static int mlx4_status_to_errno(u8 status)
static int cmd_pending(struct mlx4_dev *dev)
static int mlx4_cmd_post(struct mlx4_dev *dev, u64 in_param, u64 out_param,
u32 in_modifier, u8 op_modifier, u16 op, u16 token,
int event)
static int mlx4_cmd_poll(struct mlx4_dev *dev, u64 in_param, u64 *out_param,
int out_is_imm, u32 in_modifier, u8 op_modifier,
u16 op, unsigned long timeout)
void mlx4_cmd_event(struct mlx4_dev *dev, u16 token, u8 status, u64 out_param)
static int mlx4_cmd_wait(struct mlx4_dev *dev, u64 in_param, u64 *out_param,
int out_is_imm, u32 in_modifier, u8 op_modifier,
u16 op, unsigned long timeout)
int __mlx4_cmd(struct mlx4_dev *dev, u64 in_param, u64 *out_param,
int out_is_imm, u32 in_modifier, u8 op_modifier,
u16 op, unsigned long timeout)
EXPORT_SYMBOL_GPL(__mlx4_cmd);
int mlx4_cmd_init(struct mlx4_dev *dev)
void mlx4_cmd_cleanup(struct mlx4_dev *dev)
int mlx4_cmd_use_events(struct mlx4_dev *dev)
void mlx4_cmd_use_polling(struct mlx4_dev *dev)
struct mlx4_cmd_mailbox *mlx4_alloc_cmd_mailbox(struct mlx4_dev *dev)
EXPORT_SYMBOL_GPL(mlx4_alloc_cmd_mailbox);
void mlx4_free_cmd_mailbox(struct mlx4_dev *dev, struct mlx4_cmd_mailbox *mailbox)
EXPORT_SYMBOL_GPL(mlx4_free_cmd_mailbox);
