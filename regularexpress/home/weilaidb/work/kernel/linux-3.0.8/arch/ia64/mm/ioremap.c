static inline void __iomem *
__ioremap (unsigned long phys_addr)
void __iomem *
early_ioremap (unsigned long phys_addr, unsigned long size)
void __iomem *
ioremap (unsigned long phys_addr, unsigned long size)
EXPORT_SYMBOL(ioremap);
void __iomem *
ioremap_nocache (unsigned long phys_addr, unsigned long size)
EXPORT_SYMBOL(ioremap_nocache);
void
early_iounmap (volatile void __iomem *addr, unsigned long size)
void
iounmap (volatile void __iomem *addr)
EXPORT_SYMBOL(iounmap);
