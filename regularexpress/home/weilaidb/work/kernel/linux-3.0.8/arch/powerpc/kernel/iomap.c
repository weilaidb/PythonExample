unsigned int ioread8(void __iomem *addr)
unsigned int ioread16(void __iomem *addr)
unsigned int ioread16be(void __iomem *addr)
unsigned int ioread32(void __iomem *addr)
unsigned int ioread32be(void __iomem *addr)
EXPORT_SYMBOL(ioread8);
EXPORT_SYMBOL(ioread16);
EXPORT_SYMBOL(ioread16be);
EXPORT_SYMBOL(ioread32);
EXPORT_SYMBOL(ioread32be);
void iowrite8(u8 val, void __iomem *addr)
void iowrite16(u16 val, void __iomem *addr)
void iowrite16be(u16 val, void __iomem *addr)
void iowrite32(u32 val, void __iomem *addr)
void iowrite32be(u32 val, void __iomem *addr)
EXPORT_SYMBOL(iowrite8);
EXPORT_SYMBOL(iowrite16);
EXPORT_SYMBOL(iowrite16be);
EXPORT_SYMBOL(iowrite32);
EXPORT_SYMBOL(iowrite32be);
void ioread8_rep(void __iomem *addr, void *dst, unsigned long count)
void ioread16_rep(void __iomem *addr, void *dst, unsigned long count)
void ioread32_rep(void __iomem *addr, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread8_rep);
EXPORT_SYMBOL(ioread16_rep);
EXPORT_SYMBOL(ioread32_rep);
void iowrite8_rep(void __iomem *addr, const void *src, unsigned long count)
void iowrite16_rep(void __iomem *addr, const void *src, unsigned long count)
void iowrite32_rep(void __iomem *addr, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite8_rep);
EXPORT_SYMBOL(iowrite16_rep);
EXPORT_SYMBOL(iowrite32_rep);
void __iomem *ioport_map(unsigned long port, unsigned int len)
void ioport_unmap(void __iomem *addr)
EXPORT_SYMBOL(ioport_map);
EXPORT_SYMBOL(ioport_unmap);
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long max)
void pci_iounmap(struct pci_dev *dev, void __iomem *addr)
EXPORT_SYMBOL(pci_iomap);
EXPORT_SYMBOL(pci_iounmap);
