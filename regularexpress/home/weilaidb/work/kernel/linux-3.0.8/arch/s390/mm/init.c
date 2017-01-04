pgd_t swapper_pg_dir[PTRS_PER_PGD] __attribute__((__aligned__(PAGE_SIZE)));
unsigned long empty_zero_page, zero_page_mask;
EXPORT_SYMBOL(empty_zero_page);
static unsigned long setup_zero_pages(void)
void __init paging_init(void)
void __init mem_init(void)
void kernel_map_pages(struct page *page, int numpages, int enable)
void free_init_pages(char *what, unsigned long begin, unsigned long end)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
int arch_add_memory(int nid, u64 start, u64 size)
