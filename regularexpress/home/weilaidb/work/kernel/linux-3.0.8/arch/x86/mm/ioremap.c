int ioremap_change_attr(unsigned long vaddr, unsigned long size,
unsigned long prot_val)
static void __iomem *__ioremap_caller(resource_size_t phys_addr,
unsigned long size, unsigned long prot_val, void *caller)
void __iomem *ioremap_nocache(resource_size_t phys_addr, unsigned long size)
EXPORT_SYMBOL(ioremap_nocache);
void __iomem *ioremap_wc(resource_size_t phys_addr, unsigned long size)
EXPORT_SYMBOL(ioremap_wc);
void __iomem *ioremap_cache(resource_size_t phys_addr, unsigned long size)
EXPORT_SYMBOL(ioremap_cache);
void __iomem *ioremap_prot(resource_size_t phys_addr, unsigned long size,
unsigned long prot_val)
EXPORT_SYMBOL(ioremap_prot);
void iounmap(volatile void __iomem *addr)
EXPORT_SYMBOL(iounmap);
void *xlate_dev_mem_ptr(unsigned long phys)
void unxlate_dev_mem_ptr(unsigned long phys, void *addr)
static int __initdata early_ioremap_debug;
static int __init early_ioremap_debug_setup(char *str)
early_param("early_ioremap_debug", early_ioremap_debug_setup);
static __initdata int after_paging_init;
static pte_t bm_pte[PAGE_SIZE/sizeof(pte_t)] __page_aligned_bss;
static inline pmd_t * __init early_ioremap_pmd(unsigned long addr)
static inline pte_t * __init early_ioremap_pte(unsigned long addr)
bool __init is_early_ioremap_ptep(pte_t *ptep)
static unsigned long slot_virt[FIX_BTMAPS_SLOTS] __initdata;
void __init early_ioremap_init(void)
void __init early_ioremap_reset(void)
static void __init __early_set_fixmap(enum fixed_addresses idx,
phys_addr_t phys, pgprot_t flags)
static inline void __init early_set_fixmap(enum fixed_addresses idx,
phys_addr_t phys, pgprot_t prot)
static inline void __init early_clear_fixmap(enum fixed_addresses idx)
static void __iomem *prev_map[FIX_BTMAPS_SLOTS] __initdata;
static unsigned long prev_size[FIX_BTMAPS_SLOTS] __initdata;
void __init fixup_early_ioremap(void)
static int __init check_early_ioremap_leak(void)
late_initcall(check_early_ioremap_leak);
static void __init __iomem *
__early_ioremap(resource_size_t phys_addr, unsigned long size, pgprot_t prot)
void __init __iomem *
early_ioremap(resource_size_t phys_addr, unsigned long size)
void __init __iomem *
early_memremap(resource_size_t phys_addr, unsigned long size)
void __init early_iounmap(void __iomem *addr, unsigned long size)
