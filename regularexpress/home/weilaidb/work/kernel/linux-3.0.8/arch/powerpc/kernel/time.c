static cycle_t rtc_read(struct clocksource *);
static struct clocksource clocksource_rtc = ;
static cycle_t timebase_read(struct clocksource *);
static struct clocksource clocksource_timebase = ;
#define DECREMENTER_MAX	0x7fffffff
static int decrementer_set_next_event(unsigned long evt,
struct clock_event_device *dev);
static void decrementer_set_mode(enum clock_event_mode mode,
struct clock_event_device *dev);
static struct clock_event_device decrementer_clockevent = ;
struct decrementer_clock ;
static DEFINE_PER_CPU(struct decrementer_clock, decrementers);
static unsigned long __initdata iSeries_recal_titan;
static signed long __initdata iSeries_recal_tb;
static void __init clocksource_init(void);
#define XSEC_PER_SEC (1024*1024)
#define SCALE_XSEC(xsec, max)	(((xsec) * max) / XSEC_PER_SEC)
#define SCALE_XSEC(xsec, max)	mulhwu((xsec) << 12, max)
unsigned long tb_ticks_per_jiffy;
unsigned long tb_ticks_per_usec = 100;
EXPORT_SYMBOL(tb_ticks_per_usec);
unsigned long tb_ticks_per_sec;
EXPORT_SYMBOL(tb_ticks_per_sec);
DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL_GPL(rtc_lock);
static u64 tb_to_ns_scale __read_mostly;
static unsigned tb_to_ns_shift __read_mostly;
static u64 boot_tb __read_mostly;
extern struct timezone sys_tz;
static long timezone_offset;
unsigned long ppc_proc_freq;
EXPORT_SYMBOL_GPL(ppc_proc_freq);
unsigned long ppc_tb_freq;
EXPORT_SYMBOL_GPL(ppc_tb_freq);
u64 __cputime_jiffies_factor;
EXPORT_SYMBOL(__cputime_jiffies_factor);
u64 __cputime_msec_factor;
EXPORT_SYMBOL(__cputime_msec_factor);
u64 __cputime_sec_factor;
EXPORT_SYMBOL(__cputime_sec_factor);
u64 __cputime_clockt_factor;
EXPORT_SYMBOL(__cputime_clockt_factor);
DEFINE_PER_CPU(unsigned long, cputime_last_delta);
DEFINE_PER_CPU(unsigned long, cputime_scaled_last_delta);
cputime_t cputime_one_jiffy;
void (*dtl_consumer)(struct dtl_entry *, u64);
static void calc_cputime_factors(void)
static u64 read_spurr(u64 tb)
static u64 scan_dispatch_log(u64 stop_tb)
void accumulate_stolen_time(void)
static inline u64 calculate_stolen_time(u64 stop_tb)
static inline u64 calculate_stolen_time(u64 stop_tb)
void account_system_vtime(struct task_struct *tsk)
EXPORT_SYMBOL_GPL(account_system_vtime);
void account_process_tick(struct task_struct *tsk, int user_tick)
#define calc_cputime_factors()
void __delay(unsigned long loops)
EXPORT_SYMBOL(__delay);
void udelay(unsigned long usecs)
EXPORT_SYMBOL(udelay);
unsigned long profile_pc(struct pt_regs *regs)
EXPORT_SYMBOL(profile_pc);
static int __init iSeries_tb_recal(void)
late_initcall(iSeries_tb_recal);
void __init iSeries_time_init_early(void)
static inline unsigned long test_irq_work_pending(void)
static inline void set_irq_work_pending_flag(void)
static inline void clear_irq_work_pending(void)
DEFINE_PER_CPU(u8, irq_work_pending);
#define set_irq_work_pending_flag()	__get_cpu_var(irq_work_pending) = 1
#define test_irq_work_pending()		__get_cpu_var(irq_work_pending)
#define clear_irq_work_pending()	__get_cpu_var(irq_work_pending) = 0
void arch_irq_work_raise(void)
#define test_irq_work_pending()	0
#define clear_irq_work_pending()
void timer_interrupt(struct pt_regs * regs)
static void generic_suspend_disable_irqs(void)
static void generic_suspend_enable_irqs(void)
void arch_suspend_disable_irqs(void)
void arch_suspend_enable_irqs(void)
unsigned long long sched_clock(void)
static int __init get_freq(char *name, int cells, unsigned long *val)
void start_cpu_decrementer(void)
void __init generic_calibrate_decr(void)
int update_persistent_clock(struct timespec now)
static void __read_persistent_clock(struct timespec *ts)
void read_persistent_clock(struct timespec *ts)
static cycle_t rtc_read(struct clocksource *cs)
static cycle_t timebase_read(struct clocksource *cs)
void update_vsyscall(struct timespec *wall_time, struct timespec *wtm,
struct clocksource *clock, u32 mult)
void update_vsyscall_tz(void)
static void __init clocksource_init(void)
static int decrementer_set_next_event(unsigned long evt,
struct clock_event_device *dev)
static void decrementer_set_mode(enum clock_event_mode mode,
struct clock_event_device *dev)
static inline uint64_t div_sc64(unsigned long ticks, unsigned long nsec,
int shift)
static void __init setup_clockevent_multiplier(unsigned long hz)
static void register_decrementer_clockevent(int cpu)
static void __init init_decrementer_clockevent(void)
void secondary_cpu_time_init(void)
void __init time_init(void)
#define FEBRUARY	2
#define	STARTOFTIME	1970
#define SECDAY		86400L
#define SECYR		(SECDAY * 365)
#define	leapyear(year)		((year) % 4 == 0 && \
((year) % 100 != 0 || (year) % 400 == 0))
#define	days_in_year(a) 	(leapyear(a) ? 366 : 365)
#define	days_in_month(a) 	(month_days[(a) - 1])
static int month_days[12] = ;
void GregorianDay(struct rtc_time * tm)
void to_tm(int tim, struct rtc_time * tm)
void div128_by_32(u64 dividend_high, u64 dividend_low,
unsigned divisor, struct div_result *dr)
void calibrate_delay(void)
static int __init rtc_init(void)
module_init(rtc_init);
