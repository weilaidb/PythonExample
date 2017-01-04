#define X38_REVISION		"1.1"
#define EDAC_MOD_STR		"x38_edac"
#define PCI_DEVICE_ID_INTEL_X38_HB	0x29e0
#define X38_RANKS		8
#define X38_RANKS_PER_CHANNEL	4
#define X38_CHANNELS		2
#define X38_MCHBAR_LOW	0x48
#define X38_MCHBAR_HIGH	0x4c
#define X38_MCHBAR_MASK	0xfffffc000ULL
#define X38_MMR_WINDOW_SIZE	16384
#define X38_TOM	0xa0
#define X38_TOM_MASK	0x3ff
#define X38_TOM_SHIFT 26
#define X38_ERRSTS	0xc8
#define X38_ERRSTS_UE		0x0002
#define X38_ERRSTS_CE		0x0001
#define X38_ERRSTS_BITS	(X38_ERRSTS_UE | X38_ERRSTS_CE)
#define X38_C0DRB	0x200
#define X38_C1DRB	0x600
#define X38_DRB_MASK	0x3ff
#define X38_DRB_SHIFT 26
#define X38_C0ECCERRLOG 0x280
#define X38_C1ECCERRLOG 0x680
#define X38_ECCERRLOG_CE	0x1
#define X38_ECCERRLOG_UE	0x2
#define X38_ECCERRLOG_RANK_BITS	0x18000000
#define X38_ECCERRLOG_SYNDROME_BITS	0xff0000
#define X38_CAPID0 0xe0
static int x38_channel_num;
static int how_many_channel(struct pci_dev *pdev)
static unsigned long eccerrlog_syndrome(u64 log)
static int eccerrlog_row(int channel, u64 log)
enum x38_chips ;
struct x38_dev_info ;
struct x38_error_info ;
static const struct x38_dev_info x38_devs[] = ;
static struct pci_dev *mci_pdev;
static int x38_registered = 1;
static void x38_clear_error_info(struct mem_ctl_info *mci)
static u64 x38_readq(const void __iomem *addr)
static void x38_get_and_clear_error_info(struct mem_ctl_info *mci,
struct x38_error_info *info)
static void x38_process_error_info(struct mem_ctl_info *mci,
struct x38_error_info *info)
static void x38_check(struct mem_ctl_info *mci)
void __iomem *x38_map_mchbar(struct pci_dev *pdev)
static void x38_get_drbs(void __iomem *window,
u16 drbs[X38_CHANNELS][X38_RANKS_PER_CHANNEL])
static bool x38_is_stacked(struct pci_dev *pdev,
u16 drbs[X38_CHANNELS][X38_RANKS_PER_CHANNEL])
static unsigned long drb_to_nr_pages(
u16 drbs[X38_CHANNELS][X38_RANKS_PER_CHANNEL],
bool stacked, int channel, int rank)
static int x38_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit x38_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit x38_remove_one(struct pci_dev *pdev)
static const struct pci_device_id x38_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, x38_pci_tbl);
static struct pci_driver x38_driver = ;
static int __init x38_init(void)
static void __exit x38_exit(void)
module_init(x38_init);
module_exit(x38_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cluster Computing, Inc. Hitoshi Mitake");
MODULE_DESCRIPTION("MC support for Intel X38 memory hub controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
