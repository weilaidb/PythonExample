#define INFINEON_REV	"1.0"
static int inf_cnt;
static u32 debug;
static u32 irqloops = 4;
enum inf_types ;
enum addr_mode ;
struct inf_cinfo ;
struct _ioaddr ;
struct _iohandle ;
struct inf_hw ;
#define PCI_SUBVENDOR_HST_SAPHIR3       0x52
#define PCI_SUBVENDOR_SEDLBAUER_PCI     0x53
#define PCI_SUB_ID_SEDLBAUER            0x01
static struct pci_device_id infineon_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, infineon_ids);
#define DIVA_HSCX_PORT		0x00
#define DIVA_HSCX_ALE		0x04
#define DIVA_ISAC_PORT		0x08
#define DIVA_ISAC_ALE		0x0C
#define DIVA_PCI_CTRL           0x10
#define DIVA_IRQ_BIT		0x01
#define DIVA_RESET_BIT		0x08
#define DIVA_EEPROM_CLK		0x40
#define DIVA_LED_A		0x10
#define DIVA_LED_B		0x20
#define DIVA_IRQ_CLR		0x80
#define PITA_ICR_REG		0x00
#define PITA_INT0_STATUS	0x02
#define PITA_MISC_REG		0x1c
#define PITA_PARA_SOFTRESET	0x01000000
#define PITA_SER_SOFTRESET	0x02000000
#define PITA_PARA_MPX_MODE	0x04000000
#define PITA_INT0_ENABLE	0x00020000
#define TIGER_RESET_ADDR	0x00
#define TIGER_EXTERN_RESET	0x01
#define TIGER_AUX_CTRL		0x02
#define TIGER_AUX_DATA		0x03
#define TIGER_AUX_IRQMASK	0x05
#define TIGER_AUX_STATUS	0x07
#define TIGER_IOMASK		0xdd
#define TIGER_IRQ_BIT		0x02
#define TIGER_IPAC_ALE		0xC0
#define TIGER_IPAC_PORT		0xC8
#define ELSA_IRQ_ADDR		0x4c
#define ELSA_IRQ_MASK		0x04
#define QS1000_IRQ_OFF		0x01
#define QS3000_IRQ_OFF		0x03
#define QS1000_IRQ_ON		0x41
#define QS3000_IRQ_ON		0x43
#define NICCY_ISAC_PORT		0x00
#define NICCY_HSCX_PORT		0x01
#define NICCY_ISAC_ALE		0x02
#define NICCY_HSCX_ALE		0x03
#define NICCY_IRQ_CTRL_REG	0x38
#define NICCY_IRQ_ENABLE	0x001f00
#define NICCY_IRQ_DISABLE	0xff0000
#define NICCY_IRQ_BIT		0x800000
#define SCT_PLX_IRQ_ADDR	0x4c
#define SCT_PLX_RESET_ADDR	0x50
#define SCT_PLX_IRQ_ENABLE	0x41
#define SCT_PLX_RESET_BIT	0x04
#define	GAZEL_IPAC_DATA_PORT	0x04
#define GAZEL_CNTRL		0x50
#define GAZEL_RESET		0x04
#define GAZEL_RESET_9050	0x40000000
#define GAZEL_INCSR		0x4C
#define GAZEL_ISAC_EN		0x08
#define GAZEL_INT_ISAC		0x20
#define GAZEL_HSCX_EN		0x01
#define GAZEL_INT_HSCX		0x04
#define GAZEL_PCI_EN		0x40
#define GAZEL_IPAC_EN		0x03
static LIST_HEAD(Cards);
static DEFINE_RWLOCK(card_lock);
static void
_set_debug(struct inf_hw *card)
static int
set_debug(const char *val, struct kernel_param *kp)
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(INFINEON_REV);
module_param_call(debug, set_debug, param_get_uint, &debug, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "infineon debug mask");
module_param(irqloops, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(irqloops, "infineon maximal irqloops (default 4)");
IOFUNC_IO(ISAC, inf_hw, isac.a.io)
IOFUNC_IO(IPAC, inf_hw, hscx.a.io)
IOFUNC_IND(ISAC, inf_hw, isac.a.io)
IOFUNC_IND(IPAC, inf_hw, hscx.a.io)
IOFUNC_MEMIO(ISAC, inf_hw, u32, isac.a.p)
IOFUNC_MEMIO(IPAC, inf_hw, u32, hscx.a.p)
static irqreturn_t
diva_irq(int intno, void *dev_id)
static irqreturn_t
diva20x_irq(int intno, void *dev_id)
static irqreturn_t
tiger_irq(int intno, void *dev_id)
static irqreturn_t
elsa_irq(int intno, void *dev_id)
static irqreturn_t
niccy_irq(int intno, void *dev_id)
static irqreturn_t
gazel_irq(int intno, void *dev_id)
static irqreturn_t
ipac_irq(int intno, void *dev_id)
static void
enable_hwirq(struct inf_hw *hw)
static void
disable_hwirq(struct inf_hw *hw)
static void
ipac_chip_reset(struct inf_hw *hw)
static void
reset_inf(struct inf_hw *hw)
static int
inf_ctrl(struct inf_hw *hw, u32 cmd, u_long arg)
static int __devinit
init_irq(struct inf_hw *hw)
static void
release_io(struct inf_hw *hw)
static int __devinit
setup_io(struct inf_hw *hw)
static void
release_card(struct inf_hw *card)
static int __devinit
setup_instance(struct inf_hw *card)
static const struct inf_cinfo inf_card_info[] = ;
static const struct inf_cinfo * __devinit
get_card_info(enum inf_types typ)
static int __devinit
inf_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
inf_remove(struct pci_dev *pdev)
static struct pci_driver infineon_driver = ;
static int __init
infineon_init(void)
static void __exit
infineon_cleanup(void)
module_init(infineon_init);
module_exit(infineon_cleanup);
