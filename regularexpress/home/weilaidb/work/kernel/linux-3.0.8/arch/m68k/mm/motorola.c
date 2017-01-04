#undef DEBUG
unsigned long mm_cachebits;
EXPORT_SYMBOL(mm_cachebits);
#define INIT_MAPPED_SIZE	(4UL<<20)
extern unsigned long availmem;
static pte_t * __init kernel_page_table(void)
static pmd_t *last_pgtable __initdata = NULL;
pmd_t *zero_pgtable __initdata = NULL;
static pmd_t * __init kernel_ptr_table(void)
static void __init map_node(int node)
void __init paging_init(void)
void free_initmem(void)
