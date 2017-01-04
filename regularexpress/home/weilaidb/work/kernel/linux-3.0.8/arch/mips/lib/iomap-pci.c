static void __iomem *ioport_map_pci(struct pci_dev *dev,
unsigned long port, unsigned int nr)
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
EXPORT_SYMBOL(pci_iomap);
void pci_iounmap(struct pci_dev *dev, void __iomem * addr)
EXPORT_SYMBOL(pci_iounmap);
