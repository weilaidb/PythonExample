int watchdog_enabled = 1;
int __read_mostly watchdog_thresh = 10;
static DEFINE_PER_CPU(unsigned long, watchdog_touch_ts);
static DEFINE_PER_CPU(struct task_struct *, softlockup_watchdog);
static DEFINE_PER_CPU(struct hrtimer, watchdog_hrtimer);
static DEFINE_PER_CPU(bool, softlockup_touch_sync);
static DEFINE_PER_CPU(bool, soft_watchdog_warn);
static DEFINE_PER_CPU(bool, hard_watchdog_warn);
static DEFINE_PER_CPU(bool, watchdog_nmi_touch);
static DEFINE_PER_CPU(unsigned long, hrtimer_interrupts);
static DEFINE_PER_CPU(unsigned long, hrtimer_interrupts_saved);
static DEFINE_PER_CPU(struct perf_event *, watchdog_ev);
static int hardlockup_panic =
CONFIG_BOOTPARAM_HARDLOCKUP_PANIC_VALUE;
static int __init hardlockup_panic_setup(char *str)
__setup("nmi_watchdog=", hardlockup_panic_setup);
unsigned int __read_mostly softlockup_panic =
CONFIG_BOOTPARAM_SOFTLOCKUP_PANIC_VALUE;
static int __init softlockup_panic_setup(char *str)
__setup("softlockup_panic=", softlockup_panic_setup);
static int __init nowatchdog_setup(char *str)
__setup("nowatchdog", nowatchdog_setup);
static int __init nosoftlockup_setup(char *str)
__setup("nosoftlockup", nosoftlockup_setup);
static int get_softlockup_thresh(void)
static unsigned long get_timestamp(int this_cpu)
static unsigned long get_sample_period(void)
static void __touch_watchdog(void)
void touch_softlockup_watchdog(void)
EXPORT_SYMBOL(touch_softlockup_watchdog);
void touch_all_softlockup_watchdogs(void)
void touch_nmi_watchdog(void)
EXPORT_SYMBOL(touch_nmi_watchdog);
void touch_softlockup_watchdog_sync(void)
static int is_hardlockup(void)
static int is_softlockup(unsigned long touch_ts)
static struct perf_event_attr wd_hw_attr = ;
static void watchdog_overflow_callback(struct perf_event *event, int nmi,
struct perf_sample_data *data,
struct pt_regs *regs)
static void watchdog_interrupt_count(void)
static inline void watchdog_interrupt_count(void)
static enum hrtimer_restart watchdog_timer_fn(struct hrtimer *hrtimer)
static int watchdog(void *unused)
static int watchdog_nmi_enable(int cpu)
static void watchdog_nmi_disable(int cpu)
static int watchdog_nmi_enable(int cpu)
static void watchdog_nmi_disable(int cpu)
static void watchdog_prepare_cpu(int cpu)
static int watchdog_enable(int cpu)
static void watchdog_disable(int cpu)
static void watchdog_enable_all_cpus(void)
static void watchdog_disable_all_cpus(void)
int proc_dowatchdog(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int __cpuinit
cpu_callback(struct notifier_block *nfb, unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata cpu_nfb = ;
void __init lockup_detector_init(void)
