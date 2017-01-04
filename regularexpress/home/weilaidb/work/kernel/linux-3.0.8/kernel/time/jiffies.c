#define NSEC_PER_JIFFY	((u32)((((u64)NSEC_PER_SEC)<<8)/ACTHZ))
#define JIFFIES_SHIFT	8
static cycle_t jiffies_read(struct clocksource *cs)
struct clocksource clocksource_jiffies = ;
#if (BITS_PER_LONG < 64)
u64 get_jiffies_64(void)
EXPORT_SYMBOL(get_jiffies_64);
EXPORT_SYMBOL(jiffies);
static int __init init_jiffies_clocksource(void)
core_initcall(init_jiffies_clocksource);
struct clocksource * __init __weak clocksource_default_clock(void)
