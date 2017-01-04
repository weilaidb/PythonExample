enum ;
extern void __buggy_use_of_MLX4_GET(void);
extern void __buggy_use_of_MLX4_PUT(void);
static int enable_qos;
module_param(enable_qos, bool, 0444);
MODULE_PARM_DESC(enable_qos, "Enable Quality of Service support in the HCA (default: off)");
#define MLX4_GET(dest, source, offset)				      \
do  while (0)
#define MLX4_PUT(dest, source, offset)				      \
do  while (0)
static void dump_dev_cap_flags(struct mlx4_dev *dev, u32 flags)
int mlx4_MOD_STAT_CFG(struct mlx4_dev *dev, struct mlx4_mod_stat_cfg *cfg)
int mlx4_QUERY_DEV_CAP(struct mlx4_dev *dev, struct mlx4_dev_cap *dev_cap)
int mlx4_map_cmd(struct mlx4_dev *dev, u16 op, struct mlx4_icm *icm, u64 virt)
int mlx4_MAP_FA(struct mlx4_dev *dev, struct mlx4_icm *icm)
int mlx4_UNMAP_FA(struct mlx4_dev *dev)
int mlx4_RUN_FW(struct mlx4_dev *dev)
int mlx4_QUERY_FW(struct mlx4_dev *dev)
static void get_board_id(void *vsd, char *board_id)
int mlx4_QUERY_ADAPTER(struct mlx4_dev *dev, struct mlx4_adapter *adapter)
int mlx4_INIT_HCA(struct mlx4_dev *dev, struct mlx4_init_hca_param *param)
int mlx4_INIT_PORT(struct mlx4_dev *dev, int port)
EXPORT_SYMBOL_GPL(mlx4_INIT_PORT);
int mlx4_CLOSE_PORT(struct mlx4_dev *dev, int port)
EXPORT_SYMBOL_GPL(mlx4_CLOSE_PORT);
int mlx4_CLOSE_HCA(struct mlx4_dev *dev, int panic)
int mlx4_SET_ICM_SIZE(struct mlx4_dev *dev, u64 icm_size, u64 *aux_pages)
int mlx4_NOP(struct mlx4_dev *dev)
#define MLX4_WOL_SETUP_MODE (5 << 28)
int mlx4_wol_read(struct mlx4_dev *dev, u64 *config, int port)
EXPORT_SYMBOL_GPL(mlx4_wol_read);
int mlx4_wol_write(struct mlx4_dev *dev, u64 config, int port)
EXPORT_SYMBOL_GPL(mlx4_wol_write);
