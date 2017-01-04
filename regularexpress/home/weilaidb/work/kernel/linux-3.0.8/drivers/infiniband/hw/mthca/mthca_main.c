MODULE_AUTHOR("Roland Dreier");
MODULE_DESCRIPTION("Mellanox InfiniBand HCA low-level driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
int mthca_debug_level = 0;
module_param_named(debug_level, mthca_debug_level, int, 0644);
MODULE_PARM_DESC(debug_level, "Enable debug tracing if > 0");
static int msi_x = 1;
module_param(msi_x, int, 0444);
MODULE_PARM_DESC(msi_x, "attempt to use MSI-X if nonzero");
#define msi_x (0)
static int tune_pci = 0;
module_param(tune_pci, int, 0444);
MODULE_PARM_DESC(tune_pci, "increase PCI burst from the default set by BIOS if nonzero");
DEFINE_MUTEX(mthca_device_mutex);
#define MTHCA_DEFAULT_NUM_QP            (1 << 16)
#define MTHCA_DEFAULT_RDB_PER_QP        (1 << 2)
#define MTHCA_DEFAULT_NUM_CQ            (1 << 16)
#define MTHCA_DEFAULT_NUM_MCG           (1 << 13)
#define MTHCA_DEFAULT_NUM_MPT           (1 << 17)
#define MTHCA_DEFAULT_NUM_MTT           (1 << 20)
#define MTHCA_DEFAULT_NUM_UDAV          (1 << 15)
#define MTHCA_DEFAULT_NUM_RESERVED_MTTS (1 << 18)
#define MTHCA_DEFAULT_NUM_UARC_SIZE     (1 << 18)
static struct mthca_profile hca_profile = ;
module_param_named(num_qp, hca_profile.num_qp, int, 0444);
MODULE_PARM_DESC(num_qp, "maximum number of QPs per HCA");
module_param_named(rdb_per_qp, hca_profile.rdb_per_qp, int, 0444);
MODULE_PARM_DESC(rdb_per_qp, "number of RDB buffers per QP");
module_param_named(num_cq, hca_profile.num_cq, int, 0444);
MODULE_PARM_DESC(num_cq, "maximum number of CQs per HCA");
module_param_named(num_mcg, hca_profile.num_mcg, int, 0444);
MODULE_PARM_DESC(num_mcg, "maximum number of multicast groups per HCA");
module_param_named(num_mpt, hca_profile.num_mpt, int, 0444);
MODULE_PARM_DESC(num_mpt,
"maximum number of memory protection table entries per HCA");
module_param_named(num_mtt, hca_profile.num_mtt, int, 0444);
MODULE_PARM_DESC(num_mtt,
"maximum number of memory translation table segments per HCA");
module_param_named(num_udav, hca_profile.num_udav, int, 0444);
MODULE_PARM_DESC(num_udav, "maximum number of UD address vectors per HCA");
module_param_named(fmr_reserved_mtts, hca_profile.fmr_reserved_mtts, int, 0444);
MODULE_PARM_DESC(fmr_reserved_mtts,
"number of memory translation table segments reserved for FMR");
static int log_mtts_per_seg = ilog2(MTHCA_MTT_SEG_SIZE / 8);
module_param_named(log_mtts_per_seg, log_mtts_per_seg, int, 0444);
MODULE_PARM_DESC(log_mtts_per_seg, "Log2 number of MTT entries per segment (1-5)");
static char mthca_version[] __devinitdata =
DRV_NAME ": Mellanox InfiniBand HCA driver v"
DRV_VERSION " (" DRV_RELDATE ")\n";
static int mthca_tune_pci(struct mthca_dev *mdev)
static int mthca_dev_lim(struct mthca_dev *mdev, struct mthca_dev_lim *dev_lim)
static int mthca_init_tavor(struct mthca_dev *mdev)
static int mthca_load_fw(struct mthca_dev *mdev)
static int mthca_init_icm(struct mthca_dev *mdev,
struct mthca_dev_lim *dev_lim,
struct mthca_init_hca_param *init_hca,
u64 icm_size)
static void mthca_free_icms(struct mthca_dev *mdev)
static int mthca_init_arbel(struct mthca_dev *mdev)
static void mthca_close_hca(struct mthca_dev *mdev)
static int mthca_init_hca(struct mthca_dev *mdev)
static int mthca_setup_hca(struct mthca_dev *dev)
static int mthca_enable_msi_x(struct mthca_dev *mdev)
enum ;
#define MTHCA_FW_VER(major, minor, subminor) \
(((u64) (major) << 32) | ((u64) (minor) << 16) | (u64) (subminor))
static struct  mthca_hca_table[] = ;
static int __mthca_init_one(struct pci_dev *pdev, int hca_type)
static void __mthca_remove_one(struct pci_dev *pdev)
int __mthca_restart_one(struct pci_dev *pdev)
static int __devinit mthca_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit mthca_remove_one(struct pci_dev *pdev)
static struct pci_device_id mthca_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, mthca_pci_table);
static struct pci_driver mthca_driver = ;
static void __init __mthca_check_profile_val(const char *name, int *pval,
int pval_default)
#define mthca_check_profile_val(name, default)				\
__mthca_check_profile_val(#name, &hca_profile.name, default)
static void __init mthca_validate_profile(void)
static int __init mthca_init(void)
static void __exit mthca_cleanup(void)
module_init(mthca_init);
module_exit(mthca_cleanup);
