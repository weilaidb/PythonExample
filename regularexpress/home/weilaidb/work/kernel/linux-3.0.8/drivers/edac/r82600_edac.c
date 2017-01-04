#define R82600_REVISION	" Ver: 2.0.2"
#define EDAC_MOD_STR	"r82600_edac"
#define r82600_printk(level, fmt, arg...) \
edac_printk(level, "r82600", fmt, ##arg)
#define r82600_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "r82600", fmt, ##arg)
#define R82600_NR_CSROWS 4
#define R82600_NR_CHANS  1
#define R82600_NR_DIMMS  4
#define R82600_BRIDGE_ID  0x8200
#define R82600_DRAMC	0x57
#define R82600_SDRAMC	0x76
#define R82600_EAP	0x80
#define R82600_DRBA	0x60
struct r82600_error_info ;
static unsigned int disable_hardware_scrub;
static struct edac_pci_ctl_info *r82600_pci;
static void r82600_get_error_info(struct mem_ctl_info *mci,
struct r82600_error_info *info)
static int r82600_process_error_info(struct mem_ctl_info *mci,
struct r82600_error_info *info,
int handle_errors)
static void r82600_check(struct mem_ctl_info *mci)
static inline int ecc_enabled(u8 dramcr)
static void r82600_init_csrows(struct mem_ctl_info *mci, struct pci_dev *pdev,
u8 dramcr)
static int r82600_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit r82600_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit r82600_remove_one(struct pci_dev *pdev)
static const struct pci_device_id r82600_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, r82600_pci_tbl);
static struct pci_driver r82600_driver = ;
static int __init r82600_init(void)
static void __exit r82600_exit(void)
module_init(r82600_init);
module_exit(r82600_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tim Small <tim@buttersideup.com> - WPAD Ltd. "
"on behalf of EADS Astrium");
MODULE_DESCRIPTION("MC support for Radisys 82600 memory controllers");
module_param(disable_hardware_scrub, bool, 0644);
MODULE_PARM_DESC(disable_hardware_scrub,
"If set, disable the chipset's automatic scrub for CEs");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
