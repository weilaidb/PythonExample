static cycle_t itc_get_cycles(struct clocksource *cs);
struct fsyscall_gtod_data_t fsyscall_gtod_data = ;
struct itc_jitter_data_t itc_jitter_data;
volatile int time_keeper_id = 0;
unsigned long last_cli_ip;
EXPORT_SYMBOL(last_cli_ip);
unsigned long long sched_clock(void)
static void
paravirt_clocksource_resume(struct clocksource *cs)
static struct clocksource clocksource_itc = ;
static struct clocksource *itc_clocksource;
extern cputime_t cycle_to_cputime(u64 cyc);
void ia64_account_on_switch(struct task_struct *prev, struct task_struct *next)
void account_system_vtime(struct task_struct *tsk)
EXPORT_SYMBOL_GPL(account_system_vtime);
void account_process_tick(struct task_struct *p, int user_tick)
static irqreturn_t
timer_interrupt (int irq, void *dev_id)
void
ia64_cpu_local_tick (void)
static int nojitter;
static int __init nojitter_setup(char *str)
__setup("nojitter", nojitter_setup);
void __devinit
ia64_init_itm (void)
static cycle_t itc_get_cycles(struct clocksource *cs)
static struct irqaction timer_irqaction = ;
static struct platform_device rtc_efi_dev = ;
static int __init rtc_init(void)
module_init(rtc_init);
void read_persistent_clock(struct timespec *ts)
void __init
time_init (void)
static void
ia64_itc_udelay (unsigned long usecs)
void (*ia64_udelay)(unsigned long usecs) = &ia64_itc_udelay;
void
udelay (unsigned long usecs)
EXPORT_SYMBOL(udelay);
void update_vsyscall_tz(void)
void update_vsyscall(struct timespec *wall, struct timespec *wtm,
struct clocksource *c, u32 mult)
