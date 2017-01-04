static int acpi_register_gsi_xen_hvm(struct device *dev, u32 gsi,
int trigger, int polarity)
#if defined(CONFIG_PCI_MSI)
struct xen_pci_frontend_ops *xen_pci_frontend;
EXPORT_SYMBOL_GPL(xen_pci_frontend);
#define XEN_PIRQ_MSI_DATA  (MSI_DATA_TRIGGER_EDGE | \
MSI_DATA_LEVEL_ASSERT | (3 << 8) | MSI_DATA_VECTOR(0))
static void xen_msi_compose_msg(struct pci_dev *pdev, unsigned int pirq,
struct msi_msg *msg)
static int xen_hvm_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
static int xen_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
static void xen_teardown_msi_irqs(struct pci_dev *dev)
static void xen_teardown_msi_irq(unsigned int irq)
static int xen_initdom_setup_msi_irqs(struct pci_dev *dev, int nvec, int type)
static int xen_pcifront_enable_irq(struct pci_dev *dev)
int __init pci_xen_init(void)
int __init pci_xen_hvm_init(void)
static int xen_register_pirq(u32 gsi, int gsi_override, int triggering)
static int xen_register_gsi(u32 gsi, int gsi_override, int triggering, int polarity)
static __init void xen_setup_acpi_sci(void)
static int acpi_register_gsi_xen(struct device *dev, u32 gsi,
int trigger, int polarity)
static int __init pci_xen_initial_domain(void)
void __init xen_setup_pirqs(void)
struct xen_device_domain_owner ;
static DEFINE_SPINLOCK(dev_domain_list_spinlock);
static struct list_head dev_domain_list = LIST_HEAD_INIT(dev_domain_list);
static struct xen_device_domain_owner *find_device(struct pci_dev *dev)
int xen_find_device_domain_owner(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(xen_find_device_domain_owner);
int xen_register_device_domain_owner(struct pci_dev *dev, uint16_t domain)
EXPORT_SYMBOL_GPL(xen_register_device_domain_owner);
int xen_unregister_device_domain_owner(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(xen_unregister_device_domain_owner);
