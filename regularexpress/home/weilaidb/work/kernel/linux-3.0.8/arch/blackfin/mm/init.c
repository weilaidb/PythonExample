char empty_zero_page[PAGE_SIZE] __attribute__((aligned(PAGE_SIZE)));
EXPORT_SYMBOL(empty_zero_page);
#if defined CONFIG_SYSCALL_TAB_L1
__attribute__((l1_data))
static unsigned long exception_stack[NR_CPUS][1024];
struct blackfin_pda cpu_pda[NR_CPUS];
EXPORT_SYMBOL(cpu_pda);
void __init paging_init(void)
asmlinkage void __init init_pda(void)
void __init mem_init(void)
static void __init free_init_pages(const char *what, unsigned long begin, unsigned long end)
void __init free_initrd_mem(unsigned long start, unsigned long end)
void __init_refok free_initmem(void)
