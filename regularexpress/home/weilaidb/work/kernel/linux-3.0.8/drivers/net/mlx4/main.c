MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("Mellanox ConnectX HCA low-level driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
struct workqueue_struct *mlx4_wq;
int mlx4_debug_level = 0;
module_param_named(debug_level, mlx4_debug_level, int, 0644);
MODULE_PARM_DESC(debug_level, "Enable debug tracing if > 0");
static int msi_x = 1;
module_param(msi_x, int, 0444);
MODULE_PARM_DESC(msi_x, "attempt to use MSI-X if nonzero");
#define msi_x (0)
static char mlx4_version[] __devinitdata =
DRV_NAME ": Mellanox ConnectX core driver v"
DRV_VERSION " (" DRV_RELDATE ")\n";
static struct mlx4_profile default_profile = ;
static int log_num_mac = 2;
module_param_named(log_num_mac, log_num_mac, int, 0444);
MODULE_PARM_DESC(log_num_mac, "Log2 max number of MACs per ETH port (1-7)");
static int log_num_vlan;
module_param_named(log_num_vlan, log_num_vlan, int, 0444);
MODULE_PARM_DESC(log_num_vlan, "Log2 max number of VLANs per ETH port (0-7)");
static int use_prio;
module_param_named(use_prio, use_prio, bool, 0444);
MODULE_PARM_DESC(use_prio, "Enable steering by VLAN priority on ETH ports "
"(0/1, default 0)");
static int log_mtts_per_seg = ilog2(MLX4_MTT_ENTRY_PER_SEG);
module_param_named(log_mtts_per_seg, log_mtts_per_seg, int, 0444);
MODULE_PARM_DESC(log_mtts_per_seg, "Log2 number of MTT entries per segment (1-7)");
int mlx4_check_port_params(struct mlx4_dev *dev,
enum mlx4_port_type *port_type)
static void mlx4_set_port_mask(struct mlx4_dev *dev)
static int mlx4_dev_cap(struct mlx4_dev *dev, struct mlx4_dev_cap *dev_cap)
int mlx4_change_port_types(struct mlx4_dev *dev,
enum mlx4_port_type *port_types)
static ssize_t show_port_type(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_port_type(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static int mlx4_load_fw(struct mlx4_dev *dev)
static int mlx4_init_cmpt_table(struct mlx4_dev *dev, u64 cmpt_base,
int cmpt_entry_sz)
static int mlx4_init_icm(struct mlx4_dev *dev, struct mlx4_dev_cap *dev_cap,
struct mlx4_init_hca_param *init_hca, u64 icm_size)
static void mlx4_free_icms(struct mlx4_dev *dev)
static int map_bf_area(struct mlx4_dev *dev)
static void unmap_bf_area(struct mlx4_dev *dev)
static void mlx4_close_hca(struct mlx4_dev *dev)
static int mlx4_init_hca(struct mlx4_dev *dev)
static int mlx4_setup_hca(struct mlx4_dev *dev)
static void mlx4_enable_msi_x(struct mlx4_dev *dev)
static int mlx4_init_port_info(struct mlx4_dev *dev, int port)
static void mlx4_cleanup_port_info(struct mlx4_port_info *info)
static int mlx4_init_steering(struct mlx4_dev *dev)
static void mlx4_clear_steering(struct mlx4_dev *dev)
static int __mlx4_init_one(struct pci_dev *pdev, const struct pci_device_id *id)
static int __devinit mlx4_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void mlx4_remove_one(struct pci_dev *pdev)
int mlx4_restart_one(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(mlx4_pci_table) = ;
MODULE_DEVICE_TABLE(pci, mlx4_pci_table);
static struct pci_driver mlx4_driver = ;
static int __init mlx4_verify_params(void)
static int __init mlx4_init(void)
static void __exit mlx4_cleanup(void)
module_init(mlx4_init);
module_exit(mlx4_cleanup);
