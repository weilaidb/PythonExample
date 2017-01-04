#define KMSG_COMPONENT "cpu"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
unsigned short __cpu_logical_map[NR_CPUS];
static struct task_struct *current_set[NR_CPUS];
static u8 smp_cpu_type;
static int smp_use_sigp_detection;
enum s390_cpu_state ;
DEFINE_MUTEX(smp_cpu_state_mutex);
int smp_cpu_polarization[NR_CPUS];
static int smp_cpu_state[NR_CPUS];
static int cpu_management;
static DEFINE_PER_CPU(struct cpu, cpu_devices);
static void smp_ext_bitcall(int, int);
static int raw_cpu_stopped(int cpu)
static inline int cpu_stopped(int cpu)
void smp_switch_to_ipl_cpu(void (*func)(void *), void *data)
void smp_send_stop(void)
static void do_ext_call_interrupt(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static void smp_ext_bitcall(int cpu, int sig)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void arch_send_call_function_single_ipi(int cpu)
static void smp_ptlb_callback(void *info)
void smp_ptlb_all(void)
EXPORT_SYMBOL(smp_ptlb_all);
void smp_send_reschedule(int cpu)
struct ec_creg_mask_parms ;
static void smp_ctl_bit_callback(void *info)
void smp_ctl_set_bit(int cr, int bit)
EXPORT_SYMBOL(smp_ctl_set_bit);
void smp_ctl_clear_bit(int cr, int bit)
EXPORT_SYMBOL(smp_ctl_clear_bit);
static void __init smp_get_save_area(unsigned int cpu, unsigned int phy_cpu)
struct save_area *zfcpdump_save_areas[NR_CPUS + 1];
EXPORT_SYMBOL_GPL(zfcpdump_save_areas);
static inline void smp_get_save_area(unsigned int cpu, unsigned int phy_cpu)
static int cpu_known(int cpu_id)
static int smp_rescan_cpus_sigp(cpumask_t avail)
static int smp_rescan_cpus_sclp(cpumask_t avail)
static int __smp_rescan_cpus(void)
static void __init smp_detect_cpus(void)
int __cpuinit start_secondary(void *cpuvoid)
struct create_idle ;
static void __cpuinit smp_fork_idle(struct work_struct *work)
static int __cpuinit smp_alloc_lowcore(int cpu)
static void smp_free_lowcore(int cpu)
int __cpuinit __cpu_up(unsigned int cpu)
static int __init setup_possible_cpus(char *s)
early_param("possible_cpus", setup_possible_cpus);
int __cpu_disable(void)
void __cpu_die(unsigned int cpu)
void __noreturn cpu_die(void)
void __init smp_prepare_cpus(unsigned int max_cpus)
void __init smp_prepare_boot_cpu(void)
void __init smp_cpus_done(unsigned int max_cpus)
void __init smp_setup_processor_id(void)
int setup_profiling_timer(unsigned int multiplier)
static ssize_t cpu_configure_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static ssize_t cpu_configure_store(struct sys_device *dev,
struct sysdev_attribute *attr,
const char *buf, size_t count)
static SYSDEV_ATTR(configure, 0644, cpu_configure_show, cpu_configure_store);
static ssize_t cpu_polarization_show(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(polarization, 0444, cpu_polarization_show, NULL);
static ssize_t show_cpu_address(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(address, 0444, show_cpu_address, NULL);
static struct attribute *cpu_common_attrs[] = ;
static struct attribute_group cpu_common_attr_group = ;
static ssize_t show_capability(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(capability, 0444, show_capability, NULL);
static ssize_t show_idle_count(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(idle_count, 0444, show_idle_count, NULL);
static ssize_t show_idle_time(struct sys_device *dev,
struct sysdev_attribute *attr, char *buf)
static SYSDEV_ATTR(idle_time_us, 0444, show_idle_time, NULL);
static struct attribute *cpu_online_attrs[] = ;
static struct attribute_group cpu_online_attr_group = ;
static int __cpuinit smp_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata smp_cpu_nb = ;
static int __devinit smp_add_present_cpu(int cpu)
int __ref smp_rescan_cpus(void)
static ssize_t __ref rescan_store(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
const char *buf,
size_t count)
static SYSDEV_CLASS_ATTR(rescan, 0200, NULL, rescan_store);
static ssize_t dispatching_show(struct sysdev_class *class,
struct sysdev_class_attribute *attr,
char *buf)
static ssize_t dispatching_store(struct sysdev_class *dev,
struct sysdev_class_attribute *attr,
const char *buf,
size_t count)
static SYSDEV_CLASS_ATTR(dispatching, 0644, dispatching_show,
dispatching_store);
static int __init topology_init(void)
subsys_initcall(topology_init);
