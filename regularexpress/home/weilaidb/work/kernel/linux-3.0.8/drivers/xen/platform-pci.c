#define DRV_NAME    "xen-platform-pci"
MODULE_AUTHOR("ssmith@xensource.com and stefano.stabellini@eu.citrix.com");
MODULE_DESCRIPTION("Xen platform PCI device");
MODULE_LICENSE("GPL");
static unsigned long platform_mmio;
static unsigned long platform_mmio_alloc;
static unsigned long platform_mmiolen;
static uint64_t callback_via;
unsigned long alloc_xen_mmio(unsigned long len)
static uint64_t get_callback_via(struct pci_dev *pdev)
static irqreturn_t do_hvm_evtchn_intr(int irq, void *dev_id)
static int xen_allocate_irq(struct pci_dev *pdev)
static int platform_pci_resume(struct pci_dev *pdev)
static int __devinit platform_pci_init(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_device_id platform_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, platform_pci_tbl);
static struct pci_driver platform_driver = ;
static int __init platform_pci_module_init(void)
module_init(platform_pci_module_init);
