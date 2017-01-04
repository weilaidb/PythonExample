unsigned long highstart_pfn, highend_pfn;
static struct vm_struct user_iomap_vm;
void __init paging_init(void)
void __init mem_init(void)
void free_init_pages(char *what, unsigned long begin, unsigned long end)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
