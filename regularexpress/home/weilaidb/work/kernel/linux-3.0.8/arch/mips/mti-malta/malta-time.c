unsigned long cpu_khz;
static int mips_cpu_timer_irq;
static int mips_cpu_perf_irq;
extern int cp0_perfcount_irq;
static void mips_timer_dispatch(void)
static void mips_perf_dispatch(void)
static unsigned int __init estimate_cpu_frequency(void)
void read_persistent_clock(struct timespec *ts)
static void __init plat_perf_setup(void)
unsigned int __cpuinit get_c0_compare_int(void)
void __init plat_time_init(void)
