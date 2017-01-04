DEFINE_PER_CPU(int, numa_node);
EXPORT_PER_CPU_SYMBOL(numa_node);
DEFINE_PER_CPU(int, _numa_mem_);
EXPORT_PER_CPU_SYMBOL(_numa_mem_);
nodemask_t node_states[NR_NODE_STATES] __read_mostly = ;
EXPORT_SYMBOL(node_states);
unsigned long totalram_pages __read_mostly;
unsigned long totalreserve_pages __read_mostly;
int percpu_pagelist_fraction;
gfp_t gfp_allowed_mask __read_mostly = GFP_BOOT_MASK;
static gfp_t saved_gfp_mask;
void pm_restore_gfp_mask(void)
void pm_restrict_gfp_mask(void)
int pageblock_order __read_mostly;
static void __free_pages_ok(struct page *page, unsigned int order);
int sysctl_lowmem_reserve_ratio[MAX_NR_ZONES-1] = ;
EXPORT_SYMBOL(totalram_pages);
static char * const zone_names[MAX_NR_ZONES] = ;
int min_free_kbytes = 1024;
static unsigned long __meminitdata nr_kernel_pages;
static unsigned long __meminitdata nr_all_pages;
static unsigned long __meminitdata dma_reserve;
#define MAX_ACTIVE_REGIONS CONFIG_MAX_ACTIVE_REGIONS
#if MAX_NUMNODES >= 32
#define MAX_ACTIVE_REGIONS (MAX_NUMNODES*50)
#define MAX_ACTIVE_REGIONS 256
static struct node_active_region __meminitdata early_node_map[MAX_ACTIVE_REGIONS];
static int __meminitdata nr_nodemap_entries;
static unsigned long __meminitdata arch_zone_lowest_possible_pfn[MAX_NR_ZONES];
static unsigned long __meminitdata arch_zone_highest_possible_pfn[MAX_NR_ZONES];
static unsigned long __initdata required_kernelcore;
static unsigned long __initdata required_movablecore;
static unsigned long __meminitdata zone_movable_pfn[MAX_NUMNODES];
int movable_zone;
EXPORT_SYMBOL(movable_zone);
#if MAX_NUMNODES > 1
int nr_node_ids __read_mostly = MAX_NUMNODES;
int nr_online_nodes __read_mostly = 1;
EXPORT_SYMBOL(nr_node_ids);
EXPORT_SYMBOL(nr_online_nodes);
int page_group_by_mobility_disabled __read_mostly;
static void set_pageblock_migratetype(struct page *page, int migratetype)
bool oom_killer_disabled __read_mostly;
static int page_outside_zone_boundaries(struct zone *zone, struct page *page)
static int page_is_consistent(struct zone *zone, struct page *page)
static int bad_range(struct zone *zone, struct page *page)
static inline int bad_range(struct zone *zone, struct page *page)
static void bad_page(struct page *page)
static void free_compound_page(struct page *page)
void prep_compound_page(struct page *page, unsigned long order)
static int destroy_compound_page(struct page *page, unsigned long order)
static inline void prep_zero_page(struct page *page, int order, gfp_t gfp_flags)
static inline void set_page_order(struct page *page, int order)
static inline void rmv_page_order(struct page *page)
static inline unsigned long
__find_buddy_index(unsigned long page_idx, unsigned int order)
static inline int page_is_buddy(struct page *page, struct page *buddy,
int order)
static inline void __free_one_page(struct page *page,
struct zone *zone, unsigned int order,
int migratetype)
static inline void free_page_mlock(struct page *page)
static inline int free_pages_check(struct page *page)
static void free_pcppages_bulk(struct zone *zone, int count,
struct per_cpu_pages *pcp)
static void free_one_page(struct zone *zone, struct page *page, int order,
int migratetype)
static bool free_pages_prepare(struct page *page, unsigned int order)
static void __free_pages_ok(struct page *page, unsigned int order)
void __meminit __free_pages_bootmem(struct page *page, unsigned int order)
static inline void expand(struct zone *zone, struct page *page,
int low, int high, struct free_area *area,
int migratetype)
static inline int check_new_page(struct page *page)
static int prep_new_page(struct page *page, int order, gfp_t gfp_flags)
static inline
struct page *__rmqueue_smallest(struct zone *zone, unsigned int order,
int migratetype)
static int fallbacks[MIGRATE_TYPES][MIGRATE_TYPES-1] = ;
static int move_freepages(struct zone *zone,
struct page *start_page, struct page *end_page,
int migratetype)
static int move_freepages_block(struct zone *zone, struct page *page,
int migratetype)
static void change_pageblock_range(struct page *pageblock_page,
int start_order, int migratetype)
static inline struct page *
__rmqueue_fallback(struct zone *zone, int order, int start_migratetype)
static struct page *__rmqueue(struct zone *zone, unsigned int order,
int migratetype)
static int rmqueue_bulk(struct zone *zone, unsigned int order,
unsigned long count, struct list_head *list,
int migratetype, int cold)
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp)
static void drain_pages(unsigned int cpu)
void drain_local_pages(void *arg)
void drain_all_pages(void)
void mark_free_pages(struct zone *zone)
void free_hot_cold_page(struct page *page, int cold)
void split_page(struct page *page, unsigned int order)
int split_free_page(struct page *page)
static inline
struct page *buffered_rmqueue(struct zone *preferred_zone,
struct zone *zone, int order, gfp_t gfp_flags,
int migratetype)
#define ALLOC_WMARK_MIN		WMARK_MIN
#define ALLOC_WMARK_LOW		WMARK_LOW
#define ALLOC_WMARK_HIGH	WMARK_HIGH
#define ALLOC_NO_WATERMARKS	0x04
#define ALLOC_WMARK_MASK	(ALLOC_NO_WATERMARKS-1)
#define ALLOC_HARDER		0x10
#define ALLOC_HIGH		0x20
#define ALLOC_CPUSET		0x40
static struct fail_page_alloc_attr  fail_page_alloc = ;
static int __init setup_fail_page_alloc(char *str)
__setup("fail_page_alloc=", setup_fail_page_alloc);
static int should_fail_alloc_page(gfp_t gfp_mask, unsigned int order)
static int __init fail_page_alloc_debugfs(void)
late_initcall(fail_page_alloc_debugfs);
static inline int should_fail_alloc_page(gfp_t gfp_mask, unsigned int order)
static bool __zone_watermark_ok(struct zone *z, int order, unsigned long mark,
int classzone_idx, int alloc_flags, long free_pages)
bool zone_watermark_ok(struct zone *z, int order, unsigned long mark,
int classzone_idx, int alloc_flags)
bool zone_watermark_ok_safe(struct zone *z, int order, unsigned long mark,
int classzone_idx, int alloc_flags)
static nodemask_t *zlc_setup(struct zonelist *zonelist, int alloc_flags)
static int zlc_zone_worth_trying(struct zonelist *zonelist, struct zoneref *z,
nodemask_t *allowednodes)
static void zlc_mark_zone_full(struct zonelist *zonelist, struct zoneref *z)
static void zlc_clear_zones_full(struct zonelist *zonelist)
static nodemask_t *zlc_setup(struct zonelist *zonelist, int alloc_flags)
static int zlc_zone_worth_trying(struct zonelist *zonelist, struct zoneref *z,
nodemask_t *allowednodes)
static void zlc_mark_zone_full(struct zonelist *zonelist, struct zoneref *z)
static void zlc_clear_zones_full(struct zonelist *zonelist)
static struct page *
get_page_from_freelist(gfp_t gfp_mask, nodemask_t *nodemask, unsigned int order,
struct zonelist *zonelist, int high_zoneidx, int alloc_flags,
struct zone *preferred_zone, int migratetype)
static inline bool should_suppress_show_mem(void)
static DEFINE_RATELIMIT_STATE(nopage_rs,
DEFAULT_RATELIMIT_INTERVAL,
DEFAULT_RATELIMIT_BURST);
void warn_alloc_failed(gfp_t gfp_mask, int order, const char *fmt, ...)
static inline int
should_alloc_retry(gfp_t gfp_mask, unsigned int order,
unsigned long pages_reclaimed)
static inline struct page *
__alloc_pages_may_oom(gfp_t gfp_mask, unsigned int order,
struct zonelist *zonelist, enum zone_type high_zoneidx,
nodemask_t *nodemask, struct zone *preferred_zone,
int migratetype)
static struct page *
__alloc_pages_direct_compact(gfp_t gfp_mask, unsigned int order,
struct zonelist *zonelist, enum zone_type high_zoneidx,
nodemask_t *nodemask, int alloc_flags, struct zone *preferred_zone,
int migratetype, unsigned long *did_some_progress,
bool sync_migration)
static inline struct page *
__alloc_pages_direct_compact(gfp_t gfp_mask, unsigned int order,
struct zonelist *zonelist, enum zone_type high_zoneidx,
nodemask_t *nodemask, int alloc_flags, struct zone *preferred_zone,
int migratetype, unsigned long *did_some_progress,
bool sync_migration)
static inline struct page *
__alloc_pages_direct_reclaim(gfp_t gfp_mask, unsigned int order,
struct zonelist *zonelist, enum zone_type high_zoneidx,
nodemask_t *nodemask, int alloc_flags, struct zone *preferred_zone,
int migratetype, unsigned long *did_some_progress)
static inline struct page *
__alloc_pages_high_priority(gfp_t gfp_mask, unsigned int order,
struct zonelist *zonelist, enum zone_type high_zoneidx,
nodemask_t *nodemask, struct zone *preferred_zone,
int migratetype)
static inline
void wake_all_kswapd(unsigned int order, struct zonelist *zonelist,
enum zone_type high_zoneidx,
enum zone_type classzone_idx)
static inline int
gfp_to_alloc_flags(gfp_t gfp_mask)
static inline struct page *
__alloc_pages_slowpath(gfp_t gfp_mask, unsigned int order,
struct zonelist *zonelist, enum zone_type high_zoneidx,
nodemask_t *nodemask, struct zone *preferred_zone,
int migratetype)
struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
struct zonelist *zonelist, nodemask_t *nodemask)
EXPORT_SYMBOL(__alloc_pages_nodemask);
unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order)
EXPORT_SYMBOL(__get_free_pages);
unsigned long get_zeroed_page(gfp_t gfp_mask)
EXPORT_SYMBOL(get_zeroed_page);
void __pagevec_free(struct pagevec *pvec)
void __free_pages(struct page *page, unsigned int order)
EXPORT_SYMBOL(__free_pages);
void free_pages(unsigned long addr, unsigned int order)
EXPORT_SYMBOL(free_pages);
static void *make_alloc_exact(unsigned long addr, unsigned order, size_t size)
void *alloc_pages_exact(size_t size, gfp_t gfp_mask)
EXPORT_SYMBOL(alloc_pages_exact);
void *alloc_pages_exact_nid(int nid, size_t size, gfp_t gfp_mask)
EXPORT_SYMBOL(alloc_pages_exact_nid);
void free_pages_exact(void *virt, size_t size)
EXPORT_SYMBOL(free_pages_exact);
static unsigned int nr_free_zone_pages(int offset)
unsigned int nr_free_buffer_pages(void)
EXPORT_SYMBOL_GPL(nr_free_buffer_pages);
unsigned int nr_free_pagecache_pages(void)
static inline void show_node(struct zone *zone)
void si_meminfo(struct sysinfo *val)
EXPORT_SYMBOL(si_meminfo);
void si_meminfo_node(struct sysinfo *val, int nid)
bool skip_free_areas_node(unsigned int flags, int nid)
#define K(x) ((x) << (PAGE_SHIFT-10))
void show_free_areas(unsigned int filter)
static void zoneref_set_zone(struct zone *zone, struct zoneref *zoneref)
static int build_zonelists_node(pg_data_t *pgdat, struct zonelist *zonelist,
int nr_zones, enum zone_type zone_type)
#define ZONELIST_ORDER_DEFAULT  0
#define ZONELIST_ORDER_NODE     1
#define ZONELIST_ORDER_ZONE     2
static int current_zonelist_order = ZONELIST_ORDER_DEFAULT;
static char zonelist_order_name[3][8] = ;
static int user_zonelist_order = ZONELIST_ORDER_DEFAULT;
#define NUMA_ZONELIST_ORDER_LEN	16
char numa_zonelist_order[16] = "default";
static int __parse_numa_zonelist_order(char *s)
static __init int setup_numa_zonelist_order(char *s)
early_param("numa_zonelist_order", setup_numa_zonelist_order);
int numa_zonelist_order_handler(ctl_table *table, int write,
void __user *buffer, size_t *length,
loff_t *ppos)
#define MAX_NODE_LOAD (nr_online_nodes)
static int node_load[MAX_NUMNODES];
static int find_next_best_node(int node, nodemask_t *used_node_mask)
static void build_zonelists_in_node_order(pg_data_t *pgdat, int node)
static void build_thisnode_zonelists(pg_data_t *pgdat)
static int node_order[MAX_NUMNODES];
static void build_zonelists_in_zone_order(pg_data_t *pgdat, int nr_nodes)
static int default_zonelist_order(void)
static void set_zonelist_order(void)
static void build_zonelists(pg_data_t *pgdat)
static void build_zonelist_cache(pg_data_t *pgdat)
int local_memory_node(int node)
static void set_zonelist_order(void)
static void build_zonelists(pg_data_t *pgdat)
static void build_zonelist_cache(pg_data_t *pgdat)
static void setup_pageset(struct per_cpu_pageset *p, unsigned long batch);
static DEFINE_PER_CPU(struct per_cpu_pageset, boot_pageset);
static void setup_zone_pageset(struct zone *zone);
DEFINE_MUTEX(zonelists_mutex);
static __init_refok int __build_all_zonelists(void *data)
void __ref build_all_zonelists(void *data)
#define PAGES_PER_WAITQUEUE	256
static inline unsigned long wait_table_hash_nr_entries(unsigned long pages)
static inline unsigned long wait_table_hash_nr_entries(unsigned long pages)
static inline unsigned long wait_table_bits(unsigned long size)
#define LONG_ALIGN(x) (((x)+(sizeof(long))-1)&~((sizeof(long))-1))
static int pageblock_is_reserved(unsigned long start_pfn, unsigned long end_pfn)
static void setup_zone_migrate_reserve(struct zone *zone)
void __meminit memmap_init_zone(unsigned long size, int nid, unsigned long zone,
unsigned long start_pfn, enum memmap_context context)
static void __meminit zone_init_free_lists(struct zone *zone)
#define memmap_init(size, nid, zone, start_pfn) \
memmap_init_zone((size), (nid), (zone), (start_pfn), MEMMAP_EARLY)
static int zone_batchsize(struct zone *zone)
static void setup_pageset(struct per_cpu_pageset *p, unsigned long batch)
static void setup_pagelist_highmark(struct per_cpu_pageset *p,
unsigned long high)
static void setup_zone_pageset(struct zone *zone)
void __init setup_per_cpu_pageset(void)
static noinline __init_refok
int zone_wait_table_init(struct zone *zone, unsigned long zone_size_pages)
static int __zone_pcp_update(void *data)
void zone_pcp_update(struct zone *zone)
static __meminit void zone_pcp_init(struct zone *zone)
__meminit int init_currently_empty_zone(struct zone *zone,
unsigned long zone_start_pfn,
unsigned long size,
enum memmap_context context)
static int __meminit first_active_region_index_in_nid(int nid)
static int __meminit next_active_region_index_in_nid(int index, int nid)
int __meminit __early_pfn_to_nid(unsigned long pfn)
int __meminit early_pfn_to_nid(unsigned long pfn)
bool __meminit early_pfn_in_nid(unsigned long pfn, int node)
#define for_each_active_range_index_in_nid(i, nid) \
for (i = first_active_region_index_in_nid(nid); i != -1; \
i = next_active_region_index_in_nid(i, nid))
void __init free_bootmem_with_active_regions(int nid,
unsigned long max_low_pfn)
static int __meminit last_active_region_index_in_nid(int nid)
static int __meminit previous_active_region_index_in_nid(int index, int nid)
#define for_each_active_range_index_in_nid_reverse(i, nid) \
for (i = last_active_region_index_in_nid(nid); i != -1; \
i = previous_active_region_index_in_nid(i, nid))
u64 __init find_memory_core_early(int nid, u64 size, u64 align,
u64 goal, u64 limit)
int __init add_from_early_node_map(struct range *range, int az,
int nr_range, int nid)
void __init work_with_active_regions(int nid, work_fn_t work_fn, void *data)
void __init sparse_memory_present_with_active_regions(int nid)
void __meminit get_pfn_range_for_nid(unsigned int nid,
unsigned long *start_pfn, unsigned long *end_pfn)
static void __init find_usable_zone_for_movable(void)
static void __meminit adjust_zone_range_for_zone_movable(int nid,
unsigned long zone_type,
unsigned long node_start_pfn,
unsigned long node_end_pfn,
unsigned long *zone_start_pfn,
unsigned long *zone_end_pfn)
static unsigned long __meminit zone_spanned_pages_in_node(int nid,
unsigned long zone_type,
unsigned long *ignored)
unsigned long __meminit __absent_pages_in_range(int nid,
unsigned long range_start_pfn,
unsigned long range_end_pfn)
unsigned long __init absent_pages_in_range(unsigned long start_pfn,
unsigned long end_pfn)
static unsigned long __meminit zone_absent_pages_in_node(int nid,
unsigned long zone_type,
unsigned long *ignored)
static inline unsigned long __meminit zone_spanned_pages_in_node(int nid,
unsigned long zone_type,
unsigned long *zones_size)
static inline unsigned long __meminit zone_absent_pages_in_node(int nid,
unsigned long zone_type,
unsigned long *zholes_size)
static void __meminit calculate_node_totalpages(struct pglist_data *pgdat,
unsigned long *zones_size, unsigned long *zholes_size)
static unsigned long __init usemap_size(unsigned long zonesize)
static void __init setup_usemap(struct pglist_data *pgdat,
struct zone *zone, unsigned long zonesize)
static inline void setup_usemap(struct pglist_data *pgdat,
struct zone *zone, unsigned long zonesize)
static inline int pageblock_default_order(void)
static inline void __init set_pageblock_order(unsigned int order)
static inline int pageblock_default_order(unsigned int order)
#define set_pageblock_order(x)	do  while (0)
static void __paginginit free_area_init_core(struct pglist_data *pgdat,
unsigned long *zones_size, unsigned long *zholes_size)
static void __init_refok alloc_node_mem_map(struct pglist_data *pgdat)
void __paginginit free_area_init_node(int nid, unsigned long *zones_size,
unsigned long node_start_pfn, unsigned long *zholes_size)
#if MAX_NUMNODES > 1
static void __init setup_nr_node_ids(void)
static inline void setup_nr_node_ids(void)
void __init add_active_range(unsigned int nid, unsigned long start_pfn,
unsigned long end_pfn)
void __init remove_active_range(unsigned int nid, unsigned long start_pfn,
unsigned long end_pfn)
void __init remove_all_active_ranges(void)
static int __init cmp_node_active_region(const void *a, const void *b)
void __init sort_node_map(void)
static unsigned long __init find_min_pfn_for_node(int nid)
unsigned long __init find_min_pfn_with_active_regions(void)
static unsigned long __init early_calculate_totalpages(void)
static void __init find_zone_movable_pfns_for_nodes(unsigned long *movable_pfn)
static void check_for_regular_memory(pg_data_t *pgdat)
void __init free_area_init_nodes(unsigned long *max_zone_pfn)
static int __init cmdline_parse_core(char *p, unsigned long *core)
static int __init cmdline_parse_kernelcore(char *p)
static int __init cmdline_parse_movablecore(char *p)
early_param("kernelcore", cmdline_parse_kernelcore);
early_param("movablecore", cmdline_parse_movablecore);
void __init set_dma_reserve(unsigned long new_dma_reserve)
void __init free_area_init(unsigned long *zones_size)
static int page_alloc_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
void __init page_alloc_init(void)
static void calculate_totalreserve_pages(void)
static void setup_per_zone_lowmem_reserve(void)
void setup_per_zone_wmarks(void)
static void __meminit calculate_zone_inactive_ratio(struct zone *zone)
static void __meminit setup_per_zone_inactive_ratio(void)
int __meminit init_per_zone_wmark_min(void)
module_init(init_per_zone_wmark_min)
int min_free_kbytes_sysctl_handler(ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int sysctl_min_unmapped_ratio_sysctl_handler(ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int sysctl_min_slab_ratio_sysctl_handler(ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int lowmem_reserve_ratio_sysctl_handler(ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int percpu_pagelist_fraction_sysctl_handler(ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
int hashdist = HASHDIST_DEFAULT;
static int __init set_hashdist(char *str)
__setup("hashdist=", set_hashdist);
void *__init alloc_large_system_hash(const char *tablename,
unsigned long bucketsize,
unsigned long numentries,
int scale,
int flags,
unsigned int *_hash_shift,
unsigned int *_hash_mask,
unsigned long limit)
static inline unsigned long *get_pageblock_bitmap(struct zone *zone,
unsigned long pfn)
static inline int pfn_to_bitidx(struct zone *zone, unsigned long pfn)
unsigned long get_pageblock_flags_group(struct page *page,
int start_bitidx, int end_bitidx)
void set_pageblock_flags_group(struct page *page, unsigned long flags,
int start_bitidx, int end_bitidx)
static int
__count_immobile_pages(struct zone *zone, struct page *page, int count)
bool is_pageblock_removable_nolock(struct page *page)
int set_migratetype_isolate(struct page *page)
void unset_migratetype_isolate(struct page *page)
void
__offline_isolated_pages(unsigned long start_pfn, unsigned long end_pfn)
bool is_free_buddy_page(struct page *page)
static struct trace_print_flags pageflag_names[] = ;
static void dump_page_flags(unsigned long flags)
void dump_page(struct page *page)
