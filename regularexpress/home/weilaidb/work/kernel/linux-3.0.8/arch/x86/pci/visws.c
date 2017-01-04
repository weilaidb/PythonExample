static int pci_visws_enable_irq(struct pci_dev *dev)
static void pci_visws_disable_irq(struct pci_dev *dev)
unsigned int pci_bus0, pci_bus1;
static int __init visws_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
void __init pcibios_update_irq(struct pci_dev *dev, int irq)
int __init pci_visws_init(void)
