#define define_one_ro_named(_name, _func)				\
static SYSDEV_ATTR(_name, 0444, _func, NULL)
#define define_one_ro(_name)				\
static SYSDEV_ATTR(_name, 0444, show_##_name, NULL)
#define define_id_show_func(name)				\
static ssize_t show_##name(struct sys_device *dev,		\
struct sysdev_attribute *attr, char *buf)	\
#if defined(topology_thread_cpumask) || defined(topology_core_cpumask) || \
defined(topology_book_cpumask)
static ssize_t show_cpumap(int type, const struct cpumask *mask, char *buf)
#define define_siblings_show_map(name)					\
static ssize_t show_##name(struct sys_device *dev,			\
struct sysdev_attribute *attr, char *buf)	\
#define define_siblings_show_list(name)					\
static ssize_t show_##name##_list(struct sys_device *dev,		\
struct sysdev_attribute *attr,	\
char *buf)				\
#define define_siblings_show_map(name)					\
static ssize_t show_##name(struct sys_device *dev,			\
struct sysdev_attribute *attr, char *buf)	\
#define define_siblings_show_list(name)					\
static ssize_t show_##name##_list(struct sys_device *dev,		\
struct sysdev_attribute *attr,	\
char *buf)				\
#define define_siblings_show_func(name)		\
define_siblings_show_map(name); define_siblings_show_list(name)
define_id_show_func(physical_package_id);
define_one_ro(physical_package_id);
define_id_show_func(core_id);
define_one_ro(core_id);
define_siblings_show_func(thread_cpumask);
define_one_ro_named(thread_siblings, show_thread_cpumask);
define_one_ro_named(thread_siblings_list, show_thread_cpumask_list);
define_siblings_show_func(core_cpumask);
define_one_ro_named(core_siblings, show_core_cpumask);
define_one_ro_named(core_siblings_list, show_core_cpumask_list);
define_id_show_func(book_id);
define_one_ro(book_id);
define_siblings_show_func(book_cpumask);
define_one_ro_named(book_siblings, show_book_cpumask);
define_one_ro_named(book_siblings_list, show_book_cpumask_list);
static struct attribute *default_attrs[] = ;
static struct attribute_group topology_attr_group = ;
static int __cpuinit topology_add_dev(unsigned int cpu)
static void __cpuinit topology_remove_dev(unsigned int cpu)
static int __cpuinit topology_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static int __cpuinit topology_sysfs_init(void)
device_initcall(topology_sysfs_init);
