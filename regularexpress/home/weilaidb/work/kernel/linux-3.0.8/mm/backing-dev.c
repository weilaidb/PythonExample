static atomic_long_t bdi_seq = ATOMIC_LONG_INIT(0);
struct backing_dev_info default_backing_dev_info = ;
EXPORT_SYMBOL_GPL(default_backing_dev_info);
struct backing_dev_info noop_backing_dev_info = ;
EXPORT_SYMBOL_GPL(noop_backing_dev_info);
static struct class *bdi_class;
DEFINE_SPINLOCK(bdi_lock);
LIST_HEAD(bdi_list);
LIST_HEAD(bdi_pending_list);
static struct task_struct *sync_supers_tsk;
static struct timer_list sync_supers_timer;
static int bdi_sync_supers(void *);
static void sync_supers_timer_fn(unsigned long);
static struct dentry *bdi_debug_root;
static void bdi_debug_init(void)
static int bdi_debug_stats_show(struct seq_file *m, void *v)
static int bdi_debug_stats_open(struct inode *inode, struct file *file)
static const struct file_operations bdi_debug_stats_fops = ;
static void bdi_debug_register(struct backing_dev_info *bdi, const char *name)
static void bdi_debug_unregister(struct backing_dev_info *bdi)
static inline void bdi_debug_init(void)
static inline void bdi_debug_register(struct backing_dev_info *bdi,
const char *name)
static inline void bdi_debug_unregister(struct backing_dev_info *bdi)
static ssize_t read_ahead_kb_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
#define K(pages) ((pages) << (PAGE_SHIFT - 10))
#define BDI_SHOW(name, expr)						\
static ssize_t name##_show(struct device *dev,				\
struct device_attribute *attr, char *page)	\
BDI_SHOW(read_ahead_kb, K(bdi->ra_pages))
static ssize_t min_ratio_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
BDI_SHOW(min_ratio, bdi->min_ratio)
static ssize_t max_ratio_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
BDI_SHOW(max_ratio, bdi->max_ratio)
#define __ATTR_RW(attr) __ATTR(attr, 0644, attr##_show, attr##_store)
static struct device_attribute bdi_dev_attrs[] = ;
static __init int bdi_class_init(void)
postcore_initcall(bdi_class_init);
static int __init default_bdi_init(void)
subsys_initcall(default_bdi_init);
int bdi_has_dirty_io(struct backing_dev_info *bdi)
static void bdi_flush_io(struct backing_dev_info *bdi)
static int bdi_sync_supers(void *unused)
void bdi_arm_supers_timer(void)
static void sync_supers_timer_fn(unsigned long unused)
static void wakeup_timer_fn(unsigned long data)
void bdi_wakeup_thread_delayed(struct backing_dev_info *bdi)
static unsigned long bdi_longest_inactive(void)
static int bdi_forker_thread(void *ptr)
static void bdi_remove_from_list(struct backing_dev_info *bdi)
int bdi_register(struct backing_dev_info *bdi, struct device *parent,
const char *fmt, ...)
EXPORT_SYMBOL(bdi_register);
int bdi_register_dev(struct backing_dev_info *bdi, dev_t dev)
EXPORT_SYMBOL(bdi_register_dev);
static void bdi_wb_shutdown(struct backing_dev_info *bdi)
static void bdi_prune_sb(struct backing_dev_info *bdi)
void bdi_unregister(struct backing_dev_info *bdi)
EXPORT_SYMBOL(bdi_unregister);
static void bdi_wb_init(struct bdi_writeback *wb, struct backing_dev_info *bdi)
int bdi_init(struct backing_dev_info *bdi)
EXPORT_SYMBOL(bdi_init);
void bdi_destroy(struct backing_dev_info *bdi)
EXPORT_SYMBOL(bdi_destroy);
int bdi_setup_and_register(struct backing_dev_info *bdi, char *name,
unsigned int cap)
EXPORT_SYMBOL(bdi_setup_and_register);
static wait_queue_head_t congestion_wqh[2] = ;
static atomic_t nr_bdi_congested[2];
void clear_bdi_congested(struct backing_dev_info *bdi, int sync)
EXPORT_SYMBOL(clear_bdi_congested);
void set_bdi_congested(struct backing_dev_info *bdi, int sync)
EXPORT_SYMBOL(set_bdi_congested);
long congestion_wait(int sync, long timeout)
EXPORT_SYMBOL(congestion_wait);
long wait_iff_congested(struct zone *zone, int sync, long timeout)
EXPORT_SYMBOL(wait_iff_congested);
