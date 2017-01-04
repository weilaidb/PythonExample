static DEFINE_SPINLOCK(watchdog_print_lock);
static unsigned int watchdog;
static unsigned int watchdog_hz = 1;
unsigned int watchdog_alert_counter[NR_CPUS];
EXPORT_SYMBOL(touch_nmi_watchdog);
static unsigned int last_irq_sums[NR_CPUS];
int __init check_watchdog(void)
static int __init setup_watchdog(char *str)
__setup("watchdog=", setup_watchdog);
void __init watchdog_go(void)
static void watchdog_dump_register(void *dummy)
asmlinkage
void watchdog_interrupt(struct pt_regs *regs, enum exception_code excep)
