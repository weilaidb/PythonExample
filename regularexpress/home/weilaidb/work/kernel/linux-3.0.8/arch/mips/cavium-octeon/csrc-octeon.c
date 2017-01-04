void octeon_init_cvmcount(void)
static cycle_t octeon_cvmcount_read(struct clocksource *cs)
static struct clocksource clocksource_mips = ;
unsigned long long notrace sched_clock(void)
void __init plat_time_init(void)
static u64 octeon_udelay_factor;
static u64 octeon_ndelay_factor;
void __init octeon_setup_delays(void)
void __udelay(unsigned long us)
EXPORT_SYMBOL(__udelay);
void __ndelay(unsigned long ns)
EXPORT_SYMBOL(__ndelay);
void __delay(unsigned long loops)
EXPORT_SYMBOL(__delay);
