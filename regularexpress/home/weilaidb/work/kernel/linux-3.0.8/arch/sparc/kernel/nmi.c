static int panic_on_timeout;
atomic_t nmi_active = ATOMIC_INIT(0);
EXPORT_SYMBOL(nmi_active);
static unsigned int nmi_hz = HZ;
static DEFINE_PER_CPU(short, wd_enabled);
static int endflag __initdata;
static DEFINE_PER_CPU(unsigned int, last_irq_sum);
static DEFINE_PER_CPU(long, alert_counter);
static DEFINE_PER_CPU(int, nmi_touch);
void touch_nmi_watchdog(void)
EXPORT_SYMBOL(touch_nmi_watchdog);
static void die_nmi(const char *str, struct pt_regs *regs, int do_panic)
notrace __kprobes void perfctr_irq(int irq, struct pt_regs *regs)
static inline unsigned int get_nmi_count(int cpu)
static __init void nmi_cpu_busy(void *data)
static void report_broken_nmi(int cpu, int *prev_nmi_count)
void stop_nmi_watchdog(void *unused)
static int __init check_nmi_watchdog(void)
void start_nmi_watchdog(void *unused)
static void nmi_adjust_hz_one(void *unused)
void nmi_adjust_hz(unsigned int new_hz)
EXPORT_SYMBOL_GPL(nmi_adjust_hz);
static int nmi_shutdown(struct notifier_block *nb, unsigned long cmd, void *p)
static struct notifier_block nmi_reboot_notifier = ;
int __init nmi_init(void)
static int __init setup_nmi_watchdog(char *str)
__setup("nmi_watchdog=", setup_nmi_watchdog);
