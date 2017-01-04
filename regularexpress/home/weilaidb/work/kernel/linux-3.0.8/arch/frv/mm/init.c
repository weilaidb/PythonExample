#undef DEBUG
static unsigned long empty_bad_page_table;
static unsigned long empty_bad_page;
unsigned long empty_zero_page;
EXPORT_SYMBOL(empty_zero_page);
void __init paging_init(void)
void __init mem_init(void)
void free_initmem(void)
void __init free_initrd_mem(unsigned long start, unsigned long end)
