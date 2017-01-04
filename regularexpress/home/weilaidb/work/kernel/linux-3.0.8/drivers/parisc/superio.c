static struct superio_device sio_dev;
#undef DEBUG_SUPERIO_INIT
#define DBG_INIT(x...)  printk(x)
#define DBG_INIT(x...)
#define SUPERIO	"SuperIO"
#define PFX	SUPERIO ": "
static irqreturn_t
superio_interrupt(int parent_irq, void *devp)
static void
superio_init(struct pci_dev *pcidev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_NS, PCI_DEVICE_ID_NS_87560_LIO, superio_init);
static void superio_mask_irq(struct irq_data *d)
static void superio_unmask_irq(struct irq_data *d)
static struct irq_chip superio_interrupt_type = ;
static unsigned short expected_device[3] = ;
int superio_fixup_irq(struct pci_dev *pcidev)
static void __init superio_serial_init(void)
static void __init superio_parport_init(void)
static void superio_fixup_pci(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_EARLY(PCI_VENDOR_ID_NS, PCI_DEVICE_ID_NS_87415, superio_fixup_pci);
static int __init
superio_probe(struct pci_dev *dev, const struct pci_device_id *id)
static const struct pci_device_id superio_tbl[] = ;
static struct pci_driver superio_driver = ;
static int __init superio_modinit(void)
static void __exit superio_exit(void)
module_init(superio_modinit);
module_exit(superio_exit);
