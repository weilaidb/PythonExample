#define	E7XXX_REVISION " Ver: 2.0.2"
#define	EDAC_MOD_STR	"e7xxx_edac"
#define e7xxx_printk(level, fmt, arg...) \
edac_printk(level, "e7xxx", fmt, ##arg)
#define e7xxx_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "e7xxx", fmt, ##arg)
#define PCI_DEVICE_ID_INTEL_7205_0	0x255d
#define PCI_DEVICE_ID_INTEL_7205_1_ERR	0x2551
#define PCI_DEVICE_ID_INTEL_7500_0	0x2540
#define PCI_DEVICE_ID_INTEL_7500_1_ERR	0x2541
#define PCI_DEVICE_ID_INTEL_7501_0	0x254c
#define PCI_DEVICE_ID_INTEL_7501_1_ERR	0x2541
#define PCI_DEVICE_ID_INTEL_7505_0	0x2550
#define PCI_DEVICE_ID_INTEL_7505_1_ERR	0x2551
#define E7XXX_NR_CSROWS		8
#define E7XXX_NR_DIMMS		8
#define E7XXX_DRB		0x60
#define E7XXX_DRA		0x70
#define E7XXX_DRC		0x7C
#define E7XXX_TOLM		0xC4
#define E7XXX_REMAPBASE		0xC6
#define E7XXX_REMAPLIMIT	0xC8
#define E7XXX_DRAM_FERR		0x80
#define E7XXX_DRAM_NERR		0x82
#define E7XXX_DRAM_CELOG_ADD	0xA0
#define E7XXX_DRAM_UELOG_ADD	0xB0
#define E7XXX_DRAM_CELOG_SYNDROME 0xD0
enum e7xxx_chips ;
struct e7xxx_pvt ;
struct e7xxx_dev_info ;
struct e7xxx_error_info ;
static struct edac_pci_ctl_info *e7xxx_pci;
static const struct e7xxx_dev_info e7xxx_devs[] = ;
static inline int e7xxx_find_channel(u16 syndrome)
static unsigned long ctl_page_to_phys(struct mem_ctl_info *mci,
unsigned long page)
static void process_ce(struct mem_ctl_info *mci, struct e7xxx_error_info *info)
static void process_ce_no_info(struct mem_ctl_info *mci)
static void process_ue(struct mem_ctl_info *mci, struct e7xxx_error_info *info)
static void process_ue_no_info(struct mem_ctl_info *mci)
static void e7xxx_get_error_info(struct mem_ctl_info *mci,
struct e7xxx_error_info *info)
static int e7xxx_process_error_info(struct mem_ctl_info *mci,
struct e7xxx_error_info *info,
int handle_errors)
static void e7xxx_check(struct mem_ctl_info *mci)
static inline int dual_channel_active(u32 drc, int dev_idx)
static inline int drb_granularity(u32 drc, int dev_idx)
static void e7xxx_init_csrows(struct mem_ctl_info *mci, struct pci_dev *pdev,
int dev_idx, u32 drc)
static int e7xxx_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit e7xxx_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit e7xxx_remove_one(struct pci_dev *pdev)
static const struct pci_device_id e7xxx_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, e7xxx_pci_tbl);
static struct pci_driver e7xxx_driver = ;
static int __init e7xxx_init(void)
static void __exit e7xxx_exit(void)
module_init(e7xxx_init);
module_exit(e7xxx_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Linux Networx (http:
"Based on.work by Dan Hollis et al");
MODULE_DESCRIPTION("MC support for Intel e7xxx memory controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
