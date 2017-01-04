void __iomem * __ioremap(unsigned long phys_addr, unsigned long size, unsigned long flags)
EXPORT_SYMBOL(__ioremap);
void iounmap(const volatile void __iomem *addr)
EXPORT_SYMBOL(iounmap);
