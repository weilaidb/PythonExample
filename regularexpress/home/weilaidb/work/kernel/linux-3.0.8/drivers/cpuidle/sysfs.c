static unsigned int sysfs_switch;
static int __init cpuidle_sysfs_setup(char *unused)
__setup("cpuidle_sysfs_switch", cpuidle_sysfs_setup);
static ssize_t show_available_governors(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t show_current_driver(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t show_current_governor(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t store_current_governor(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
const char *buf, size_t count)
static SYSDEV_CLASS_ATTR(current_driver, 0444, show_current_driver, NULL);
static SYSDEV_CLASS_ATTR(current_governor_ro, 0444, show_current_governor,
NULL);
static struct attribute *cpuclass_default_attrs[] = ;
static SYSDEV_CLASS_ATTR(available_governors, 0444, show_available_governors,
NULL);
static SYSDEV_CLASS_ATTR(current_governor, 0644, show_current_governor,
store_current_governor);
static struct attribute *cpuclass_switch_attrs[] = ;
static struct attribute_group cpuclass_attr_group = ;
int cpuidle_add_class_sysfs(struct sysdev_class *cls)
void cpuidle_remove_class_sysfs(struct sysdev_class *cls)
struct cpuidle_attr ;
#define define_one_ro(_name, show) \
static struct cpuidle_attr attr_##_name = __ATTR(_name, 0444, show, NULL)
#define define_one_rw(_name, show, store) \
static struct cpuidle_attr attr_##_name = __ATTR(_name, 0644, show, store)
#define kobj_to_cpuidledev(k) container_of(k, struct cpuidle_device, kobj)
#define attr_to_cpuidleattr(a) container_of(a, struct cpuidle_attr, attr)
static ssize_t cpuidle_show(struct kobject * kobj, struct attribute * attr ,char * buf)
static ssize_t cpuidle_store(struct kobject * kobj, struct attribute * attr,
const char * buf, size_t count)
static const struct sysfs_ops cpuidle_sysfs_ops = ;
static void cpuidle_sysfs_release(struct kobject *kobj)
static struct kobj_type ktype_cpuidle = ;
struct cpuidle_state_attr ;
#define define_one_state_ro(_name, show) \
static struct cpuidle_state_attr attr_##_name = __ATTR(_name, 0444, show, NULL)
#define define_show_state_function(_name) \
static ssize_t show_state_##_name(struct cpuidle_state *state, char *buf) \
#define define_show_state_ull_function(_name) \
static ssize_t show_state_##_name(struct cpuidle_state *state, char *buf) \
#define define_show_state_str_function(_name) \
static ssize_t show_state_##_name(struct cpuidle_state *state, char *buf) \
define_show_state_function(exit_latency)
define_show_state_function(power_usage)
define_show_state_ull_function(usage)
define_show_state_ull_function(time)
define_show_state_str_function(name)
define_show_state_str_function(desc)
define_one_state_ro(name, show_state_name);
define_one_state_ro(desc, show_state_desc);
define_one_state_ro(latency, show_state_exit_latency);
define_one_state_ro(power, show_state_power_usage);
define_one_state_ro(usage, show_state_usage);
define_one_state_ro(time, show_state_time);
static struct attribute *cpuidle_state_default_attrs[] = ;
#define kobj_to_state_obj(k) container_of(k, struct cpuidle_state_kobj, kobj)
#define kobj_to_state(k) (kobj_to_state_obj(k)->state)
#define attr_to_stateattr(a) container_of(a, struct cpuidle_state_attr, attr)
static ssize_t cpuidle_state_show(struct kobject * kobj,
struct attribute * attr ,char * buf)
static const struct sysfs_ops cpuidle_state_sysfs_ops = ;
static void cpuidle_state_sysfs_release(struct kobject *kobj)
static struct kobj_type ktype_state_cpuidle = ;
static inline void cpuidle_free_state_kobj(struct cpuidle_device *device, int i)
int cpuidle_add_state_sysfs(struct cpuidle_device *device)
void cpuidle_remove_state_sysfs(struct cpuidle_device *device)
int cpuidle_add_sysfs(struct sys_device *sysdev)
void cpuidle_remove_sysfs(struct sys_device *sysdev)
