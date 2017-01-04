#undef  DEBUG_TIMER
#if defined(CONFIG_RTC_DRV_CMOS) || defined(CONFIG_RTC_DRV_CMOS_MODULE)
DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL(rtc_lock);
extern void smp_local_timer_interrupt(void);
#define TICK_SIZE	(tick_nsec / 1000)
#define USECS_PER_JIFFY (1000000/HZ)
static unsigned long latch;
u32 arch_gettimeoffset(void)
static irqreturn_t timer_interrupt(int irq, void *dev_id)
static struct irqaction irq0 = ;
void read_persistent_clock(struct timespec *ts)
void __init time_init(void)
