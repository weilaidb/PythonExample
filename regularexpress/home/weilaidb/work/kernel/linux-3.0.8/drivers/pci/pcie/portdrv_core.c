static void release_pcie_device(struct device *dev)
static int pcie_port_msix_add_entry(
struct msix_entry *entries, int new_entry, int nr_entries)
static int pcie_port_enable_msix(struct pci_dev *dev, int *vectors, int mask)
static int init_service_irqs(struct pci_dev *dev, int *irqs, int mask)
static void cleanup_service_irqs(struct pci_dev *dev)
static int get_port_device_capability(struct pci_dev *dev)
static int pcie_device_init(struct pci_dev *pdev, int service, int irq)
int pcie_port_device_register(struct pci_dev *dev)
static int suspend_iter(struct device *dev, void *data)
int pcie_port_device_suspend(struct device *dev)
static int resume_iter(struct device *dev, void *data)
int pcie_port_device_resume(struct device *dev)
static int remove_iter(struct device *dev, void *data)
void pcie_port_device_remove(struct pci_dev *dev)
static int pcie_port_probe_service(struct device *dev)
static int pcie_port_remove_service(struct device *dev)
static void pcie_port_shutdown_service(struct device *dev)
int pcie_port_service_register(struct pcie_port_service_driver *new)
EXPORT_SYMBOL(pcie_port_service_register);
void pcie_port_service_unregister(struct pcie_port_service_driver *drv)
EXPORT_SYMBOL(pcie_port_service_unregister);