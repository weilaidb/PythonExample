unsigned long ioremap_bot = IOREMAP_BASE;
static void *early_alloc_pgtable(unsigned long size)
int map_kernel_page(unsigned long ea, unsigned long pa, int flags)
void __iomem * __ioremap_at(phys_addr_t pa, void *ea, unsigned long size,
unsigned long flags)
void __iounmap_at(void *ea, unsigned long size)
void __iomem * __ioremap_caller(phys_addr_t addr, unsigned long size,
unsigned long flags, void *caller)
void __iomem * __ioremap(phys_addr_t addr, unsigned long size,
unsigned long flags)
void __iomem * ioremap(phys_addr_t addr, unsigned long size)
void __iomem * ioremap_wc(phys_addr_t addr, unsigned long size)
void __iomem * ioremap_prot(phys_addr_t addr, unsigned long size,
unsigned long flags)
void __iounmap(volatile void __iomem *token)
void iounmap(volatile void __iomem *token)
EXPORT_SYMBOL(ioremap);
EXPORT_SYMBOL(ioremap_wc);
EXPORT_SYMBOL(ioremap_prot);
EXPORT_SYMBOL(__ioremap);
EXPORT_SYMBOL(__ioremap_at);
EXPORT_SYMBOL(iounmap);
EXPORT_SYMBOL(__iounmap);
EXPORT_SYMBOL(__iounmap_at);
