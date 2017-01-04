void __iomem *ioport_map(unsigned long port, unsigned int nr)
void ioport_unmap(void __iomem *addr)
EXPORT_SYMBOL(ioport_map);
EXPORT_SYMBOL(ioport_unmap);
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
void pci_iounmap(struct pci_dev *dev, void __iomem * addr)
EXPORT_SYMBOL(pci_iomap);
EXPORT_SYMBOL(pci_iounmap);
