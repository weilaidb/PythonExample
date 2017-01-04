struct pglist_data __refdata contig_page_data;
EXPORT_SYMBOL(contig_page_data);
unsigned long max_low_pfn;
unsigned long min_low_pfn;
unsigned long max_pfn;
static void * __init __alloc_memory_core_early(int nid, u64 size, u64 align,
u64 goal, u64 limit)
void __init free_bootmem_late(unsigned long addr, unsigned long size)
static void __init __free_pages_memory(unsigned long start, unsigned long end)
unsigned long __init free_all_memory_core_early(int nodeid)
unsigned long __init free_all_bootmem_node(pg_data_t *pgdat)
unsigned long __init free_all_bootmem(void)
void __init free_bootmem_node(pg_data_t *pgdat, unsigned long physaddr,
unsigned long size)
void __init free_bootmem(unsigned long addr, unsigned long size)
static void * __init ___alloc_bootmem_nopanic(unsigned long size,
unsigned long align,
unsigned long goal,
unsigned long limit)
void * __init __alloc_bootmem_nopanic(unsigned long size, unsigned long align,
unsigned long goal)
static void * __init ___alloc_bootmem(unsigned long size, unsigned long align,
unsigned long goal, unsigned long limit)
void * __init __alloc_bootmem(unsigned long size, unsigned long align,
unsigned long goal)
void * __init __alloc_bootmem_node(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
void * __init __alloc_bootmem_node_high(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
void * __init alloc_bootmem_section(unsigned long size,
unsigned long section_nr)
void * __init __alloc_bootmem_node_nopanic(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
#define ARCH_LOW_ADDRESS_LIMIT	0xffffffffUL
void * __init __alloc_bootmem_low(unsigned long size, unsigned long align,
unsigned long goal)
void * __init __alloc_bootmem_low_node(pg_data_t *pgdat, unsigned long size,
unsigned long align, unsigned long goal)
