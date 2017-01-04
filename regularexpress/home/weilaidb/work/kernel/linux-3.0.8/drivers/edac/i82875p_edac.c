#define I82875P_REVISION	" Ver: 2.0.2"
#define EDAC_MOD_STR		"i82875p_edac"
#define i82875p_printk(level, fmt, arg...) \
edac_printk(level, "i82875p", fmt, ##arg)
#define i82875p_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "i82875p", fmt, ##arg)
#define PCI_DEVICE_ID_INTEL_82875_0	0x2578
#define PCI_DEVICE_ID_INTEL_82875_6	0x257e
#define I82875P_NR_CSROWS(nr_chans) (8/(nr_chans))
#define I82875P_EAP		0x58
#define I82875P_DERRSYN		0x5c
#define I82875P_DES		0x5d
#define I82875P_ERRSTS		0xc8
#define I82875P_ERRCMD		0xca
#define I82875P_PCICMD6		0x04
#define I82875P_BAR6		0x10
#define I82875P_DRB_SHIFT 26
#define I82875P_DRB		0x00
#define I82875P_DRA		0x10
#define I82875P_DRC		0x68
enum i82875p_chips ;
struct i82875p_pvt ;
struct i82875p_dev_info ;
struct i82875p_error_info ;
static const struct i82875p_dev_info i82875p_devs[] = ;
static struct pci_dev *mci_pdev;
static struct edac_pci_ctl_info *i82875p_pci;
static void i82875p_get_error_info(struct mem_ctl_info *mci,
struct i82875p_error_info *info)
static int i82875p_process_error_info(struct mem_ctl_info *mci,
struct i82875p_error_info *info,
int handle_errors)
static void i82875p_check(struct mem_ctl_info *mci)
static int i82875p_setup_overfl_dev(struct pci_dev *pdev,
struct pci_dev **ovrfl_pdev,
void __iomem **ovrfl_window)
static inline int dual_channel_active(u32 drc)
static void i82875p_init_csrows(struct mem_ctl_info *mci,
struct pci_dev *pdev,
void __iomem * ovrfl_window, u32 drc)
static int i82875p_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit i82875p_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit i82875p_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i82875p_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i82875p_pci_tbl);
static struct pci_driver i82875p_driver = ;
static int __init i82875p_init(void)
static void __exit i82875p_exit(void)
module_init(i82875p_init);
module_exit(i82875p_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Linux Networx (http:
MODULE_DESCRIPTION("MC support for Intel 82875 memory hub controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
