static inline void remap_area_pte(pte_t * pte, unsigned long address,
phys_t size, phys_t phys_addr, unsigned long flags)
static inline int remap_area_pmd(pmd_t * pmd, unsigned long address,
phys_t size, phys_t phys_addr, unsigned long flags)
static int remap_area_pages(unsigned long address, phys_t phys_addr,
phys_t size, unsigned long flags)
#define IS_LOW512(addr) (!((phys_t)(addr) & (phys_t) ~0x1fffffffULL))
void __iomem * __ioremap(phys_t phys_addr, phys_t size, unsigned long flags)
#define IS_KSEG1(addr) (((unsigned long)(addr) & ~0x1fffffffUL) == CKSEG1)
void __iounmap(const volatile void __iomem *addr)
EXPORT_SYMBOL(__ioremap);
EXPORT_SYMBOL(__iounmap);
