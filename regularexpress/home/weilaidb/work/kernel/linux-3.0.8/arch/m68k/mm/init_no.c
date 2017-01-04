unsigned long empty_zero_page;
extern unsigned long memory_start;
extern unsigned long memory_end;
void __init paging_init(void)
void __init mem_init(void)
void free_initrd_mem(unsigned long start, unsigned long end)
void free_initmem(void)
