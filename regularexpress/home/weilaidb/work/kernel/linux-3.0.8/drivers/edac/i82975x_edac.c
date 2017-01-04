#define I82975X_REVISION	" Ver: 1.0.0"
#define EDAC_MOD_STR		"i82975x_edac"
#define i82975x_printk(level, fmt, arg...) \
edac_printk(level, "i82975x", fmt, ##arg)
#define i82975x_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "i82975x", fmt, ##arg)
#define PCI_DEVICE_ID_INTEL_82975_0	0x277c
#define I82975X_NR_CSROWS(nr_chans)		(8/(nr_chans))
#define I82975X_EAP		0x58
#define I82975X_DERRSYN		0x5c
#define I82975X_DES		0x5d
#define I82975X_ERRSTS		0xc8
#define I82975X_ERRCMD		0xca
#define I82975X_SMICMD		0xcc
#define I82975X_SCICMD		0xce
#define I82975X_XEAP	0xfc
#define I82975X_MCHBAR		0x44
#define I82975X_DRB_SHIFT 25
#define I82975X_DRB		0x100
#define I82975X_DRB_CH0R0		0x100
#define I82975X_DRB_CH0R1		0x101
#define I82975X_DRB_CH0R2		0x102
#define I82975X_DRB_CH0R3		0x103
#define I82975X_DRB_CH1R0		0x180
#define I82975X_DRB_CH1R1		0x181
#define I82975X_DRB_CH1R2		0x182
#define I82975X_DRB_CH1R3		0x183
#define I82975X_DRA		0x108
#define I82975X_DRA_CH0R01		0x108
#define I82975X_DRA_CH0R23		0x109
#define I82975X_DRA_CH1R01		0x188
#define I82975X_DRA_CH1R23		0x189
#define I82975X_BNKARC	0x10e
#define I82975X_C0BNKARC	0x10e
#define I82975X_C1BNKARC	0x18e
#define I82975X_DRC		0x120
#define I82975X_DRC_CH0M0		0x120
#define I82975X_DRC_CH1M0		0x1A0
#define I82975X_DRC_M1	0x124
#define I82975X_DRC_CH0M1		0x124
#define I82975X_DRC_CH1M1		0x1A4
enum i82975x_chips ;
struct i82975x_pvt ;
struct i82975x_dev_info ;
struct i82975x_error_info ;
static const struct i82975x_dev_info i82975x_devs[] = ;
static struct pci_dev *mci_pdev;
static int i82975x_registered = 1;
static void i82975x_get_error_info(struct mem_ctl_info *mci,
struct i82975x_error_info *info)
static int i82975x_process_error_info(struct mem_ctl_info *mci,
struct i82975x_error_info *info, int handle_errors)
static void i82975x_check(struct mem_ctl_info *mci)
static int dual_channel_active(void __iomem *mch_window)
static enum dev_type i82975x_dram_type(void __iomem *mch_window, int rank)
static void i82975x_init_csrows(struct mem_ctl_info *mci,
struct pci_dev *pdev, void __iomem *mch_window)
static void i82975x_print_dram_timings(void __iomem *mch_window)
static int i82975x_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit i82975x_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit i82975x_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i82975x_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i82975x_pci_tbl);
static struct pci_driver i82975x_driver = ;
static int __init i82975x_init(void)
static void __exit i82975x_exit(void)
module_init(i82975x_init);
module_exit(i82975x_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arvind R. <arvino55@gmail.com>");
MODULE_DESCRIPTION("MC support for Intel 82975 memory hub controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
