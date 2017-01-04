#undef SUN3_KMAP_DEBUG
extern void print_pte_vaddr(unsigned long vaddr);
extern void mmu_emu_map_pmeg (int context, int vaddr);
static inline void do_page_mapin(unsigned long phys, unsigned long virt,
unsigned long type)
static inline void do_pmeg_mapin(unsigned long phys, unsigned long virt,
unsigned long type, int pages)
void __iomem *sun3_ioremap(unsigned long phys, unsigned long size,
unsigned long type)
EXPORT_SYMBOL(sun3_ioremap);
void __iomem *__ioremap(unsigned long phys, unsigned long size, int cache)
EXPORT_SYMBOL(__ioremap);
void iounmap(void __iomem *addr)
EXPORT_SYMBOL(iounmap);
int sun3_map_test(unsigned long addr, char *val)
EXPORT_SYMBOL(sun3_map_test);
