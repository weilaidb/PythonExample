void __iomem * __init_refok
__ioremap_caller(phys_addr_t phys_addr, unsigned long size,
pgprot_t pgprot, void *caller)
EXPORT_SYMBOL(__ioremap_caller);
static inline int iomapping_nontranslatable(unsigned long offset)
void __iounmap(void __iomem *addr)
EXPORT_SYMBOL(__iounmap);
