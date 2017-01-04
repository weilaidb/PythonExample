void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max)
EXPORT_SYMBOL(pci_iomap);
void pci_iounmap(struct pci_dev *dev, void __iomem *addr)
EXPORT_SYMBOL(pci_iounmap);
