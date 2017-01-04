static int set_rtc_mmss(unsigned long);
DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL(rtc_lock);
#define TICK_SIZE (tick_nsec / 1000)
#define FIX_SHIFT	48
static struct  state;
unsigned long est_cycle_freq;
DEFINE_PER_CPU(u8, irq_work_pending);
#define set_irq_work_pending_flag()  __get_cpu_var(irq_work_pending) = 1
#define test_irq_work_pending()      __get_cpu_var(irq_work_pending)
#define clear_irq_work_pending()     __get_cpu_var(irq_work_pending) = 0
void arch_irq_work_raise(void)
#define test_irq_work_pending()      0
#define clear_irq_work_pending()
static inline __u32 rpcc(void)
int update_persistent_clock(struct timespec now)
void read_persistent_clock(struct timespec *ts)
irqreturn_t timer_interrupt(int irq, void *dev)
void __init
common_init_rtc(void)
unsigned int common_get_rtc_time(struct rtc_time *time)
int common_set_rtc_time(struct rtc_time *time)
static unsigned long __init
validate_cc_value(unsigned long cc)
#define CALIBRATE_LATCH	0xffff
#define TIMEOUT_COUNT	0x100000
static unsigned long __init
calibrate_cc_with_pit(void)
static unsigned long __init
rpcc_after_update_in_progress(void)
static cycle_t read_rpcc(struct clocksource *cs)
static struct clocksource clocksource_rpcc = ;
static inline void register_rpcc_clocksource(long cycle_freq)
static inline void register_rpcc_clocksource(long cycle_freq)
void __init
time_init(void)
static int
set_rtc_mmss(unsigned long nowtime)
