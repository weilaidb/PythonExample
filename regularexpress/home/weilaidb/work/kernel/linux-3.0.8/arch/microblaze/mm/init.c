int mem_init_done;
unsigned int __page_offset;
EXPORT_SYMBOL(__page_offset);
static int init_bootmem_done;
char *klimit = _end;
unsigned long memory_start;
EXPORT_SYMBOL(memory_start);
unsigned long memory_end;
unsigned long memory_size;
EXPORT_SYMBOL(memory_size);
static void __init paging_init(void)
void __init setup_memory(void)
void free_init_pages(char *what, unsigned long begin, unsigned long end)
void free_initrd_mem(unsigned long start, unsigned long end)
void free_initmem(void)
void __init mem_init(void)
int page_is_ram(unsigned long pfn)
int page_is_ram(unsigned long pfn)
static void mm_cmdline_setup(void)
static void __init mmu_init_hw(void)
asmlinkage void __init mmu_init(void)
void __init *early_get_page(void)
void * __init_refok alloc_maybe_bootmem(size_t size, gfp_t mask)
void * __init_refok zalloc_maybe_bootmem(size_t size, gfp_t mask)
