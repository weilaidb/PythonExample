#define SERCOS_SUB_VENDOR_ID  0x1971
#define SERCOS_SUB_SYSID_3530 0x3530
#define SERCOS_SUB_SYSID_3535 0x3535
#define SERCOS_SUB_SYSID_3780 0x3780
#define IER0_OFFSET 0x08
#define ISR0_OFFSET 0x18
struct sercos3_priv ;
static void sercos3_disable_interrupts(struct uio_info *info,
struct sercos3_priv *priv)
static void sercos3_enable_interrupts(struct uio_info *info,
struct sercos3_priv *priv)
static irqreturn_t sercos3_handler(int irq, struct uio_info *info)
static int sercos3_irqcontrol(struct uio_info *info, s32 irq_on)
static int sercos3_setup_iomem(struct pci_dev *dev, struct uio_info *info,
int n, int pci_bar)
static int __devinit sercos3_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void sercos3_pci_remove(struct pci_dev *dev)
static struct pci_device_id sercos3_pci_ids[] __devinitdata = ;
static struct pci_driver sercos3_pci_driver = ;
static int __init sercos3_init_module(void)
static void __exit sercos3_exit_module(void)
module_init(sercos3_init_module);
module_exit(sercos3_exit_module);
MODULE_DESCRIPTION("UIO driver for the Automata Sercos III PCI card");
MODULE_AUTHOR("John Ogness <john.ogness@linutronix.de>");
MODULE_LICENSE("GPL v2");
