#undef USE_CASCADE_TIMERS
extern int set_rtc_mmss(unsigned long nowtime);
extern int have_rtc;
unsigned long get_ns_in_jiffie(void)
unsigned long do_slow_gettimeoffset(void)
#define start_watchdog reset_watchdog
#if defined(CONFIG_ETRAX_WATCHDOG) && !defined(CONFIG_SVINTO_SIM)
static int watchdog_key = 0;
#define WATCHDOG_MIN_FREE_PAGES 8
void
reset_watchdog(void)
void
stop_watchdog(void)
extern void cris_do_profile(struct pt_regs *regs);
static inline irqreturn_t
timer_interrupt(int irq, void *dev_id)
static struct irqaction irq2  = ;
void __init
time_init(void)
