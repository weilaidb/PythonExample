unsigned long empty_zero_page;
EXPORT_SYMBOL_GPL(empty_zero_page);
static struct kcore_list kcore_mem, kcore_vmalloc;
static unsigned long setup_zero_page(void)
int page_is_ram(unsigned long pagenr)
void __init paging_init(void)
void __init mem_init(void)
static void free_init_pages(const char *what, unsigned long begin, unsigned long end)
void free_initrd_mem(unsigned long start, unsigned long end)
void __init_refok free_initmem(void)
unsigned long pgd_current;
#define __page_aligned(order) __attribute__((__aligned__(PAGE_SIZE<<order)))
pgd_t swapper_pg_dir[PTRS_PER_PGD] __page_aligned(PTE_ORDER);
pte_t invalid_pte_table[PTRS_PER_PTE] __page_aligned(PTE_ORDER);
