#define ETRAX_WD_KEY_MASK	0x7F
#define ETRAX_WD_HZ		763
#define ETRAX_WD_CNT		((2*ETRAX_WD_HZ)/HZ + 1)
static cycle_t read_cont_rotime(struct clocksource *cs)
static struct clocksource cont_rotime = ;
static int __init etrax_init_cont_rotime(void)
arch_initcall(etrax_init_cont_rotime);
unsigned long timer_regs[NR_CPUS] =
;
extern int set_rtc_mmss(unsigned long nowtime);
extern int have_rtc;
static int
cris_time_freq_notifier(struct notifier_block *nb, unsigned long val,
void *data);
static struct notifier_block cris_time_freq_notifier_block = ;
unsigned long get_ns_in_jiffie(void)
#define start_watchdog reset_watchdog
#if defined(CONFIG_ETRAX_WATCHDOG)
static short int watchdog_key = 42;
#define WATCHDOG_MIN_FREE_PAGES 8
void reset_watchdog(void)
void stop_watchdog(void)
extern void show_registers(struct pt_regs *regs);
void handle_watchdog_bite(struct pt_regs *regs)
extern void cris_do_profile(struct pt_regs *regs);
static inline irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction irq_timer = ;
void __init cris_timer_init(void)
void __init time_init(void)
static int
cris_time_freq_notifier(struct notifier_block *nb, unsigned long val,
void *data)
