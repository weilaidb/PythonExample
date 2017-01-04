MODULE_AUTHOR("Liran Liss, Yevgeny Petrilin");
MODULE_DESCRIPTION("Mellanox ConnectX HCA Ethernet driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION " ("DRV_RELDATE")");
static const char mlx4_en_version[] =
DRV_NAME ": Mellanox ConnectX HCA Ethernet driver v"
DRV_VERSION " (" DRV_RELDATE ")\n";
#define MLX4_EN_PARM_INT(X, def_val, desc) \
static unsigned int X = def_val;\
module_param(X , uint, 0444); \
MODULE_PARM_DESC(X, desc);
MLX4_EN_PARM_INT(tcp_rss, 1,
"Enable RSS for incomming TCP traffic or disabled (0)");
MLX4_EN_PARM_INT(udp_rss, 1,
"Enable RSS for incomming UDP traffic or disabled (0)");
MLX4_EN_PARM_INT(pfctx, 0, "Priority based Flow Control policy on TX[7:0]."
" Per priority bit mask");
MLX4_EN_PARM_INT(pfcrx, 0, "Priority based Flow Control policy on RX[7:0]."
" Per priority bit mask");
int en_print(const char *level, const struct mlx4_en_priv *priv,
const char *format, ...)
static int mlx4_en_get_profile(struct mlx4_en_dev *mdev)
static void *mlx4_en_get_netdev(struct mlx4_dev *dev, void *ctx, u8 port)
static void mlx4_en_event(struct mlx4_dev *dev, void *endev_ptr,
enum mlx4_dev_event event, int port)
static void mlx4_en_remove(struct mlx4_dev *dev, void *endev_ptr)
static void *mlx4_en_add(struct mlx4_dev *dev)
static struct mlx4_interface mlx4_en_interface = ;
static int __init mlx4_en_init(void)
static void __exit mlx4_en_cleanup(void)
module_init(mlx4_en_init);
module_exit(mlx4_en_cleanup);
