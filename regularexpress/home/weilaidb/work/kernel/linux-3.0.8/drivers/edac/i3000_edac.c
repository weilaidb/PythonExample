#define I3000_REVISION		"1.1"
#define EDAC_MOD_STR		"i3000_edac"
#define I3000_RANKS		8
#define I3000_RANKS_PER_CHANNEL	4
#define I3000_CHANNELS		2
#define I3000_MCHBAR		0x44
#define I3000_MCHBAR_MASK	0xffffc000
#define I3000_MMR_WINDOW_SIZE	16384
#define I3000_EDEAP	0x70
#define I3000_DEAP	0x58
#define I3000_DEAP_GRAIN 		(1 << 7)
static inline unsigned long deap_pfn(u8 edeap, u32 deap)
static inline unsigned long deap_offset(u32 deap)
static inline int deap_channel(u32 deap)
#define I3000_DERRSYN	0x5c
#define I3000_ERRSTS	0xc8
#define I3000_ERRSTS_BITS	0x0b03
#define I3000_ERRSTS_UE		0x0002
#define I3000_ERRSTS_CE		0x0001
#define I3000_ERRCMD	0xca
#define I3000_DRB_SHIFT 25
#define I3000_C0DRB	0x100
#define I3000_C1DRB	0x180
#define I3000_C0DRA	0x108
#define I3000_C1DRA	0x188
static inline unsigned char odd_rank_attrib(unsigned char dra)
static inline unsigned char even_rank_attrib(unsigned char dra)
#define I3000_C0DRC0	0x120
#define I3000_C0DRC1	0x124
enum i3000p_chips ;
struct i3000_dev_info ;
struct i3000_error_info ;
static const struct i3000_dev_info i3000_devs[] = ;
static struct pci_dev *mci_pdev;
static int i3000_registered = 1;
static struct edac_pci_ctl_info *i3000_pci;
static void i3000_get_error_info(struct mem_ctl_info *mci,
struct i3000_error_info *info)
static int i3000_process_error_info(struct mem_ctl_info *mci,
struct i3000_error_info *info,
int handle_errors)
static void i3000_check(struct mem_ctl_info *mci)
static int i3000_is_interleaved(const unsigned char *c0dra,
const unsigned char *c1dra,
const unsigned char *c0drb,
const unsigned char *c1drb)
static int i3000_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit i3000_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit i3000_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i3000_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i3000_pci_tbl);
static struct pci_driver i3000_driver = ;
static int __init i3000_init(void)
static void __exit i3000_exit(void)
module_init(i3000_init);
module_exit(i3000_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Akamai Technologies Arthur Ulfeldt/Jason Uhlenkott");
MODULE_DESCRIPTION("MC support for Intel 3000 memory hub controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
