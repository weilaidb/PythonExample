int sysctl_memory_failure_early_kill __read_mostly = 0;
int sysctl_memory_failure_recovery __read_mostly = 1;
atomic_long_t mce_bad_pages __read_mostly = ATOMIC_LONG_INIT(0);
#if defined(CONFIG_HWPOISON_INJECT) || defined(CONFIG_HWPOISON_INJECT_MODULE)
u32 hwpoison_filter_enable = 0;
u32 hwpoison_filter_dev_major = ~0U;
u32 hwpoison_filter_dev_minor = ~0U;
u64 hwpoison_filter_flags_mask;
u64 hwpoison_filter_flags_value;
EXPORT_SYMBOL_GPL(hwpoison_filter_enable);
EXPORT_SYMBOL_GPL(hwpoison_filter_dev_major);
EXPORT_SYMBOL_GPL(hwpoison_filter_dev_minor);
EXPORT_SYMBOL_GPL(hwpoison_filter_flags_mask);
EXPORT_SYMBOL_GPL(hwpoison_filter_flags_value);
static int hwpoison_filter_dev(struct page *p)
static int hwpoison_filter_flags(struct page *p)
u64 hwpoison_filter_memcg;
EXPORT_SYMBOL_GPL(hwpoison_filter_memcg);
static int hwpoison_filter_task(struct page *p)
static int hwpoison_filter_task(struct page *p)
int hwpoison_filter(struct page *p)
int hwpoison_filter(struct page *p)
EXPORT_SYMBOL_GPL(hwpoison_filter);
static int kill_proc_ao(struct task_struct *t, unsigned long addr, int trapno,
unsigned long pfn, struct page *page)
void shake_page(struct page *p, int access)
EXPORT_SYMBOL_GPL(shake_page);
struct to_kill ;
static void add_to_kill(struct task_struct *tsk, struct page *p,
struct vm_area_struct *vma,
struct list_head *to_kill,
struct to_kill **tkc)
static void kill_procs_ao(struct list_head *to_kill, int doit, int trapno,
int fail, struct page *page, unsigned long pfn)
static int task_early_kill(struct task_struct *tsk)
static void collect_procs_anon(struct page *page, struct list_head *to_kill,
struct to_kill **tkc)
static void collect_procs_file(struct page *page, struct list_head *to_kill,
struct to_kill **tkc)
static void collect_procs(struct page *page, struct list_head *tokill)
enum outcome ;
static const char *action_name[] = ;
static int delete_from_lru_cache(struct page *p)
static int me_kernel(struct page *p, unsigned long pfn)
static int me_unknown(struct page *p, unsigned long pfn)
static int me_pagecache_clean(struct page *p, unsigned long pfn)
static int me_pagecache_dirty(struct page *p, unsigned long pfn)
static int me_swapcache_dirty(struct page *p, unsigned long pfn)
static int me_swapcache_clean(struct page *p, unsigned long pfn)
static int me_huge_page(struct page *p, unsigned long pfn)
#define dirty		(1UL << PG_dirty)
#define sc		(1UL << PG_swapcache)
#define unevict		(1UL << PG_unevictable)
#define mlock		(1UL << PG_mlocked)
#define writeback	(1UL << PG_writeback)
#define lru		(1UL << PG_lru)
#define swapbacked	(1UL << PG_swapbacked)
#define head		(1UL << PG_head)
#define tail		(1UL << PG_tail)
#define compound	(1UL << PG_compound)
#define slab		(1UL << PG_slab)
#define reserved	(1UL << PG_reserved)
static struct page_state  error_states[] = ;
#undef dirty
#undef sc
#undef unevict
#undef mlock
#undef writeback
#undef lru
#undef swapbacked
#undef head
#undef tail
#undef compound
#undef slab
#undef reserved
static void action_result(unsigned long pfn, char *msg, int result)
static int page_action(struct page_state *ps, struct page *p,
unsigned long pfn)
static int hwpoison_user_mappings(struct page *p, unsigned long pfn,
int trapno)
static void set_page_hwpoison_huge_page(struct page *hpage)
static void clear_page_hwpoison_huge_page(struct page *hpage)
int __memory_failure(unsigned long pfn, int trapno, int flags)
EXPORT_SYMBOL_GPL(__memory_failure);
void memory_failure(unsigned long pfn, int trapno)
int unpoison_memory(unsigned long pfn)
EXPORT_SYMBOL(unpoison_memory);
static struct page *new_page(struct page *p, unsigned long private, int **x)
static int get_any_page(struct page *p, unsigned long pfn, int flags)
static int soft_offline_huge_page(struct page *page, int flags)
int soft_offline_page(struct page *page, int flags)
