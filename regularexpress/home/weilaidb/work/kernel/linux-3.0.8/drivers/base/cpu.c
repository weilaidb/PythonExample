static struct sysdev_class_attribute *cpu_sysdev_class_attrs[];
struct sysdev_class cpu_sysdev_class = ;
EXPORT_SYMBOL(cpu_sysdev_class);
static DEFINE_PER_CPU(struct sys_device *, cpu_sys_devices);
static ssize_t show_online(struct sys_device *dev, struct sysdev_attribute *attr,
char *buf)
static ssize_t __ref store_online(struct sys_device *dev, struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(online, 0644, show_online, store_online);
static void __cpuinit register_cpu_control(struct cpu *cpu)
void unregister_cpu(struct cpu *cpu)
static ssize_t cpu_probe_store(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
const char *buf,
size_t count)
static ssize_t cpu_release_store(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
const char *buf,
size_t count)
static SYSDEV_CLASS_ATTR(probe, S_IWUSR, NULL, cpu_probe_store);
static SYSDEV_CLASS_ATTR(release, S_IWUSR, NULL, cpu_release_store);
static inline void register_cpu_control(struct cpu *cpu)
static ssize_t show_crash_notes(struct sys_device *dev, struct sysdev_attribute *attr,
char *buf)
static SYSDEV_ATTR(crash_notes, 0400, show_crash_notes, NULL);
struct cpu_attr ;
static ssize_t show_cpus_attr(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
#define _CPU_ATTR(name, map)						\
static struct cpu_attr cpu_attrs[] = ;
static ssize_t print_cpus_kernel_max(struct sysdev_class *class,
struct sysdev_class_attribute *attr, char *buf)
static SYSDEV_CLASS_ATTR(kernel_max, 0444, print_cpus_kernel_max, NULL);
unsigned int total_cpus;
static ssize_t print_cpus_offline(struct sysdev_class *class,
struct sysdev_class_attribute *attr, char *buf)
static SYSDEV_CLASS_ATTR(offline, 0444, print_cpus_offline, NULL);
int __cpuinit register_cpu(struct cpu *cpu, int num)
struct sys_device *get_cpu_sysdev(unsigned cpu)
EXPORT_SYMBOL_GPL(get_cpu_sysdev);
int __init cpu_dev_init(void)
static struct sysdev_class_attribute *cpu_sysdev_class_attrs[] = ;
