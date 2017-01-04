extern char _text, _etext, _edata;
extern char __init_begin, __init_end;
pgd_t swapper_pg_dir[1024];
unsigned long mmu_context_cache_dat;
unsigned long mmu_context_cache_dat[NR_CPUS];
static unsigned long hole_pages;
void __init paging_init(void);
void __init mem_init(void);
void free_initmem(void);
void free_initrd_mem(unsigned long, unsigned long);
#define START_PFN(nid)		(NODE_DATA(nid)->bdata->node_min_pfn)
#define MAX_LOW_PFN(nid)	(NODE_DATA(nid)->bdata->node_low_pfn)
unsigned long __init zone_sizes_init(void)
extern unsigned long zone_sizes_init(void);
void __init paging_init(void)
int __init reservedpages_count(void)
void __init mem_init(void)
void free_initmem(void)
void free_initrd_mem(unsigned long start, unsigned long end)
