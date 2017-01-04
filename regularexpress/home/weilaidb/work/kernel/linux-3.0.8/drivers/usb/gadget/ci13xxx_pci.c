#define UDC_DRIVER_NAME   "ci13xxx_pci"
static irqreturn_t ci13xxx_pci_irq(int irq, void *pdev)
static struct ci13xxx_udc_driver ci13xxx_pci_udc_driver = ;
static int __devinit ci13xxx_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit ci13xxx_pci_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(ci13xxx_pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, ci13xxx_pci_id_table);
static struct pci_driver ci13xxx_pci_driver = ;
static int __init ci13xxx_pci_init(void)
module_init(ci13xxx_pci_init);
static void __exit ci13xxx_pci_exit(void)
module_exit(ci13xxx_pci_exit);
MODULE_AUTHOR("MIPS - David Lopo <dlopo@chipidea.mips.com>");
MODULE_DESCRIPTION("MIPS CI13XXX USB Peripheral Controller");
MODULE_LICENSE("GPL");
MODULE_VERSION("June 2008");
