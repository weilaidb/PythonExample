void pci_update_resource(struct pci_dev *dev, int resno)
int pci_claim_resource(struct pci_dev *dev, int resource)
EXPORT_SYMBOL(pci_claim_resource);
void pci_disable_bridge_window(struct pci_dev *dev)
static int __pci_assign_resource(struct pci_bus *bus, struct pci_dev *dev,
int resno)
int pci_assign_resource(struct pci_dev *dev, int resno)
void pdev_sort_resources(struct pci_dev *dev, struct resource_list *head)
int pci_enable_resources(struct pci_dev *dev, int mask)
