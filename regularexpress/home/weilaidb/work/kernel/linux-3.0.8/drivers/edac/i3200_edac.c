#define I3200_REVISION        "1.1"
#define EDAC_MOD_STR        "i3200_edac"
#define PCI_DEVICE_ID_INTEL_3200_HB    0x29f0
#define I3200_RANKS		8
#define I3200_RANKS_PER_CHANNEL	4
#define I3200_CHANNELS		2
#define I3200_MCHBAR_LOW	0x48
#define I3200_MCHBAR_HIGH	0x4c
#define I3200_MCHBAR_MASK	0xfffffc000ULL
#define I3200_MMR_WINDOW_SIZE	16384
#define I3200_TOM		0xa0
#define I3200_TOM_MASK		0x3ff
#define I3200_TOM_SHIFT		26
#define I3200_ERRSTS		0xc8
#define I3200_ERRSTS_UE		0x0002
#define I3200_ERRSTS_CE		0x0001
#define I3200_ERRSTS_BITS	(I3200_ERRSTS_UE | I3200_ERRSTS_CE)
#define I3200_C0DRB	0x200
#define I3200_C1DRB	0x600
#define I3200_DRB_MASK	0x3ff
#define I3200_DRB_SHIFT	26
#define I3200_C0ECCERRLOG	0x280
#define I3200_C1ECCERRLOG		0x680
#define I3200_ECCERRLOG_CE		0x1
#define I3200_ECCERRLOG_UE		0x2
#define I3200_ECCERRLOG_RANK_BITS	0x18000000
#define I3200_ECCERRLOG_RANK_SHIFT	27
#define I3200_ECCERRLOG_SYNDROME_BITS	0xff0000
#define I3200_ECCERRLOG_SYNDROME_SHIFT	16
#define I3200_CAPID0			0xe0
struct i3200_priv ;
static int nr_channels;
static inline __u64 readq(const volatile void __iomem *addr)
static int how_many_channels(struct pci_dev *pdev)
static unsigned long eccerrlog_syndrome(u64 log)
static int eccerrlog_row(int channel, u64 log)
enum i3200_chips ;
struct i3200_dev_info ;
struct i3200_error_info ;
static const struct i3200_dev_info i3200_devs[] = ;
static struct pci_dev *mci_pdev;
static int i3200_registered = 1;
static void i3200_clear_error_info(struct mem_ctl_info *mci)
static void i3200_get_and_clear_error_info(struct mem_ctl_info *mci,
struct i3200_error_info *info)
static void i3200_process_error_info(struct mem_ctl_info *mci,
struct i3200_error_info *info)
static void i3200_check(struct mem_ctl_info *mci)
void __iomem *i3200_map_mchbar(struct pci_dev *pdev)
static void i3200_get_drbs(void __iomem *window,
u16 drbs[I3200_CHANNELS][I3200_RANKS_PER_CHANNEL])
static bool i3200_is_stacked(struct pci_dev *pdev,
u16 drbs[I3200_CHANNELS][I3200_RANKS_PER_CHANNEL])
static unsigned long drb_to_nr_pages(
u16 drbs[I3200_CHANNELS][I3200_RANKS_PER_CHANNEL], bool stacked,
int channel, int rank)
static int i3200_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit i3200_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit i3200_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i3200_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i3200_pci_tbl);
static struct pci_driver i3200_driver = ;
static int __init i3200_init(void)
static void __exit i3200_exit(void)
module_init(i3200_init);
module_exit(i3200_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Akamai Technologies, Inc.");
MODULE_DESCRIPTION("MC support for Intel 3200 memory hub controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
