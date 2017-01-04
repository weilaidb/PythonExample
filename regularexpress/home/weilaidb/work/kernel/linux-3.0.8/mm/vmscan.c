#define CREATE_TRACE_POINTS
typedef unsigned __bitwise__ reclaim_mode_t;
#define RECLAIM_MODE_SINGLE		((__force reclaim_mode_t)0x01u)
#define RECLAIM_MODE_ASYNC		((__force reclaim_mode_t)0x02u)
#define RECLAIM_MODE_SYNC		((__force reclaim_mode_t)0x04u)
#define RECLAIM_MODE_LUMPYRECLAIM	((__force reclaim_mode_t)0x08u)
#define RECLAIM_MODE_COMPACTION		((__force reclaim_mode_t)0x10u)
struct scan_control ;
#define lru_to_page(_head) (list_entry((_head)->prev, struct page, lru))
#define prefetch_prev_lru_page(_page, _base, _field)			\
do  while (0)
#define prefetch_prev_lru_page(_page, _base, _field) do  while (0)
#define prefetchw_prev_lru_page(_page, _base, _field)			\
do  while (0)
#define prefetchw_prev_lru_page(_page, _base, _field) do  while (0)
int vm_swappiness = 60;
long vm_total_pages;
static LIST_HEAD(shrinker_list);
static DECLARE_RWSEM(shrinker_rwsem);
#define scanning_global_lru(sc)	(!(sc)->mem_cgroup)
#define scanning_global_lru(sc)	(1)
static struct zone_reclaim_stat *get_reclaim_stat(struct zone *zone,
struct scan_control *sc)
static unsigned long zone_nr_lru_pages(struct zone *zone,
struct scan_control *sc, enum lru_list lru)
void register_shrinker(struct shrinker *shrinker)
EXPORT_SYMBOL(register_shrinker);
void unregister_shrinker(struct shrinker *shrinker)
EXPORT_SYMBOL(unregister_shrinker);
static inline int do_shrinker_shrink(struct shrinker *shrinker,
struct shrink_control *sc,
unsigned long nr_to_scan)
#define SHRINK_BATCH 128
unsigned long shrink_slab(struct shrink_control *shrink,
unsigned long nr_pages_scanned,
unsigned long lru_pages)
static void set_reclaim_mode(int priority, struct scan_control *sc,
bool sync)
static void reset_reclaim_mode(struct scan_control *sc)
static inline int is_page_cache_freeable(struct page *page)
static int may_write_to_queue(struct backing_dev_info *bdi,
struct scan_control *sc)
static void handle_write_error(struct address_space *mapping,
struct page *page, int error)
typedef enum  pageout_t;
static pageout_t pageout(struct page *page, struct address_space *mapping,
struct scan_control *sc)
static int __remove_mapping(struct address_space *mapping, struct page *page)
int remove_mapping(struct address_space *mapping, struct page *page)
void putback_lru_page(struct page *page)
enum page_references ;
static enum page_references page_check_references(struct page *page,
struct scan_control *sc)
static noinline_for_stack void free_page_list(struct list_head *free_pages)
static unsigned long shrink_page_list(struct list_head *page_list,
struct zone *zone,
struct scan_control *sc)
int __isolate_lru_page(struct page *page, int mode, int file)
static unsigned long isolate_lru_pages(unsigned long nr_to_scan,
struct list_head *src, struct list_head *dst,
unsigned long *scanned, int order, int mode, int file)
static unsigned long isolate_pages_global(unsigned long nr,
struct list_head *dst,
unsigned long *scanned, int order,
int mode, struct zone *z,
int active, int file)
static unsigned long clear_active_flags(struct list_head *page_list,
unsigned int *count)
int isolate_lru_page(struct page *page)
static int too_many_isolated(struct zone *zone, int file,
struct scan_control *sc)
static noinline_for_stack void
putback_lru_pages(struct zone *zone, struct scan_control *sc,
unsigned long nr_anon, unsigned long nr_file,
struct list_head *page_list)
static noinline_for_stack void update_isolated_counts(struct zone *zone,
struct scan_control *sc,
unsigned long *nr_anon,
unsigned long *nr_file,
struct list_head *isolated_list)
static inline bool should_reclaim_stall(unsigned long nr_taken,
unsigned long nr_freed,
int priority,
struct scan_control *sc)
static noinline_for_stack unsigned long
shrink_inactive_list(unsigned long nr_to_scan, struct zone *zone,
struct scan_control *sc, int priority, int file)
static void move_active_pages_to_lru(struct zone *zone,
struct list_head *list,
enum lru_list lru)
static void shrink_active_list(unsigned long nr_pages, struct zone *zone,
struct scan_control *sc, int priority, int file)
static int inactive_anon_is_low_global(struct zone *zone)
static int inactive_anon_is_low(struct zone *zone, struct scan_control *sc)
static inline int inactive_anon_is_low(struct zone *zone,
struct scan_control *sc)
static int inactive_file_is_low_global(struct zone *zone)
static int inactive_file_is_low(struct zone *zone, struct scan_control *sc)
static int inactive_list_is_low(struct zone *zone, struct scan_control *sc,
int file)
static unsigned long shrink_list(enum lru_list lru, unsigned long nr_to_scan,
struct zone *zone, struct scan_control *sc, int priority)
static void get_scan_count(struct zone *zone, struct scan_control *sc,
unsigned long *nr, int priority)
static inline bool should_continue_reclaim(struct zone *zone,
unsigned long nr_reclaimed,
unsigned long nr_scanned,
struct scan_control *sc)
static void shrink_zone(int priority, struct zone *zone,
struct scan_control *sc)
static void shrink_zones(int priority, struct zonelist *zonelist,
struct scan_control *sc)
static bool zone_reclaimable(struct zone *zone)
static bool all_unreclaimable(struct zonelist *zonelist,
struct scan_control *sc)
static unsigned long do_try_to_free_pages(struct zonelist *zonelist,
struct scan_control *sc,
struct shrink_control *shrink)
unsigned long try_to_free_pages(struct zonelist *zonelist, int order,
gfp_t gfp_mask, nodemask_t *nodemask)
unsigned long mem_cgroup_shrink_node_zone(struct mem_cgroup *mem,
gfp_t gfp_mask, bool noswap,
unsigned int swappiness,
struct zone *zone,
unsigned long *nr_scanned)
unsigned long try_to_free_mem_cgroup_pages(struct mem_cgroup *mem_cont,
gfp_t gfp_mask,
bool noswap,
unsigned int swappiness)
static bool pgdat_balanced(pg_data_t *pgdat, unsigned long balanced_pages,
int classzone_idx)
static bool sleeping_prematurely(pg_data_t *pgdat, int order, long remaining,
int classzone_idx)
static unsigned long balance_pgdat(pg_data_t *pgdat, int order,
int *classzone_idx)
static void kswapd_try_to_sleep(pg_data_t *pgdat, int order, int classzone_idx)
static int kswapd(void *p)
void wakeup_kswapd(struct zone *zone, int order, enum zone_type classzone_idx)
unsigned long global_reclaimable_pages(void)
unsigned long zone_reclaimable_pages(struct zone *zone)
unsigned long shrink_all_memory(unsigned long nr_to_reclaim)
static int __devinit cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
int kswapd_run(int nid)
void kswapd_stop(int nid)
static int __init kswapd_init(void)
module_init(kswapd_init)
int zone_reclaim_mode __read_mostly;
#define RECLAIM_OFF 0
#define RECLAIM_ZONE (1<<0)
#define RECLAIM_WRITE (1<<1)
#define RECLAIM_SWAP (1<<2)
#define ZONE_RECLAIM_PRIORITY 4
int sysctl_min_unmapped_ratio = 1;
int sysctl_min_slab_ratio = 5;
static inline unsigned long zone_unmapped_file_pages(struct zone *zone)
static long zone_pagecache_reclaimable(struct zone *zone)
static int __zone_reclaim(struct zone *zone, gfp_t gfp_mask, unsigned int order)
int zone_reclaim(struct zone *zone, gfp_t gfp_mask, unsigned int order)
int page_evictable(struct page *page, struct vm_area_struct *vma)
static void check_move_unevictable_page(struct page *page, struct zone *zone)
void scan_mapping_unevictable_pages(struct address_space *mapping)
#define SCAN_UNEVICTABLE_BATCH_SIZE 16UL
static void scan_zone_unevictable_pages(struct zone *zone)
static void scan_all_zones_unevictable_pages(void)
unsigned long scan_unevictable_pages;
int scan_unevictable_handler(struct ctl_table *table, int write,
void __user *buffer,
size_t *length, loff_t *ppos)
static ssize_t read_scan_unevictable_node(struct sys_device *dev,
struct sysdev_attribute *attr,
char *buf)
static ssize_t write_scan_unevictable_node(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(scan_unevictable_pages, S_IRUGO | S_IWUSR,
read_scan_unevictable_node,
write_scan_unevictable_node);
int scan_unevictable_register_node(struct node *node)
void scan_unevictable_unregister_node(struct node *node)
