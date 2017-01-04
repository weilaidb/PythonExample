struct cgroup_subsys mem_cgroup_subsys __read_mostly;
#define MEM_CGROUP_RECLAIM_RETRIES	5
struct mem_cgroup *root_mem_cgroup __read_mostly;
int do_swap_account __read_mostly;
static int really_do_swap_account __initdata = 1;
static int really_do_swap_account __initdata = 0;
#define do_swap_account		(0)
enum mem_cgroup_stat_index ;
enum mem_cgroup_events_index ;
enum mem_cgroup_events_target ;
#define THRESHOLDS_EVENTS_TARGET (128)
#define SOFTLIMIT_EVENTS_TARGET (1024)
#define NUMAINFO_EVENTS_TARGET	(1024)
struct mem_cgroup_stat_cpu ;
struct mem_cgroup_per_zone ;
#define MEM_CGROUP_ZSTAT(mz, idx)	((mz)->count[(idx)])
struct mem_cgroup_per_node ;
struct mem_cgroup_lru_info ;
struct mem_cgroup_tree_per_zone ;
struct mem_cgroup_tree_per_node ;
struct mem_cgroup_tree ;
static struct mem_cgroup_tree soft_limit_tree __read_mostly;
struct mem_cgroup_threshold ;
struct mem_cgroup_threshold_ary ;
struct mem_cgroup_thresholds ;
struct mem_cgroup_eventfd_list ;
static void mem_cgroup_threshold(struct mem_cgroup *mem);
static void mem_cgroup_oom_notify(struct mem_cgroup *mem);
struct mem_cgroup ;
enum move_type ;
static struct move_charge_struct  mc = ;
static bool move_anon(void)
static bool move_file(void)
#define	MEM_CGROUP_MAX_RECLAIM_LOOPS		(100)
#define	MEM_CGROUP_MAX_SOFT_LIMIT_RECLAIM_LOOPS	(2)
enum charge_type ;
#define _MEM			(0)
#define _MEMSWAP		(1)
#define _OOM_TYPE		(2)
#define MEMFILE_PRIVATE(x, val)	(((x) << 16) | (val))
#define MEMFILE_TYPE(val)	(((val) >> 16) & 0xffff)
#define MEMFILE_ATTR(val)	((val) & 0xffff)
#define OOM_CONTROL		(0)
#define MEM_CGROUP_RECLAIM_NOSWAP_BIT	0x0
#define MEM_CGROUP_RECLAIM_NOSWAP	(1 << MEM_CGROUP_RECLAIM_NOSWAP_BIT)
#define MEM_CGROUP_RECLAIM_SHRINK_BIT	0x1
#define MEM_CGROUP_RECLAIM_SHRINK	(1 << MEM_CGROUP_RECLAIM_SHRINK_BIT)
#define MEM_CGROUP_RECLAIM_SOFT_BIT	0x2
#define MEM_CGROUP_RECLAIM_SOFT		(1 << MEM_CGROUP_RECLAIM_SOFT_BIT)
static void mem_cgroup_get(struct mem_cgroup *mem);
static void mem_cgroup_put(struct mem_cgroup *mem);
static struct mem_cgroup *parent_mem_cgroup(struct mem_cgroup *mem);
static void drain_all_stock_async(struct mem_cgroup *mem);
static struct mem_cgroup_per_zone *
mem_cgroup_zoneinfo(struct mem_cgroup *mem, int nid, int zid)
struct cgroup_subsys_state *mem_cgroup_css(struct mem_cgroup *mem)
static struct mem_cgroup_per_zone *
page_cgroup_zoneinfo(struct mem_cgroup *mem, struct page *page)
static struct mem_cgroup_tree_per_zone *
soft_limit_tree_node_zone(int nid, int zid)
static struct mem_cgroup_tree_per_zone *
soft_limit_tree_from_page(struct page *page)
static void
__mem_cgroup_insert_exceeded(struct mem_cgroup *mem,
struct mem_cgroup_per_zone *mz,
struct mem_cgroup_tree_per_zone *mctz,
unsigned long long new_usage_in_excess)
static void
__mem_cgroup_remove_exceeded(struct mem_cgroup *mem,
struct mem_cgroup_per_zone *mz,
struct mem_cgroup_tree_per_zone *mctz)
static void
mem_cgroup_remove_exceeded(struct mem_cgroup *mem,
struct mem_cgroup_per_zone *mz,
struct mem_cgroup_tree_per_zone *mctz)
static void mem_cgroup_update_tree(struct mem_cgroup *mem, struct page *page)
static void mem_cgroup_remove_from_trees(struct mem_cgroup *mem)
static struct mem_cgroup_per_zone *
__mem_cgroup_largest_soft_limit_node(struct mem_cgroup_tree_per_zone *mctz)
static struct mem_cgroup_per_zone *
mem_cgroup_largest_soft_limit_node(struct mem_cgroup_tree_per_zone *mctz)
static long mem_cgroup_read_stat(struct mem_cgroup *mem,
enum mem_cgroup_stat_index idx)
static void mem_cgroup_swap_statistics(struct mem_cgroup *mem,
bool charge)
void mem_cgroup_pgfault(struct mem_cgroup *mem, int val)
void mem_cgroup_pgmajfault(struct mem_cgroup *mem, int val)
static unsigned long mem_cgroup_read_events(struct mem_cgroup *mem,
enum mem_cgroup_events_index idx)
static void mem_cgroup_charge_statistics(struct mem_cgroup *mem,
bool file, int nr_pages)
static unsigned long
mem_cgroup_get_zonestat_node(struct mem_cgroup *mem, int nid, enum lru_list idx)
static unsigned long mem_cgroup_get_local_zonestat(struct mem_cgroup *mem,
enum lru_list idx)
static bool __memcg_event_check(struct mem_cgroup *mem, int target)
static void __mem_cgroup_target_update(struct mem_cgroup *mem, int target)
static void memcg_check_events(struct mem_cgroup *mem, struct page *page)
static struct mem_cgroup *mem_cgroup_from_cont(struct cgroup *cont)
struct mem_cgroup *mem_cgroup_from_task(struct task_struct *p)
struct mem_cgroup *try_get_mem_cgroup_from_mm(struct mm_struct *mm)
static struct mem_cgroup *mem_cgroup_start_loop(struct mem_cgroup *mem)
static struct mem_cgroup *mem_cgroup_get_next(struct mem_cgroup *iter,
struct mem_cgroup *root,
bool cond)
#define for_each_mem_cgroup_tree_cond(iter, root, cond)	\
for (iter = mem_cgroup_start_loop(root);\
iter != NULL;\
iter = mem_cgroup_get_next(iter, root, cond))
#define for_each_mem_cgroup_tree(iter, root) \
for_each_mem_cgroup_tree_cond(iter, root, true)
#define for_each_mem_cgroup_all(iter) \
for_each_mem_cgroup_tree_cond(iter, NULL, true)
static inline bool mem_cgroup_is_root(struct mem_cgroup *mem)
void mem_cgroup_count_vm_event(struct mm_struct *mm, enum vm_event_item idx)
EXPORT_SYMBOL(mem_cgroup_count_vm_event);
void mem_cgroup_del_lru_list(struct page *page, enum lru_list lru)
void mem_cgroup_del_lru(struct page *page)
void mem_cgroup_rotate_reclaimable_page(struct page *page)
void mem_cgroup_rotate_lru_list(struct page *page, enum lru_list lru)
void mem_cgroup_add_lru_list(struct page *page, enum lru_list lru)
static void mem_cgroup_lru_del_before_commit(struct page *page)
static void mem_cgroup_lru_add_after_commit(struct page *page)
void mem_cgroup_move_lists(struct page *page,
enum lru_list from, enum lru_list to)
int task_in_mem_cgroup(struct task_struct *task, const struct mem_cgroup *mem)
static int calc_inactive_ratio(struct mem_cgroup *memcg, unsigned long *present_pages)
int mem_cgroup_inactive_anon_is_low(struct mem_cgroup *memcg)
int mem_cgroup_inactive_file_is_low(struct mem_cgroup *memcg)
unsigned long mem_cgroup_zone_nr_lru_pages(struct mem_cgroup *memcg,
struct zone *zone,
enum lru_list lru)
static unsigned long mem_cgroup_node_nr_file_lru_pages(struct mem_cgroup *memcg,
int nid)
static unsigned long mem_cgroup_node_nr_anon_lru_pages(struct mem_cgroup *memcg,
int nid)
#if MAX_NUMNODES > 1
static unsigned long mem_cgroup_nr_file_lru_pages(struct mem_cgroup *memcg)
static unsigned long mem_cgroup_nr_anon_lru_pages(struct mem_cgroup *memcg)
static unsigned long
mem_cgroup_node_nr_unevictable_lru_pages(struct mem_cgroup *memcg, int nid)
static unsigned long
mem_cgroup_nr_unevictable_lru_pages(struct mem_cgroup *memcg)
static unsigned long mem_cgroup_node_nr_lru_pages(struct mem_cgroup *memcg,
int nid)
static unsigned long mem_cgroup_nr_lru_pages(struct mem_cgroup *memcg)
struct zone_reclaim_stat *mem_cgroup_get_reclaim_stat(struct mem_cgroup *memcg,
struct zone *zone)
struct zone_reclaim_stat *
mem_cgroup_get_reclaim_stat_from_page(struct page *page)
unsigned long mem_cgroup_isolate_pages(unsigned long nr_to_scan,
struct list_head *dst,
unsigned long *scanned, int order,
int mode, struct zone *z,
struct mem_cgroup *mem_cont,
int active, int file)
#define mem_cgroup_from_res_counter(counter, member)	\
container_of(counter, struct mem_cgroup, member)
static unsigned long mem_cgroup_margin(struct mem_cgroup *mem)
static unsigned int get_swappiness(struct mem_cgroup *memcg)
static void mem_cgroup_start_move(struct mem_cgroup *mem)
static void mem_cgroup_end_move(struct mem_cgroup *mem)
static bool mem_cgroup_stealed(struct mem_cgroup *mem)
static bool mem_cgroup_under_move(struct mem_cgroup *mem)
static bool mem_cgroup_wait_acct_move(struct mem_cgroup *mem)
void mem_cgroup_print_oom_info(struct mem_cgroup *memcg, struct task_struct *p)
static int mem_cgroup_count_children(struct mem_cgroup *mem)
u64 mem_cgroup_get_limit(struct mem_cgroup *memcg)
static struct mem_cgroup *
mem_cgroup_select_victim(struct mem_cgroup *root_mem)
static bool test_mem_cgroup_node_reclaimable(struct mem_cgroup *mem,
int nid, bool noswap)
#if MAX_NUMNODES > 1
static void mem_cgroup_may_update_nodemask(struct mem_cgroup *mem)
int mem_cgroup_select_victim_node(struct mem_cgroup *mem)
bool mem_cgroup_reclaimable(struct mem_cgroup *mem, bool noswap)
int mem_cgroup_select_victim_node(struct mem_cgroup *mem)
bool mem_cgroup_reclaimable(struct mem_cgroup *mem, bool noswap)
static int mem_cgroup_hierarchical_reclaim(struct mem_cgroup *root_mem,
struct zone *zone,
gfp_t gfp_mask,
unsigned long reclaim_options,
unsigned long *total_scanned)
static bool mem_cgroup_oom_lock(struct mem_cgroup *mem)
static int mem_cgroup_oom_unlock(struct mem_cgroup *mem)
static DEFINE_MUTEX(memcg_oom_mutex);
static DECLARE_WAIT_QUEUE_HEAD(memcg_oom_waitq);
struct oom_wait_info ;
static int memcg_oom_wake_function(wait_queue_t *wait,
unsigned mode, int sync, void *arg)
static void memcg_wakeup_oom(struct mem_cgroup *mem)
static void memcg_oom_recover(struct mem_cgroup *mem)
bool mem_cgroup_handle_oom(struct mem_cgroup *mem, gfp_t mask)
void mem_cgroup_update_page_stat(struct page *page,
enum mem_cgroup_page_stat_item idx, int val)
EXPORT_SYMBOL(mem_cgroup_update_page_stat);
#define CHARGE_BATCH	32U
struct memcg_stock_pcp ;
static DEFINE_PER_CPU(struct memcg_stock_pcp, memcg_stock);
static DEFINE_MUTEX(percpu_charge_mutex);
static bool consume_stock(struct mem_cgroup *mem)
static void drain_stock(struct memcg_stock_pcp *stock)
static void drain_local_stock(struct work_struct *dummy)
static void refill_stock(struct mem_cgroup *mem, unsigned int nr_pages)
static void drain_all_stock_async(struct mem_cgroup *root_mem)
static void drain_all_stock_sync(void)
static void mem_cgroup_drain_pcp_counter(struct mem_cgroup *mem, int cpu)
static void synchronize_mem_cgroup_on_move(struct mem_cgroup *mem, int cpu)
static int __cpuinit memcg_cpu_hotplug_callback(struct notifier_block *nb,
unsigned long action,
void *hcpu)
enum ;
static int mem_cgroup_do_charge(struct mem_cgroup *mem, gfp_t gfp_mask,
unsigned int nr_pages, bool oom_check)
static int __mem_cgroup_try_charge(struct mm_struct *mm,
gfp_t gfp_mask,
unsigned int nr_pages,
struct mem_cgroup **memcg,
bool oom)
static void __mem_cgroup_cancel_charge(struct mem_cgroup *mem,
unsigned int nr_pages)
static struct mem_cgroup *mem_cgroup_lookup(unsigned short id)
struct mem_cgroup *try_get_mem_cgroup_from_page(struct page *page)
static void __mem_cgroup_commit_charge(struct mem_cgroup *mem,
struct page *page,
unsigned int nr_pages,
struct page_cgroup *pc,
enum charge_type ctype)
#define PCGF_NOCOPY_AT_SPLIT ((1 << PCG_LOCK) | (1 << PCG_MOVE_LOCK) |\
(1 << PCG_ACCT_LRU) | (1 << PCG_MIGRATION))
void mem_cgroup_split_huge_fixup(struct page *head, struct page *tail)
static int mem_cgroup_move_account(struct page *page,
unsigned int nr_pages,
struct page_cgroup *pc,
struct mem_cgroup *from,
struct mem_cgroup *to,
bool uncharge)
static int mem_cgroup_move_parent(struct page *page,
struct page_cgroup *pc,
struct mem_cgroup *child,
gfp_t gfp_mask)
static int mem_cgroup_charge_common(struct page *page, struct mm_struct *mm,
gfp_t gfp_mask, enum charge_type ctype)
int mem_cgroup_newpage_charge(struct page *page,
struct mm_struct *mm, gfp_t gfp_mask)
static void
__mem_cgroup_commit_charge_swapin(struct page *page, struct mem_cgroup *ptr,
enum charge_type ctype);
static void
__mem_cgroup_commit_charge_lrucare(struct page *page, struct mem_cgroup *mem,
enum charge_type ctype)
int mem_cgroup_cache_charge(struct page *page, struct mm_struct *mm,
gfp_t gfp_mask)
int mem_cgroup_try_charge_swapin(struct mm_struct *mm,
struct page *page,
gfp_t mask, struct mem_cgroup **ptr)
static void
__mem_cgroup_commit_charge_swapin(struct page *page, struct mem_cgroup *ptr,
enum charge_type ctype)
void mem_cgroup_commit_charge_swapin(struct page *page, struct mem_cgroup *ptr)
void mem_cgroup_cancel_charge_swapin(struct mem_cgroup *mem)
static void mem_cgroup_do_uncharge(struct mem_cgroup *mem,
unsigned int nr_pages,
const enum charge_type ctype)
static struct mem_cgroup *
__mem_cgroup_uncharge_common(struct page *page, enum charge_type ctype)
void mem_cgroup_uncharge_page(struct page *page)
void mem_cgroup_uncharge_cache_page(struct page *page)
void mem_cgroup_uncharge_start(void)
void mem_cgroup_uncharge_end(void)
void
mem_cgroup_uncharge_swapcache(struct page *page, swp_entry_t ent, bool swapout)
void mem_cgroup_uncharge_swap(swp_entry_t ent)
static int mem_cgroup_move_swap_account(swp_entry_t entry,
struct mem_cgroup *from, struct mem_cgroup *to, bool need_fixup)
static inline int mem_cgroup_move_swap_account(swp_entry_t entry,
struct mem_cgroup *from, struct mem_cgroup *to, bool need_fixup)
int mem_cgroup_prepare_migration(struct page *page,
struct page *newpage, struct mem_cgroup **ptr, gfp_t gfp_mask)
void mem_cgroup_end_migration(struct mem_cgroup *mem,
struct page *oldpage, struct page *newpage, bool migration_ok)
int mem_cgroup_shmem_charge_fallback(struct page *page,
struct mm_struct *mm,
gfp_t gfp_mask)
static struct page_cgroup *lookup_page_cgroup_used(struct page *page)
bool mem_cgroup_bad_page_check(struct page *page)
void mem_cgroup_print_bad_page(struct page *page)
static DEFINE_MUTEX(set_limit_mutex);
static int mem_cgroup_resize_limit(struct mem_cgroup *memcg,
unsigned long long val)
static int mem_cgroup_resize_memsw_limit(struct mem_cgroup *memcg,
unsigned long long val)
unsigned long mem_cgroup_soft_limit_reclaim(struct zone *zone, int order,
gfp_t gfp_mask,
unsigned long *total_scanned)
static int mem_cgroup_force_empty_list(struct mem_cgroup *mem,
int node, int zid, enum lru_list lru)
static int mem_cgroup_force_empty(struct mem_cgroup *mem, bool free_all)
int mem_cgroup_force_empty_write(struct cgroup *cont, unsigned int event)
static u64 mem_cgroup_hierarchy_read(struct cgroup *cont, struct cftype *cft)
static int mem_cgroup_hierarchy_write(struct cgroup *cont, struct cftype *cft,
u64 val)
static unsigned long mem_cgroup_recursive_stat(struct mem_cgroup *mem,
enum mem_cgroup_stat_index idx)
static inline u64 mem_cgroup_usage(struct mem_cgroup *mem, bool swap)
static u64 mem_cgroup_read(struct cgroup *cont, struct cftype *cft)
static int mem_cgroup_write(struct cgroup *cont, struct cftype *cft,
const char *buffer)
static void memcg_get_hierarchical_limit(struct mem_cgroup *memcg,
unsigned long long *mem_limit, unsigned long long *memsw_limit)
static int mem_cgroup_reset(struct cgroup *cont, unsigned int event)
static u64 mem_cgroup_move_charge_read(struct cgroup *cgrp,
struct cftype *cft)
static int mem_cgroup_move_charge_write(struct cgroup *cgrp,
struct cftype *cft, u64 val)
static int mem_cgroup_move_charge_write(struct cgroup *cgrp,
struct cftype *cft, u64 val)
enum ;
struct mcs_total_stat ;
struct  memcg_stat_strings[NR_MCS_STAT] = ;
static void
mem_cgroup_get_local_stat(struct mem_cgroup *mem, struct mcs_total_stat *s)
static void
mem_cgroup_get_total_stat(struct mem_cgroup *mem, struct mcs_total_stat *s)
static int mem_control_numa_stat_show(struct seq_file *m, void *arg)
static int mem_control_stat_show(struct cgroup *cont, struct cftype *cft,
struct cgroup_map_cb *cb)
static u64 mem_cgroup_swappiness_read(struct cgroup *cgrp, struct cftype *cft)
static int mem_cgroup_swappiness_write(struct cgroup *cgrp, struct cftype *cft,
u64 val)
static void __mem_cgroup_threshold(struct mem_cgroup *memcg, bool swap)
static void mem_cgroup_threshold(struct mem_cgroup *memcg)
static int compare_thresholds(const void *a, const void *b)
static int mem_cgroup_oom_notify_cb(struct mem_cgroup *mem)
static void mem_cgroup_oom_notify(struct mem_cgroup *mem)
static int mem_cgroup_usage_register_event(struct cgroup *cgrp,
struct cftype *cft, struct eventfd_ctx *eventfd, const char *args)
static void mem_cgroup_usage_unregister_event(struct cgroup *cgrp,
struct cftype *cft, struct eventfd_ctx *eventfd)
static int mem_cgroup_oom_register_event(struct cgroup *cgrp,
struct cftype *cft, struct eventfd_ctx *eventfd, const char *args)
static void mem_cgroup_oom_unregister_event(struct cgroup *cgrp,
struct cftype *cft, struct eventfd_ctx *eventfd)
static int mem_cgroup_oom_control_read(struct cgroup *cgrp,
struct cftype *cft,  struct cgroup_map_cb *cb)
static int mem_cgroup_oom_control_write(struct cgroup *cgrp,
struct cftype *cft, u64 val)
static const struct file_operations mem_control_numa_stat_file_operations = ;
static int mem_control_numa_stat_open(struct inode *unused, struct file *file)
static struct cftype mem_cgroup_files[] = ;
static struct cftype memsw_cgroup_files[] = ;
static int register_memsw_files(struct cgroup *cont, struct cgroup_subsys *ss)
;
static int register_memsw_files(struct cgroup *cont, struct cgroup_subsys *ss)
static int alloc_mem_cgroup_per_zone_info(struct mem_cgroup *mem, int node)
static void free_mem_cgroup_per_zone_info(struct mem_cgroup *mem, int node)
static struct mem_cgroup *mem_cgroup_alloc(void)
static void __mem_cgroup_free(struct mem_cgroup *mem)
static void mem_cgroup_get(struct mem_cgroup *mem)
static void __mem_cgroup_put(struct mem_cgroup *mem, int count)
static void mem_cgroup_put(struct mem_cgroup *mem)
static struct mem_cgroup *parent_mem_cgroup(struct mem_cgroup *mem)
static void __init enable_swap_cgroup(void)
static void __init enable_swap_cgroup(void)
static int mem_cgroup_soft_limit_tree_init(void)
static struct cgroup_subsys_state * __ref
mem_cgroup_create(struct cgroup_subsys *ss, struct cgroup *cont)
static int mem_cgroup_pre_destroy(struct cgroup_subsys *ss,
struct cgroup *cont)
static void mem_cgroup_destroy(struct cgroup_subsys *ss,
struct cgroup *cont)
static int mem_cgroup_populate(struct cgroup_subsys *ss,
struct cgroup *cont)
#define PRECHARGE_COUNT_AT_ONCE	256
static int mem_cgroup_do_precharge(unsigned long count)
union mc_target ;
enum mc_target_type ;
static struct page *mc_handle_present_pte(struct vm_area_struct *vma,
unsigned long addr, pte_t ptent)
static struct page *mc_handle_swap_pte(struct vm_area_struct *vma,
unsigned long addr, pte_t ptent, swp_entry_t *entry)
static struct page *mc_handle_file_pte(struct vm_area_struct *vma,
unsigned long addr, pte_t ptent, swp_entry_t *entry)
static int is_target_pte_for_mc(struct vm_area_struct *vma,
unsigned long addr, pte_t ptent, union mc_target *target)
static int mem_cgroup_count_precharge_pte_range(pmd_t *pmd,
unsigned long addr, unsigned long end,
struct mm_walk *walk)
static unsigned long mem_cgroup_count_precharge(struct mm_struct *mm)
static int mem_cgroup_precharge_mc(struct mm_struct *mm)
static void __mem_cgroup_clear_mc(void)
static void mem_cgroup_clear_mc(void)
static int mem_cgroup_can_attach(struct cgroup_subsys *ss,
struct cgroup *cgroup,
struct task_struct *p)
static void mem_cgroup_cancel_attach(struct cgroup_subsys *ss,
struct cgroup *cgroup,
struct task_struct *p)
static int mem_cgroup_move_charge_pte_range(pmd_t *pmd,
unsigned long addr, unsigned long end,
struct mm_walk *walk)
static void mem_cgroup_move_charge(struct mm_struct *mm)
static void mem_cgroup_move_task(struct cgroup_subsys *ss,
struct cgroup *cont,
struct cgroup *old_cont,
struct task_struct *p)
static int mem_cgroup_can_attach(struct cgroup_subsys *ss,
struct cgroup *cgroup,
struct task_struct *p)
static void mem_cgroup_cancel_attach(struct cgroup_subsys *ss,
struct cgroup *cgroup,
struct task_struct *p)
static void mem_cgroup_move_task(struct cgroup_subsys *ss,
struct cgroup *cont,
struct cgroup *old_cont,
struct task_struct *p)
struct cgroup_subsys mem_cgroup_subsys = ;
static int __init enable_swap_account(char *s)
__setup("swapaccount=", enable_swap_account);
