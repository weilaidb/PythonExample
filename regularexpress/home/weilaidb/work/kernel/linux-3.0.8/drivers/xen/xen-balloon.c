#define PAGES2KB(_p) ((_p)<<(PAGE_SHIFT-10))
#define BALLOON_CLASS_NAME "xen_memory"
static struct sys_device balloon_sysdev;
static int register_balloon(struct sys_device *sysdev);
static struct xenbus_watch target_watch =
;
static void watch_target(struct xenbus_watch *watch,
const char **vec, unsigned int len)
static int balloon_init_watcher(struct notifier_block *notifier,
unsigned long event,
void *data)
static struct notifier_block xenstore_notifier;
static int __init balloon_init(void)
subsys_initcall(balloon_init);
static void balloon_exit(void)
module_exit(balloon_exit);
#define BALLOON_SHOW(name, format, args...)				\
static ssize_t show_##name(struct sys_device *dev,		\
struct sysdev_attribute *attr,	\
char *buf)				\
\
static SYSDEV_ATTR(name, S_IRUGO, show_##name, NULL)
BALLOON_SHOW(current_kb, "%lu\n", PAGES2KB(balloon_stats.current_pages));
BALLOON_SHOW(low_kb, "%lu\n", PAGES2KB(balloon_stats.balloon_low));
BALLOON_SHOW(high_kb, "%lu\n", PAGES2KB(balloon_stats.balloon_high));
static SYSDEV_ULONG_ATTR(schedule_delay, 0444, balloon_stats.schedule_delay);
static SYSDEV_ULONG_ATTR(max_schedule_delay, 0644, balloon_stats.max_schedule_delay);
static SYSDEV_ULONG_ATTR(retry_count, 0444, balloon_stats.retry_count);
static SYSDEV_ULONG_ATTR(max_retry_count, 0644, balloon_stats.max_retry_count);
static ssize_t show_target_kb(struct sys_device *dev, struct sysdev_attribute *attr,
char *buf)
static ssize_t store_target_kb(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf,
size_t count)
static SYSDEV_ATTR(target_kb, S_IRUGO | S_IWUSR,
show_target_kb, store_target_kb);
static ssize_t show_target(struct sys_device *dev, struct sysdev_attribute *attr,
char *buf)
static ssize_t store_target(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf,
size_t count)
static SYSDEV_ATTR(target, S_IRUGO | S_IWUSR,
show_target, store_target);
static struct sysdev_attribute *balloon_attrs[] = ;
static struct attribute *balloon_info_attrs[] = ;
static struct attribute_group balloon_info_group = ;
static struct sysdev_class balloon_sysdev_class = ;
static int register_balloon(struct sys_device *sysdev)
MODULE_LICENSE("GPL");
