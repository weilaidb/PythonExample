void pci_bus_add_resource(struct pci_bus *bus, struct resource *res,
unsigned int flags)
struct resource *pci_bus_resource_n(const struct pci_bus *bus, int n)
EXPORT_SYMBOL_GPL(pci_bus_resource_n);
void pci_bus_remove_resources(struct pci_bus *bus)
int
pci_bus_alloc_resource(struct pci_bus *bus, struct resource *res,
resource_size_t size, resource_size_t align,
resource_size_t min, unsigned int type_mask,
resource_size_t (*alignf)(void *,
const struct resource *,
resource_size_t,
resource_size_t),
void *alignf_data)
int pci_bus_add_device(struct pci_dev *dev)
int pci_bus_add_child(struct pci_bus *bus)
void pci_bus_add_devices(const struct pci_bus *bus)
void pci_enable_bridges(struct pci_bus *bus)
void pci_walk_bus(struct pci_bus *top, int (*cb)(struct pci_dev *, void *),
void *userdata)
EXPORT_SYMBOL_GPL(pci_walk_bus);
EXPORT_SYMBOL(pci_bus_alloc_resource);
EXPORT_SYMBOL_GPL(pci_bus_add_device);
EXPORT_SYMBOL(pci_bus_add_devices);
EXPORT_SYMBOL(pci_enable_bridges);
