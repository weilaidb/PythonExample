DEFINE_MUTEX(pm_mutex);
static BLOCKING_NOTIFIER_HEAD(pm_chain_head);
int register_pm_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_pm_notifier);
int unregister_pm_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_pm_notifier);
int pm_notifier_call_chain(unsigned long val)
int pm_async_enabled = 1;
static ssize_t pm_async_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t pm_async_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(pm_async);
int pm_test_level = TEST_NONE;
static const char * const pm_tests[__TEST_AFTER_LAST] = ;
static ssize_t pm_test_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t pm_test_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(pm_test);
struct kobject *power_kobj;
static ssize_t state_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t state_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(state);
static ssize_t wakeup_count_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t wakeup_count_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(wakeup_count);
int pm_trace_enabled;
static ssize_t pm_trace_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t
pm_trace_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(pm_trace);
static ssize_t pm_trace_dev_match_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t
pm_trace_dev_match_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t n)
power_attr(pm_trace_dev_match);
static struct attribute * g[] = ;
static struct attribute_group attr_group = ;
struct workqueue_struct *pm_wq;
EXPORT_SYMBOL_GPL(pm_wq);
static int __init pm_start_workqueue(void)
static inline int pm_start_workqueue(void)
static int __init pm_init(void)
core_initcall(pm_init);
