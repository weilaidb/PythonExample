DECLARE_RWSEM(pci_bus_sem);
struct pci_dev *
pci_find_upstream_pcie_bridge(struct pci_dev *pdev)
static struct pci_bus *pci_do_find_bus(struct pci_bus *bus, unsigned char busnr)
struct pci_bus * pci_find_bus(int domain, int busnr)
struct pci_bus *
pci_find_next_bus(const struct pci_bus *from)
struct pci_dev * pci_get_slot(struct pci_bus *bus, unsigned int devfn)
struct pci_dev *pci_get_domain_bus_and_slot(int domain, unsigned int bus,
unsigned int devfn)
EXPORT_SYMBOL(pci_get_domain_bus_and_slot);
static int match_pci_dev_by_id(struct device *dev, void *data)
static struct pci_dev *pci_get_dev_by_id(const struct pci_device_id *id,
struct pci_dev *from)
struct pci_dev *pci_get_subsys(unsigned int vendor, unsigned int device,
unsigned int ss_vendor, unsigned int ss_device,
struct pci_dev *from)
struct pci_dev *
pci_get_device(unsigned int vendor, unsigned int device, struct pci_dev *from)
struct pci_dev *pci_get_class(unsigned int class, struct pci_dev *from)
int pci_dev_present(const struct pci_device_id *ids)
EXPORT_SYMBOL(pci_dev_present);
EXPORT_SYMBOL(pci_find_bus);
EXPORT_SYMBOL(pci_find_next_bus);
EXPORT_SYMBOL(pci_get_device);
EXPORT_SYMBOL(pci_get_subsys);
EXPORT_SYMBOL(pci_get_slot);
EXPORT_SYMBOL(pci_get_class);
