pgd_t swapper_pg_dir[PTRS_PER_PGD] __page_aligned_data;
struct page *empty_zero_page;
EXPORT_SYMBOL(empty_zero_page);
unsigned long mmu_context_cache = NO_CONTEXT;
void __init paging_init(void)
void __init mem_init(void)
static inline void free_area(unsigned long addr, unsigned long end, char *s)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
