#define CHECK_INTERVAL		(300 * HZ)
#define THERMAL_THROTTLING_EVENT	0
#define POWER_LIMIT_EVENT		1
struct _thermal_state ;
struct thermal_state ;
int (*platform_thermal_notify)(__u64 msr_val);
EXPORT_SYMBOL(platform_thermal_notify);
static DEFINE_PER_CPU(struct thermal_state, thermal_state);
static atomic_t therm_throt_en	= ATOMIC_INIT(0);
static u32 lvtthmr_init __read_mostly;
#define define_therm_throt_sysdev_one_ro(_name)				\
static SYSDEV_ATTR(_name, 0444,					\
therm_throt_sysdev_show_##_name,		\
NULL)				\
#define define_therm_throt_sysdev_show_func(event, name)		\
\
static ssize_t therm_throt_sysdev_show_##event##_##name(		\
struct sys_device *dev,				\
struct sysdev_attribute *attr,			\
char *buf)					\
define_therm_throt_sysdev_show_func(core_throttle, count);
define_therm_throt_sysdev_one_ro(core_throttle_count);
define_therm_throt_sysdev_show_func(core_power_limit, count);
define_therm_throt_sysdev_one_ro(core_power_limit_count);
define_therm_throt_sysdev_show_func(package_throttle, count);
define_therm_throt_sysdev_one_ro(package_throttle_count);
define_therm_throt_sysdev_show_func(package_power_limit, count);
define_therm_throt_sysdev_one_ro(package_power_limit_count);
static struct attribute *thermal_throttle_attrs[] = ;
static struct attribute_group thermal_attr_group = ;
#define CORE_LEVEL	0
#define PACKAGE_LEVEL	1
static int therm_throt_process(bool new_event, int event, int level)
static int thresh_event_valid(int event)
static __cpuinit int thermal_throttle_add_dev(struct sys_device *sys_dev,
unsigned int cpu)
static __cpuinit void thermal_throttle_remove_dev(struct sys_device *sys_dev)
static DEFINE_MUTEX(therm_cpu_lock);
static __cpuinit int
thermal_throttle_cpu_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static struct notifier_block thermal_throttle_cpu_notifier __cpuinitdata =
;
static __init int thermal_throttle_init_device(void)
device_initcall(thermal_throttle_init_device);
#define CORE_THROTTLED		(0)
#define CORE_POWER_LIMIT	((__u64)1 << 62)
#define PACKAGE_THROTTLED	((__u64)2 << 62)
#define PACKAGE_POWER_LIMIT	((__u64)3 << 62)
static void notify_thresholds(__u64 msr_val)
static void intel_thermal_interrupt(void)
static void unexpected_thermal_interrupt(void)
static void (*smp_thermal_vector)(void) = unexpected_thermal_interrupt;
asmlinkage void smp_thermal_interrupt(struct pt_regs *regs)
static int intel_thermal_supported(struct cpuinfo_x86 *c)
void __init mcheck_intel_therm_init(void)
void intel_init_thermal(struct cpuinfo_x86 *c)
