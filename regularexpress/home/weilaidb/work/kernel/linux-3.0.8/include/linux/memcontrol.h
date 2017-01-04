#define _LINUX_MEMCONTROL_H
struct mem_cgroup;
struct page_cgroup;
struct page;
struct mm_struct;
enum mem_cgroup_page_stat_item ;
extern unsigned long mem_cgroup_isolate_pages(unsigned long nr_to_scan,
struct list_head *dst,
unsigned long *scanned, int order,
int mode, struct zone *z,
struct mem_cgroup *mem_cont,
int active, int file);
extern int mem_cgroup_newpage_charge(struct page *page, struct mm_struct *mm,
gfp_t gfp_mask);
extern int mem_cgroup_try_charge_swapin(struct mm_struct *mm,
struct page *page, gfp_t mask, struct mem_cgroup **ptr);
extern void mem_cgroup_commit_charge_swapin(struct page *page,
struct mem_cgroup *ptr);
extern void mem_cgroup_cancel_charge_swapin(struct mem_cgroup *ptr);
extern int mem_cgroup_cache_charge(struct page *page, struct mm_struct *mm,
gfp_t gfp_mask);
extern void mem_cgroup_add_lru_list(struct page *page, enum lru_list lru);
extern void mem_cgroup_del_lru_list(struct page *page, enum lru_list lru);
extern void mem_cgroup_rotate_reclaimable_page(struct page *page);
extern void mem_cgroup_rotate_lru_list(struct page *page, enum lru_list lru);
extern void mem_cgroup_del_lru(struct page *page);
extern void mem_cgroup_move_lists(struct page *page,
enum lru_list from, enum lru_list to);
extern void mem_cgroup_uncharge_start(void);
extern void mem_cgroup_uncharge_end(void);
extern void mem_cgroup_uncharge_page(struct page *page);
extern void mem_cgroup_uncharge_cache_page(struct page *page);
extern int mem_cgroup_shmem_charge_fallback(struct page *page,
struct mm_struct *mm, gfp_t gfp_mask);
extern void mem_cgroup_out_of_memory(struct mem_cgroup *mem, gfp_t gfp_mask);
int task_in_mem_cgroup(struct task_struct *task, const struct mem_cgroup *mem);
extern struct mem_cgroup *try_get_mem_cgroup_from_page(struct page *page);
extern struct mem_cgroup *mem_cgroup_from_task(struct task_struct *p);
extern struct mem_cgroup *try_get_mem_cgroup_from_mm(struct mm_struct *mm);
static inline
int mm_match_cgroup(const struct mm_struct *mm, const struct mem_cgroup *cgroup)
extern struct cgroup_subsys_state *mem_cgroup_css(struct mem_cgroup *mem);
extern int
mem_cgroup_prepare_migration(struct page *page,
struct page *newpage, struct mem_cgroup **ptr, gfp_t gfp_mask);
extern void mem_cgroup_end_migration(struct mem_cgroup *mem,
struct page *oldpage, struct page *newpage, bool migration_ok);
int mem_cgroup_inactive_anon_is_low(struct mem_cgroup *memcg);
int mem_cgroup_inactive_file_is_low(struct mem_cgroup *memcg);
int mem_cgroup_select_victim_node(struct mem_cgroup *memcg);
unsigned long mem_cgroup_zone_nr_lru_pages(struct mem_cgroup *memcg,
struct zone *zone,
enum lru_list lru);
struct zone_reclaim_stat *mem_cgroup_get_reclaim_stat(struct mem_cgroup *memcg,
struct zone *zone);
struct zone_reclaim_stat*
mem_cgroup_get_reclaim_stat_from_page(struct page *page);
extern void mem_cgroup_print_oom_info(struct mem_cgroup *memcg,
struct task_struct *p);
extern int do_swap_account;
static inline bool mem_cgroup_disabled(void)
void mem_cgroup_update_page_stat(struct page *page,
enum mem_cgroup_page_stat_item idx,
int val);
static inline void mem_cgroup_inc_page_stat(struct page *page,
enum mem_cgroup_page_stat_item idx)
static inline void mem_cgroup_dec_page_stat(struct page *page,
enum mem_cgroup_page_stat_item idx)
unsigned long mem_cgroup_soft_limit_reclaim(struct zone *zone, int order,
gfp_t gfp_mask,
unsigned long *total_scanned);
u64 mem_cgroup_get_limit(struct mem_cgroup *mem);
void mem_cgroup_count_vm_event(struct mm_struct *mm, enum vm_event_item idx);
void mem_cgroup_split_huge_fixup(struct page *head, struct page *tail);
bool mem_cgroup_bad_page_check(struct page *page);
void mem_cgroup_print_bad_page(struct page *page);
struct mem_cgroup;
static inline int mem_cgroup_newpage_charge(struct page *page,
struct mm_struct *mm, gfp_t gfp_mask)
static inline int mem_cgroup_cache_charge(struct page *page,
struct mm_struct *mm, gfp_t gfp_mask)
static inline int mem_cgroup_try_charge_swapin(struct mm_struct *mm,
struct page *page, gfp_t gfp_mask, struct mem_cgroup **ptr)
static inline void mem_cgroup_commit_charge_swapin(struct page *page,
struct mem_cgroup *ptr)
static inline void mem_cgroup_cancel_charge_swapin(struct mem_cgroup *ptr)
static inline void mem_cgroup_uncharge_start(void)
static inline void mem_cgroup_uncharge_end(void)
static inline void mem_cgroup_uncharge_page(struct page *page)
static inline void mem_cgroup_uncharge_cache_page(struct page *page)
static inline int mem_cgroup_shmem_charge_fallback(struct page *page,
struct mm_struct *mm, gfp_t gfp_mask)
static inline void mem_cgroup_add_lru_list(struct page *page, int lru)
static inline void mem_cgroup_del_lru_list(struct page *page, int lru)
static inline void mem_cgroup_rotate_reclaimable_page(struct page *page)
static inline void mem_cgroup_rotate_lru_list(struct page *page, int lru)
static inline void mem_cgroup_del_lru(struct page *page)
static inline void
mem_cgroup_move_lists(struct page *page, enum lru_list from, enum lru_list to)
static inline struct mem_cgroup *try_get_mem_cgroup_from_page(struct page *page)
static inline struct mem_cgroup *try_get_mem_cgroup_from_mm(struct mm_struct *mm)
static inline int mm_match_cgroup(struct mm_struct *mm, struct mem_cgroup *mem)
static inline int task_in_mem_cgroup(struct task_struct *task,
const struct mem_cgroup *mem)
static inline struct cgroup_subsys_state *mem_cgroup_css(struct mem_cgroup *mem)
static inline int
mem_cgroup_prepare_migration(struct page *page, struct page *newpage,
struct mem_cgroup **ptr, gfp_t gfp_mask)
static inline void mem_cgroup_end_migration(struct mem_cgroup *mem,
struct page *oldpage, struct page *newpage, bool migration_ok)
static inline int mem_cgroup_get_reclaim_priority(struct mem_cgroup *mem)
static inline void mem_cgroup_note_reclaim_priority(struct mem_cgroup *mem,
int priority)
static inline void mem_cgroup_record_reclaim_priority(struct mem_cgroup *mem,
int priority)
static inline bool mem_cgroup_disabled(void)
static inline int
mem_cgroup_inactive_anon_is_low(struct mem_cgroup *memcg)
static inline int
mem_cgroup_inactive_file_is_low(struct mem_cgroup *memcg)
static inline unsigned long
mem_cgroup_zone_nr_lru_pages(struct mem_cgroup *memcg, struct zone *zone,
enum lru_list lru)
static inline struct zone_reclaim_stat*
mem_cgroup_get_reclaim_stat(struct mem_cgroup *memcg, struct zone *zone)
static inline struct zone_reclaim_stat*
mem_cgroup_get_reclaim_stat_from_page(struct page *page)
static inline void
mem_cgroup_print_oom_info(struct mem_cgroup *memcg, struct task_struct *p)
static inline void mem_cgroup_inc_page_stat(struct page *page,
enum mem_cgroup_page_stat_item idx)
static inline void mem_cgroup_dec_page_stat(struct page *page,
enum mem_cgroup_page_stat_item idx)
static inline
unsigned long mem_cgroup_soft_limit_reclaim(struct zone *zone, int order,
gfp_t gfp_mask,
unsigned long *total_scanned)
static inline
u64 mem_cgroup_get_limit(struct mem_cgroup *mem)
static inline void mem_cgroup_split_huge_fixup(struct page *head,
struct page *tail)
static inline
void mem_cgroup_count_vm_event(struct mm_struct *mm, enum vm_event_item idx)
#if !defined(CONFIG_CGROUP_MEM_RES_CTLR) || !defined(CONFIG_DEBUG_VM)
static inline bool
mem_cgroup_bad_page_check(struct page *page)
static inline void
mem_cgroup_print_bad_page(struct page *page)
