bool __init memblock_x86_check_reserved_size(u64 *addrp, u64 *sizep, u64 align)
u64 __init memblock_x86_find_in_range_size(u64 start, u64 *sizep, u64 align)
static __init struct range *find_range_array(int count)
static void __init memblock_x86_subtract_reserved(struct range *range, int az)
struct count_data ;
static int __init count_work_fn(unsigned long start_pfn,
unsigned long end_pfn, void *datax)
static int __init count_early_node_map(int nodeid)
int __init __get_free_all_memory_range(struct range **rangep, int nodeid,
unsigned long start_pfn, unsigned long end_pfn)
int __init get_free_all_memory_range(struct range **rangep, int nodeid)
static u64 __init __memblock_x86_memory_in_range(u64 addr, u64 limit, bool get_free)
u64 __init memblock_x86_free_memory_in_range(u64 addr, u64 limit)
u64 __init memblock_x86_memory_in_range(u64 addr, u64 limit)
void __init memblock_x86_reserve_range(u64 start, u64 end, char *name)
void __init memblock_x86_free_range(u64 start, u64 end)
u64 __init memblock_x86_find_in_range_node(int nid, u64 start, u64 end, u64 size, u64 align)
static int __init memblock_x86_find_active_region(const struct memblock_region *ei,
unsigned long start_pfn,
unsigned long last_pfn,
unsigned long *ei_startpfn,
unsigned long *ei_endpfn)
void __init memblock_x86_register_active_regions(int nid, unsigned long start_pfn,
unsigned long last_pfn)
u64 __init memblock_x86_hole_size(u64 start, u64 end)
