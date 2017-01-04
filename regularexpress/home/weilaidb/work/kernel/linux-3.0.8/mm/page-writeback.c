static long ratelimit_pages = 32;
static inline long sync_writeback_pages(unsigned long dirtied)
int dirty_background_ratio = 10;
unsigned long dirty_background_bytes;
int vm_highmem_is_dirtyable;
int vm_dirty_ratio = 20;
unsigned long vm_dirty_bytes;
unsigned int dirty_writeback_interval = 5 * 100;
unsigned int dirty_expire_interval = 30 * 100;
int block_dump;
int laptop_mode;
EXPORT_SYMBOL(laptop_mode);
static struct prop_descriptor vm_completions;
static struct prop_descriptor vm_dirties;
static int calc_period_shift(void)
static void update_completion_period(void)
int dirty_background_ratio_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
int dirty_background_bytes_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
int dirty_ratio_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
int dirty_bytes_handler(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static inline void __bdi_writeout_inc(struct backing_dev_info *bdi)
void bdi_writeout_inc(struct backing_dev_info *bdi)
EXPORT_SYMBOL_GPL(bdi_writeout_inc);
void task_dirty_inc(struct task_struct *tsk)
static void bdi_writeout_fraction(struct backing_dev_info *bdi,
long *numerator, long *denominator)
static inline void task_dirties_fraction(struct task_struct *tsk,
long *numerator, long *denominator)
static unsigned long task_dirty_limit(struct task_struct *tsk,
unsigned long bdi_dirty)
static unsigned int bdi_min_ratio;
int bdi_set_min_ratio(struct backing_dev_info *bdi, unsigned int min_ratio)
int bdi_set_max_ratio(struct backing_dev_info *bdi, unsigned max_ratio)
EXPORT_SYMBOL(bdi_set_max_ratio);
static unsigned long highmem_dirtyable_memory(unsigned long total)
unsigned long determine_dirtyable_memory(void)
void global_dirty_limits(unsigned long *pbackground, unsigned long *pdirty)
unsigned long bdi_dirty_limit(struct backing_dev_info *bdi, unsigned long dirty)
static void balance_dirty_pages(struct address_space *mapping,
unsigned long write_chunk)
void set_page_dirty_balance(struct page *page, int page_mkwrite)
static DEFINE_PER_CPU(unsigned long, bdp_ratelimits) = 0;
void balance_dirty_pages_ratelimited_nr(struct address_space *mapping,
unsigned long nr_pages_dirtied)
EXPORT_SYMBOL(balance_dirty_pages_ratelimited_nr);
void throttle_vm_writeout(gfp_t gfp_mask)
int dirty_writeback_centisecs_handler(ctl_table *table, int write,
void __user *buffer, size_t *length, loff_t *ppos)
void laptop_mode_timer_fn(unsigned long data)
void laptop_io_completion(struct backing_dev_info *info)
void laptop_sync_completion(void)
void writeback_set_ratelimit(void)
static int __cpuinit
ratelimit_handler(struct notifier_block *self, unsigned long u, void *v)
static struct notifier_block __cpuinitdata ratelimit_nb = ;
void __init page_writeback_init(void)
void tag_pages_for_writeback(struct address_space *mapping,
pgoff_t start, pgoff_t end)
EXPORT_SYMBOL(tag_pages_for_writeback);
int write_cache_pages(struct address_space *mapping,
struct writeback_control *wbc, writepage_t writepage,
void *data)
EXPORT_SYMBOL(write_cache_pages);
static int __writepage(struct page *page, struct writeback_control *wbc,
void *data)
int generic_writepages(struct address_space *mapping,
struct writeback_control *wbc)
EXPORT_SYMBOL(generic_writepages);
int do_writepages(struct address_space *mapping, struct writeback_control *wbc)
int write_one_page(struct page *page, int wait)
EXPORT_SYMBOL(write_one_page);
int __set_page_dirty_no_writeback(struct page *page)
void account_page_dirtied(struct page *page, struct address_space *mapping)
EXPORT_SYMBOL(account_page_dirtied);
void account_page_writeback(struct page *page)
EXPORT_SYMBOL(account_page_writeback);
int __set_page_dirty_nobuffers(struct page *page)
EXPORT_SYMBOL(__set_page_dirty_nobuffers);
int redirty_page_for_writepage(struct writeback_control *wbc, struct page *page)
EXPORT_SYMBOL(redirty_page_for_writepage);
int set_page_dirty(struct page *page)
EXPORT_SYMBOL(set_page_dirty);
int set_page_dirty_lock(struct page *page)
EXPORT_SYMBOL(set_page_dirty_lock);
int clear_page_dirty_for_io(struct page *page)
EXPORT_SYMBOL(clear_page_dirty_for_io);
int test_clear_page_writeback(struct page *page)
int test_set_page_writeback(struct page *page)
EXPORT_SYMBOL(test_set_page_writeback);
int mapping_tagged(struct address_space *mapping, int tag)
EXPORT_SYMBOL(mapping_tagged);
