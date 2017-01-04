#define pr_fmt(fmt)	"gcov: " fmt
static struct gcov_info *gcov_info_head;
static int gcov_events_enabled;
static DEFINE_MUTEX(gcov_lock);
void __gcov_init(struct gcov_info *info)
EXPORT_SYMBOL(__gcov_init);
void __gcov_flush(void)
EXPORT_SYMBOL(__gcov_flush);
void __gcov_merge_add(gcov_type *counters, unsigned int n_counters)
EXPORT_SYMBOL(__gcov_merge_add);
void __gcov_merge_single(gcov_type *counters, unsigned int n_counters)
EXPORT_SYMBOL(__gcov_merge_single);
void __gcov_merge_delta(gcov_type *counters, unsigned int n_counters)
EXPORT_SYMBOL(__gcov_merge_delta);
void gcov_enable_events(void)
static inline int within(void *addr, void *start, unsigned long size)
static int gcov_module_notifier(struct notifier_block *nb, unsigned long event,
void *data)
static struct notifier_block gcov_nb = ;
static int __init gcov_init(void)
device_initcall(gcov_init);
