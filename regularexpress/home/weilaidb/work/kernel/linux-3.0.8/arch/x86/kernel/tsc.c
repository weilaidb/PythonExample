unsigned int __read_mostly cpu_khz;
EXPORT_SYMBOL(cpu_khz);
unsigned int __read_mostly tsc_khz;
EXPORT_SYMBOL(tsc_khz);
static int __read_mostly tsc_unstable;
static int __read_mostly tsc_disabled = -1;
static int tsc_clocksource_reliable;
u64 native_sched_clock(void)
unsigned long long sched_clock(void)
unsigned long long
sched_clock(void) __attribute__((alias("native_sched_clock")));
int check_tsc_unstable(void)
EXPORT_SYMBOL_GPL(check_tsc_unstable);
int __init notsc_setup(char *str)
int __init notsc_setup(char *str)
__setup("notsc", notsc_setup);
static int no_sched_irq_time;
static int __init tsc_setup(char *str)
__setup("tsc=", tsc_setup);
#define MAX_RETRIES     5
#define SMI_TRESHOLD    50000
static u64 tsc_read_refs(u64 *p, int hpet)
static unsigned long calc_hpet_ref(u64 deltatsc, u64 hpet1, u64 hpet2)
static unsigned long calc_pmtimer_ref(u64 deltatsc, u64 pm1, u64 pm2)
#define CAL_MS		10
#define CAL_LATCH	(CLOCK_TICK_RATE / (1000 / CAL_MS))
#define CAL_PIT_LOOPS	1000
#define CAL2_MS		50
#define CAL2_LATCH	(CLOCK_TICK_RATE / (1000 / CAL2_MS))
#define CAL2_PIT_LOOPS	5000
static unsigned long pit_calibrate_tsc(u32 latch, unsigned long ms, int loopmin)
static inline int pit_verify_msb(unsigned char val)
static inline int pit_expect_msb(unsigned char val, u64 *tscp, unsigned long *deltap)
#define MAX_QUICK_PIT_MS 25
#define MAX_QUICK_PIT_ITERATIONS (MAX_QUICK_PIT_MS * PIT_TICK_RATE / 1000 / 256)
static unsigned long quick_pit_calibrate(void)
unsigned long native_calibrate_tsc(void)
int recalibrate_cpu_khz(void)
EXPORT_SYMBOL(recalibrate_cpu_khz);
DEFINE_PER_CPU(unsigned long, cyc2ns);
DEFINE_PER_CPU(unsigned long long, cyc2ns_offset);
static void set_cyc2ns_scale(unsigned long cpu_khz, int cpu)
static unsigned long long cyc2ns_suspend;
void save_sched_clock_state(void)
void restore_sched_clock_state(void)
static unsigned int  ref_freq;
static unsigned long loops_per_jiffy_ref;
static unsigned long tsc_khz_ref;
static int time_cpufreq_notifier(struct notifier_block *nb, unsigned long val,
void *data)
static struct notifier_block time_cpufreq_notifier_block = ;
static int __init cpufreq_tsc(void)
core_initcall(cpufreq_tsc);
static struct clocksource clocksource_tsc;
static cycle_t read_tsc(struct clocksource *cs)
static void resume_tsc(struct clocksource *cs)
static struct clocksource clocksource_tsc = ;
void mark_tsc_unstable(char *reason)
EXPORT_SYMBOL_GPL(mark_tsc_unstable);
static int __init dmi_mark_tsc_unstable(const struct dmi_system_id *d)
static struct dmi_system_id __initdata bad_tsc_dmi_table[] = ;
static void __init check_system_tsc_reliable(void)
__cpuinit int unsynchronized_tsc(void)
static void tsc_refine_calibration_work(struct work_struct *work);
static DECLARE_DELAYED_WORK(tsc_irqwork, tsc_refine_calibration_work);
static void tsc_refine_calibration_work(struct work_struct *work)
static int __init init_tsc_clocksource(void)
device_initcall(init_tsc_clocksource);
void __init tsc_init(void)
