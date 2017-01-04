#define ERR_INJ_DEBUG
#define ERR_DATA_BUFFER_SIZE 3
#define define_one_ro(name) 						\
static SYSDEV_ATTR(name, 0444, show_##name, NULL)
#define define_one_rw(name) 						\
static SYSDEV_ATTR(name, 0644, show_##name, store_##name)
static u64 call_start[NR_CPUS];
static u64 phys_addr[NR_CPUS];
static u64 err_type_info[NR_CPUS];
static u64 err_struct_info[NR_CPUS];
static struct  __attribute__((__aligned__(16))) err_data_buffer[NR_CPUS];
static s64 status[NR_CPUS];
static u64 capabilities[NR_CPUS];
static u64 resources[NR_CPUS];
#define show(name) 							\
static ssize_t 								\
show_##name(struct sys_device *dev, struct sysdev_attribute *attr,	\
char *buf)						\
#define store(name)							\
static ssize_t 								\
store_##name(struct sys_device *dev, struct sysdev_attribute *attr,	\
const char *buf, size_t size)	\
show(call_start)
static ssize_t
store_call_start(struct sys_device *dev, struct sysdev_attribute *attr,
const char *buf, size_t size)
show(err_type_info)
store(err_type_info)
static ssize_t
show_virtual_to_phys(struct sys_device *dev, struct sysdev_attribute *attr,
char *buf)
static ssize_t
store_virtual_to_phys(struct sys_device *dev, struct sysdev_attribute *attr,
const char *buf, size_t size)
show(err_struct_info)
store(err_struct_info)
static ssize_t
show_err_data_buffer(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t
store_err_data_buffer(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t size)
show(status)
show(capabilities)
show(resources)
define_one_rw(call_start);
define_one_rw(err_type_info);
define_one_rw(err_struct_info);
define_one_rw(err_data_buffer);
define_one_rw(virtual_to_phys);
define_one_ro(status);
define_one_ro(capabilities);
define_one_ro(resources);
static struct attribute *default_attrs[] = ;
static struct attribute_group err_inject_attr_group = ;
static int __cpuinit err_inject_add_dev(struct sys_device * sys_dev)
static int __cpuinit err_inject_remove_dev(struct sys_device * sys_dev)
static int __cpuinit err_inject_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata err_inject_cpu_notifier =
;
static int __init
err_inject_init(void)
static void __exit
err_inject_exit(void)
module_init(err_inject_init);
module_exit(err_inject_exit);
MODULE_AUTHOR("Fenghua Yu <fenghua.yu@intel.com>");
MODULE_DESCRIPTION("MC error injection kernel sysfs interface");
MODULE_LICENSE("GPL");
