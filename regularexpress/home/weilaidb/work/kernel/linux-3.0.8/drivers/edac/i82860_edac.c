#define  I82860_REVISION " Ver: 2.0.2"
#define EDAC_MOD_STR	"i82860_edac"
#define i82860_printk(level, fmt, arg...) \
edac_printk(level, "i82860", fmt, ##arg)
#define i82860_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "i82860", fmt, ##arg)
#define PCI_DEVICE_ID_INTEL_82860_0	0x2531
#define I82860_MCHCFG 0x50
#define I82860_GBA 0x60
#define I82860_GBA_MASK 0x7FF
#define I82860_GBA_SHIFT 24
#define I82860_ERRSTS 0xC8
#define I82860_EAP 0xE4
#define I82860_DERRCTL_STS 0xE2
enum i82860_chips ;
struct i82860_dev_info ;
struct i82860_error_info ;
static const struct i82860_dev_info i82860_devs[] = ;
static struct pci_dev *mci_pdev;
static struct edac_pci_ctl_info *i82860_pci;
static void i82860_get_error_info(struct mem_ctl_info *mci,
struct i82860_error_info *info)
static int i82860_process_error_info(struct mem_ctl_info *mci,
struct i82860_error_info *info,
int handle_errors)
static void i82860_check(struct mem_ctl_info *mci)
static void i82860_init_csrows(struct mem_ctl_info *mci, struct pci_dev *pdev)
static int i82860_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit i82860_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit i82860_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i82860_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i82860_pci_tbl);
static struct pci_driver i82860_driver = ;
static int __init i82860_init(void)
static void __exit i82860_exit(void)
module_init(i82860_init);
module_exit(i82860_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Red Hat Inc. (http:
"Ben Woodard <woodard@redhat.com>");
MODULE_DESCRIPTION("ECC support for Intel 82860 memory hub controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
