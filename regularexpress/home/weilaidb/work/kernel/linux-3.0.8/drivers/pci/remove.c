static void pci_free_resources(struct pci_dev *dev)
static void pci_stop_dev(struct pci_dev *dev)
static void pci_destroy_dev(struct pci_dev *dev)
void pci_remove_bus(struct pci_bus *pci_bus)
EXPORT_SYMBOL(pci_remove_bus);
void pci_remove_bus_device(struct pci_dev *dev)
void pci_remove_behind_bridge(struct pci_dev *dev)
static void pci_stop_bus_devices(struct pci_bus *bus)
void pci_stop_bus_device(struct pci_dev *dev)
EXPORT_SYMBOL(pci_remove_bus_device);
EXPORT_SYMBOL(pci_remove_behind_bridge);
EXPORT_SYMBOL_GPL(pci_stop_bus_device);
