void __iomem * __ioremap_prot(unsigned long phys_addr, unsigned long size, pgprot_t prot)
void __iomem * __ioremap(unsigned long phys_addr, unsigned long size, unsigned long flags)
void __iomem *ioremap_nocache (unsigned long phys_addr, unsigned long size)
void iounmap(volatile void __iomem *addr)
