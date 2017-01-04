static struct pci_bus *
find_bus_among_children(struct pci_bus *bus,
struct device_node *dn)
struct pci_bus *
pcibios_find_pci_bus(struct device_node *dn)
EXPORT_SYMBOL_GPL(pcibios_find_pci_bus);
void pcibios_remove_pci_devices(struct pci_bus *bus)
EXPORT_SYMBOL_GPL(pcibios_remove_pci_devices);
void pcibios_add_pci_devices(struct pci_bus * bus)
EXPORT_SYMBOL_GPL(pcibios_add_pci_devices);
struct pci_controller * __devinit init_phb_dynamic(struct device_node *dn)
EXPORT_SYMBOL_GPL(init_phb_dynamic);
int remove_phb_dynamic(struct pci_controller *phb)
EXPORT_SYMBOL_GPL(remove_phb_dynamic);
