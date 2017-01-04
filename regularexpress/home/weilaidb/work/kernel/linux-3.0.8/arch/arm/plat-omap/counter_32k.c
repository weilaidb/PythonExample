#define OMAP16XX_TIMER_32K_SYNCHRONIZED		0xfffbc410
static u32 offset_32k __read_mostly;
static cycle_t notrace omap16xx_32k_read(struct clocksource *cs)
#define omap16xx_32k_read	NULL
static cycle_t notrace omap2420_32k_read(struct clocksource *cs)
#define omap2420_32k_read	NULL
static cycle_t notrace omap2430_32k_read(struct clocksource *cs)
#define omap2430_32k_read	NULL
static cycle_t notrace omap34xx_32k_read(struct clocksource *cs)
#define omap34xx_32k_read	NULL
static cycle_t notrace omap44xx_32k_read(struct clocksource *cs)
#define omap44xx_32k_read	NULL
static cycle_t notrace omap_32k_read_dummy(struct clocksource *cs)
static struct clocksource clocksource_32k = ;
static DEFINE_CLOCK_DATA(cd);
#define SC_MULT		4000000000u
#define SC_SHIFT	17
static inline unsigned long long notrace _omap_32k_sched_clock(void)
unsigned long long notrace sched_clock(void)
unsigned long long notrace omap_32k_sched_clock(void)
static void notrace omap_update_sched_clock(void)
static struct timespec persistent_ts;
static cycles_t cycles, last_cycles;
void read_persistent_clock(struct timespec *ts)
int __init omap_init_clocksource_32k(void)
