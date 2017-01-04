#define flush_HPTE(X, va, pg)	_tlbie(va)
unsigned long ioremap_base;
unsigned long ioremap_bot;
EXPORT_SYMBOL(ioremap_bot);
#define MAX_LOW_MEM	CONFIG_LOWMEM_SIZE
struct pgtable_cache_struct quicklists;
static void __iomem *__ioremap(phys_addr_t addr, unsigned long size,
unsigned long flags)
void __iomem *ioremap(phys_addr_t addr, unsigned long size)
EXPORT_SYMBOL(ioremap);
void iounmap(void *addr)
EXPORT_SYMBOL(iounmap);
int map_page(unsigned long va, phys_addr_t pa, int flags)
void __init mapin_ram(void)
#define is_power_of_2(x)	((x) != 0 && (((x) & ((x) - 1)) == 0))
static int get_pteptr(struct mm_struct *mm, unsigned long addr, pte_t **ptep)
unsigned long iopa(unsigned long addr)
__init_refok pte_t *pte_alloc_one_kernel(struct mm_struct *mm,
unsigned long address)
