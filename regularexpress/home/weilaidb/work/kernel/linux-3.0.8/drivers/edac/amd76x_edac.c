#define AMD76X_REVISION	" Ver: 2.0.2"
#define EDAC_MOD_STR	"amd76x_edac"
#define amd76x_printk(level, fmt, arg...) \
edac_printk(level, "amd76x", fmt, ##arg)
#define amd76x_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "amd76x", fmt, ##arg)
#define AMD76X_NR_CSROWS 8
#define AMD76X_NR_CHANS  1
#define AMD76X_NR_DIMMS  4
#define AMD76X_ECC_MODE_STATUS	0x48
#define AMD76X_DRAM_MODE_STATUS	0x58
#define AMD76X_MEM_BASE_ADDR	0xC0
struct amd76x_error_info ;
enum amd76x_chips ;
struct amd76x_dev_info ;
static const struct amd76x_dev_info amd76x_devs[] = ;
static struct edac_pci_ctl_info *amd76x_pci;
static void amd76x_get_error_info(struct mem_ctl_info *mci,
struct amd76x_error_info *info)
static int amd76x_process_error_info(struct mem_ctl_info *mci,
struct amd76x_error_info *info,
int handle_errors)
static void amd76x_check(struct mem_ctl_info *mci)
static void amd76x_init_csrows(struct mem_ctl_info *mci, struct pci_dev *pdev,
enum edac_type edac_mode)
static int amd76x_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit amd76x_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit amd76x_remove_one(struct pci_dev *pdev)
static const struct pci_device_id amd76x_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, amd76x_pci_tbl);
static struct pci_driver amd76x_driver = ;
static int __init amd76x_init(void)
static void __exit amd76x_exit(void)
module_init(amd76x_init);
module_exit(amd76x_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Linux Networx (http:
MODULE_DESCRIPTION("MC support for AMD 76x memory controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
