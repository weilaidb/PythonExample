#define _LINUX_MMZONE_H
#define MAX_ORDER 11
#define MAX_ORDER CONFIG_FORCE_MAX_ZONEORDER
#define MAX_ORDER_NR_PAGES (1 << (MAX_ORDER - 1))
#define PAGE_ALLOC_COSTLY_ORDER 3
#define MIGRATE_UNMOVABLE     0
#define MIGRATE_RECLAIMABLE   1
#define MIGRATE_MOVABLE       2
#define MIGRATE_PCPTYPES      3
#define MIGRATE_RESERVE       3
#define MIGRATE_ISOLATE       4
#define MIGRATE_TYPES         5
#define for_each_migratetype_order(order, type) \
for (order = 0; order < MAX_ORDER; order++) \
for (type = 0; type < MIGRATE_TYPES; type++)
extern int page_group_by_mobility_disabled;
static inline int get_pageblock_migratetype(struct page *page)
struct free_area ;
struct pglist_data;
#if defined(CONFIG_SMP)
struct zone_padding  ____cacheline_internodealigned_in_smp;
#define ZONE_PADDING(name)	struct zone_padding name;
#define ZONE_PADDING(name)
enum zone_stat_item ;
#define LRU_BASE 0
#define LRU_ACTIVE 1
#define LRU_FILE 2
enum lru_list ;
#define for_each_lru(l) for (l = 0; l < NR_LRU_LISTS; l++)
#define for_each_evictable_lru(l) for (l = 0; l <= LRU_ACTIVE_FILE; l++)
static inline int is_file_lru(enum lru_list l)
static inline int is_active_lru(enum lru_list l)
static inline int is_unevictable_lru(enum lru_list l)
enum zone_watermarks ;
#define min_wmark_pages(z) (z->watermark[WMARK_MIN])
#define low_wmark_pages(z) (z->watermark[WMARK_LOW])
#define high_wmark_pages(z) (z->watermark[WMARK_HIGH])
struct per_cpu_pages ;
struct per_cpu_pageset ;
enum zone_type ;
#if MAX_NR_ZONES < 2
#define ZONES_SHIFT 0
#elif MAX_NR_ZONES <= 2
#define ZONES_SHIFT 1
#elif MAX_NR_ZONES <= 4
#define ZONES_SHIFT 2
#error ZONES_SHIFT -- too many zones configured adjust calculation
struct zone_reclaim_stat ;
struct zone  ____cacheline_internodealigned_in_smp;
typedef enum  zone_flags_t;
static inline void zone_set_flag(struct zone *zone, zone_flags_t flag)
static inline int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
static inline void zone_clear_flag(struct zone *zone, zone_flags_t flag)
static inline int zone_is_reclaim_congested(const struct zone *zone)
static inline int zone_is_reclaim_locked(const struct zone *zone)
static inline int zone_is_oom_locked(const struct zone *zone)
#define DEF_PRIORITY 12
#define MAX_ZONES_PER_ZONELIST (MAX_NUMNODES * MAX_NR_ZONES)
#define MAX_ZONELISTS 2
struct zonelist_cache ;
#define MAX_ZONELISTS 1
struct zonelist_cache;
struct zoneref ;
struct zonelist ;
struct node_active_region ;
extern struct page *mem_map;
struct bootmem_data;
typedef struct pglist_data  pg_data_t;
#define node_present_pages(nid)	(NODE_DATA(nid)->node_present_pages)
#define node_spanned_pages(nid)	(NODE_DATA(nid)->node_spanned_pages)
#define pgdat_page_nr(pgdat, pagenr)	((pgdat)->node_mem_map + (pagenr))
#define pgdat_page_nr(pgdat, pagenr)	pfn_to_page((pgdat)->node_start_pfn + (pagenr))
#define nid_page_nr(nid, pagenr) 	pgdat_page_nr(NODE_DATA(nid),(pagenr))
#define node_start_pfn(nid)	(NODE_DATA(nid)->node_start_pfn)
#define node_end_pfn(nid) ()
extern struct mutex zonelists_mutex;
void build_all_zonelists(void *data);
void wakeup_kswapd(struct zone *zone, int order, enum zone_type classzone_idx);
bool zone_watermark_ok(struct zone *z, int order, unsigned long mark,
int classzone_idx, int alloc_flags);
bool zone_watermark_ok_safe(struct zone *z, int order, unsigned long mark,
int classzone_idx, int alloc_flags);
enum memmap_context ;
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
unsigned long size,
enum memmap_context context);
void memory_present(int nid, unsigned long start, unsigned long end);
static inline void memory_present(int nid, unsigned long start, unsigned long end)
int local_memory_node(int node_id);
static inline int local_memory_node(int node_id) ;
unsigned long __init node_memmap_size_bytes(int, unsigned long, unsigned long);
#define zone_idx(zone)		((zone) - (zone)->zone_pgdat->node_zones)
static inline int populated_zone(struct zone *zone)
extern int movable_zone;
static inline int zone_movable_is_highmem(void)
static inline int is_highmem_idx(enum zone_type idx)
static inline int is_normal_idx(enum zone_type idx)
static inline int is_highmem(struct zone *zone)
static inline int is_normal(struct zone *zone)
static inline int is_dma32(struct zone *zone)
static inline int is_dma(struct zone *zone)
struct ctl_table;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[MAX_NR_ZONES-1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int numa_zonelist_order_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern char numa_zonelist_order[];
#define NUMA_ZONELIST_ORDER_LEN 16
extern struct pglist_data contig_page_data;
#define NODE_DATA(nid)		(&contig_page_data)
#define NODE_MEM_MAP(nid)	mem_map
extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
#define for_each_online_pgdat(pgdat)			\
for (pgdat = first_online_pgdat();		\
pgdat;					\
pgdat = next_online_pgdat(pgdat))
#define for_each_zone(zone)			        \
for (zone = (first_online_pgdat())->node_zones; \
zone;					\
zone = next_zone(zone))
#define for_each_populated_zone(zone)		        \
for (zone = (first_online_pgdat())->node_zones; \
zone;					\
zone = next_zone(zone))			\
if (!populated_zone(zone))		\
;		\
else
static inline struct zone *zonelist_zone(struct zoneref *zoneref)
static inline int zonelist_zone_idx(struct zoneref *zoneref)
static inline int zonelist_node_idx(struct zoneref *zoneref)
struct zoneref *next_zones_zonelist(struct zoneref *z,
enum zone_type highest_zoneidx,
nodemask_t *nodes,
struct zone **zone);
static inline struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
enum zone_type highest_zoneidx,
nodemask_t *nodes,
struct zone **zone)
#define for_each_zone_zonelist_nodemask(zone, z, zlist, highidx, nodemask) \
for (z = first_zones_zonelist(zlist, highidx, nodemask, &zone);	\
zone;							\
z = next_zones_zonelist(++z, highidx, nodemask, &zone))	\
#define for_each_zone_zonelist(zone, z, zlist, highidx) \
for_each_zone_zonelist_nodemask(zone, z, zlist, highidx, NULL)
#if !defined(CONFIG_HAVE_ARCH_EARLY_PFN_TO_NID) && \
!defined(CONFIG_ARCH_POPULATES_NODE_MAP)
static inline unsigned long early_pfn_to_nid(unsigned long pfn)
#define pfn_to_nid(pfn)		(0)
#define SECTIONS_SHIFT		(MAX_PHYSMEM_BITS - SECTION_SIZE_BITS)
#define PA_SECTION_SHIFT	(SECTION_SIZE_BITS)
#define PFN_SECTION_SHIFT	(SECTION_SIZE_BITS - PAGE_SHIFT)
#define NR_MEM_SECTIONS		(1UL << SECTIONS_SHIFT)
#define PAGES_PER_SECTION       (1UL << PFN_SECTION_SHIFT)
#define PAGE_SECTION_MASK	(~(PAGES_PER_SECTION-1))
#define SECTION_BLOCKFLAGS_BITS \
((1UL << (PFN_SECTION_SHIFT - pageblock_order)) * NR_PAGEBLOCK_BITS)
#if (MAX_ORDER - 1 + PAGE_SHIFT) > SECTION_SIZE_BITS
#error Allocator MAX_ORDER exceeds SECTION_SIZE
#define pfn_to_section_nr(pfn) ((pfn) >> PFN_SECTION_SHIFT)
#define section_nr_to_pfn(sec) ((sec) << PFN_SECTION_SHIFT)
#define SECTION_ALIGN_UP(pfn)	(((pfn) + PAGES_PER_SECTION - 1) & PAGE_SECTION_MASK)
#define SECTION_ALIGN_DOWN(pfn)	((pfn) & PAGE_SECTION_MASK)
struct page;
struct page_cgroup;
struct mem_section ;
#define SECTIONS_PER_ROOT       (PAGE_SIZE / sizeof (struct mem_section))
#define SECTIONS_PER_ROOT	1
#define SECTION_NR_TO_ROOT(sec)	((sec) / SECTIONS_PER_ROOT)
#define NR_SECTION_ROOTS	DIV_ROUND_UP(NR_MEM_SECTIONS, SECTIONS_PER_ROOT)
#define SECTION_ROOT_MASK	(SECTIONS_PER_ROOT - 1)
extern struct mem_section *mem_section[NR_SECTION_ROOTS];
extern struct mem_section mem_section[NR_SECTION_ROOTS][SECTIONS_PER_ROOT];
static inline struct mem_section *__nr_to_section(unsigned long nr)
extern int __section_nr(struct mem_section* ms);
extern unsigned long usemap_size(void);
#define	SECTION_MARKED_PRESENT	(1UL<<0)
#define SECTION_HAS_MEM_MAP	(1UL<<1)
#define SECTION_MAP_LAST_BIT	(1UL<<2)
#define SECTION_MAP_MASK	(~(SECTION_MAP_LAST_BIT-1))
#define SECTION_NID_SHIFT	2
static inline struct page *__section_mem_map_addr(struct mem_section *section)
static inline int present_section(struct mem_section *section)
static inline int present_section_nr(unsigned long nr)
static inline int valid_section(struct mem_section *section)
static inline int valid_section_nr(unsigned long nr)
static inline struct mem_section *__pfn_to_section(unsigned long pfn)
static inline int pfn_valid(unsigned long pfn)
static inline int pfn_present(unsigned long pfn)
#define pfn_to_nid(pfn)							\
()
#define pfn_to_nid(pfn)		(0)
#define early_pfn_valid(pfn)	pfn_valid(pfn)
void sparse_init(void);
#define sparse_init()	do  while (0)
#define sparse_index_init(_sec, _nid)  do  while (0)
bool early_pfn_in_nid(unsigned long pfn, int nid);
#define early_pfn_in_nid(pfn, nid)	(1)
#define early_pfn_valid(pfn)	(1)
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __init node_memmap_size_bytes(int, unsigned long, unsigned long);
#define pfn_valid_within(pfn) pfn_valid(pfn)
#define pfn_valid_within(pfn) (1)
int memmap_valid_within(unsigned long pfn,
struct page *page, struct zone *zone);
static inline int memmap_valid_within(unsigned long pfn,
struct page *page, struct zone *zone)
