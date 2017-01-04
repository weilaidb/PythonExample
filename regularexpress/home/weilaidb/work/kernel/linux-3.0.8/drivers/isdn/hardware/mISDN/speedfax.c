#define SPEEDFAX_REV	"2.0"
#define PCI_SUBVENDOR_SPEEDFAX_PYRAMID	0x51
#define PCI_SUBVENDOR_SPEEDFAX_PCI	0x54
#define PCI_SUB_ID_SEDLBAUER		0x01
#define SFAX_PCI_ADDR		0xc8
#define SFAX_PCI_ISAC		0xd0
#define SFAX_PCI_ISAR		0xe0
#define TIGER_RESET_ADDR	0x00
#define TIGER_EXTERN_RESET_ON	0x01
#define TIGER_EXTERN_RESET_OFF	0x00
#define TIGER_AUX_CTRL		0x02
#define TIGER_AUX_DATA		0x03
#define TIGER_AUX_IRQMASK	0x05
#define TIGER_AUX_STATUS	0x07
#define SFAX_AUX_IOMASK		0xdd
#define SFAX_ISAR_RESET_BIT_OFF 0x00
#define SFAX_ISAR_RESET_BIT_ON	0x01
#define SFAX_TIGER_IRQ_BIT	0x02
#define SFAX_LED1_BIT		0x08
#define SFAX_LED2_BIT		0x10
#define SFAX_PCI_RESET_ON	(SFAX_ISAR_RESET_BIT_ON)
#define SFAX_PCI_RESET_OFF	(SFAX_LED1_BIT | SFAX_LED2_BIT)
static int sfax_cnt;
static u32 debug;
static u32 irqloops = 4;
struct sfax_hw ;
static LIST_HEAD(Cards);
static DEFINE_RWLOCK(card_lock);
static void
_set_debug(struct sfax_hw *card)
static int
set_debug(const char *val, struct kernel_param *kp)
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(SPEEDFAX_REV);
MODULE_FIRMWARE("isdn/ISAR.BIN");
module_param_call(debug, set_debug, param_get_uint, &debug, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Speedfax debug mask");
module_param(irqloops, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(irqloops, "Speedfax maximal irqloops (default 4)");
IOFUNC_IND(ISAC, sfax_hw, p_isac)
IOFUNC_IND(ISAR, sfax_hw, p_isar)
static irqreturn_t
speedfax_irq(int intno, void *dev_id)
static void
enable_hwirq(struct sfax_hw *sf)
static void
disable_hwirq(struct sfax_hw *sf)
static void
reset_speedfax(struct sfax_hw *sf)
static int
sfax_ctrl(struct sfax_hw  *sf, u32 cmd, u_long arg)
static int
channel_ctrl(struct sfax_hw  *sf, struct mISDN_ctrl_req *cq)
static int
sfax_dctrl(struct mISDNchannel *ch, u32 cmd, void *arg)
static int __devinit
init_card(struct sfax_hw *sf)
static int __devinit
setup_speedfax(struct sfax_hw *sf)
static void
release_card(struct sfax_hw *card)
static int __devinit
setup_instance(struct sfax_hw *card)
static int __devinit
sfaxpci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
sfax_remove_pci(struct pci_dev *pdev)
static struct pci_device_id sfaxpci_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, sfaxpci_ids);
static struct pci_driver sfaxpci_driver = ;
static int __init
Speedfax_init(void)
static void __exit
Speedfax_cleanup(void)
module_init(Speedfax_init);
module_exit(Speedfax_cleanup);
