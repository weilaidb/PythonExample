#define TIMEOUT		100
bool events_check_enabled;
static atomic_t combined_event_count = ATOMIC_INIT(0);
#define IN_PROGRESS_BITS	(sizeof(int) * 4)
#define MAX_IN_PROGRESS		((1 << IN_PROGRESS_BITS) - 1)
static void split_counters(unsigned int *cnt, unsigned int *inpr)
static unsigned int saved_count;
static DEFINE_SPINLOCK(events_lock);
static void pm_wakeup_timer_fn(unsigned long data);
static LIST_HEAD(wakeup_sources);
struct wakeup_source *wakeup_source_create(const char *name)
EXPORT_SYMBOL_GPL(wakeup_source_create);
void wakeup_source_destroy(struct wakeup_source *ws)
EXPORT_SYMBOL_GPL(wakeup_source_destroy);
void wakeup_source_add(struct wakeup_source *ws)
EXPORT_SYMBOL_GPL(wakeup_source_add);
void wakeup_source_remove(struct wakeup_source *ws)
EXPORT_SYMBOL_GPL(wakeup_source_remove);
struct wakeup_source *wakeup_source_register(const char *name)
EXPORT_SYMBOL_GPL(wakeup_source_register);
void wakeup_source_unregister(struct wakeup_source *ws)
EXPORT_SYMBOL_GPL(wakeup_source_unregister);
static int device_wakeup_attach(struct device *dev, struct wakeup_source *ws)
int device_wakeup_enable(struct device *dev)
EXPORT_SYMBOL_GPL(device_wakeup_enable);
static struct wakeup_source *device_wakeup_detach(struct device *dev)
int device_wakeup_disable(struct device *dev)
EXPORT_SYMBOL_GPL(device_wakeup_disable);
void device_set_wakeup_capable(struct device *dev, bool capable)
EXPORT_SYMBOL_GPL(device_set_wakeup_capable);
int device_init_wakeup(struct device *dev, bool enable)
EXPORT_SYMBOL_GPL(device_init_wakeup);
int device_set_wakeup_enable(struct device *dev, bool enable)
EXPORT_SYMBOL_GPL(device_set_wakeup_enable);
static void wakeup_source_activate(struct wakeup_source *ws)
void __pm_stay_awake(struct wakeup_source *ws)
EXPORT_SYMBOL_GPL(__pm_stay_awake);
void pm_stay_awake(struct device *dev)
EXPORT_SYMBOL_GPL(pm_stay_awake);
static void wakeup_source_deactivate(struct wakeup_source *ws)
void __pm_relax(struct wakeup_source *ws)
EXPORT_SYMBOL_GPL(__pm_relax);
void pm_relax(struct device *dev)
EXPORT_SYMBOL_GPL(pm_relax);
static void pm_wakeup_timer_fn(unsigned long data)
void __pm_wakeup_event(struct wakeup_source *ws, unsigned int msec)
EXPORT_SYMBOL_GPL(__pm_wakeup_event);
void pm_wakeup_event(struct device *dev, unsigned int msec)
EXPORT_SYMBOL_GPL(pm_wakeup_event);
static void pm_wakeup_update_hit_counts(void)
bool pm_wakeup_pending(void)
bool pm_get_wakeup_count(unsigned int *count)
bool pm_save_wakeup_count(unsigned int count)
static struct dentry *wakeup_sources_stats_dentry;
static int print_wakeup_source_stats(struct seq_file *m,
struct wakeup_source *ws)
static int wakeup_sources_stats_show(struct seq_file *m, void *unused)
static int wakeup_sources_stats_open(struct inode *inode, struct file *file)
static const struct file_operations wakeup_sources_stats_fops = ;
static int __init wakeup_sources_debugfs_init(void)
postcore_initcall(wakeup_sources_debugfs_init);
