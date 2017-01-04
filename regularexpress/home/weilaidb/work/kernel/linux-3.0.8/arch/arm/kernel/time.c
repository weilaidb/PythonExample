static struct sys_timer *system_timer;
#if defined(CONFIG_RTC_DRV_CMOS) || defined(CONFIG_RTC_DRV_CMOS_MODULE)
DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL(rtc_lock);
#define USECS_PER_JIFFY	(1000000/HZ)
unsigned long profile_pc(struct pt_regs *regs)
EXPORT_SYMBOL(profile_pc);
u32 arch_gettimeoffset(void)
static inline void do_leds(void)
#define	do_leds()
void timer_tick(void)
#if defined(CONFIG_PM) && !defined(CONFIG_GENERIC_CLOCKEVENTS)
static int timer_suspend(void)
static void timer_resume(void)
#define timer_suspend NULL
#define timer_resume NULL
static struct syscore_ops timer_syscore_ops = ;
static int __init timer_init_syscore_ops(void)
device_initcall(timer_init_syscore_ops);
void __init time_init(void)
