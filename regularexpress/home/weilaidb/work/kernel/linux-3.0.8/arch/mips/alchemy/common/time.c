#define CNTR_OK (SYS_CNTRL_E0 | SYS_CNTRL_32S)
static cycle_t au1x_counter1_read(struct clocksource *cs)
static struct clocksource au1x_counter1_clocksource = ;
static int au1x_rtcmatch2_set_next_event(unsigned long delta,
struct clock_event_device *cd)
static void au1x_rtcmatch2_set_mode(enum clock_event_mode mode,
struct clock_event_device *cd)
static irqreturn_t au1x_rtcmatch2_irq(int irq, void *dev_id)
static struct clock_event_device au1x_rtcmatch2_clockdev = ;
static struct irqaction au1x_rtcmatch2_irqaction = ;
static int __init alchemy_time_init(unsigned int m2int)
static void __init alchemy_setup_c0timer(void)
static int alchemy_m2inttab[] __initdata = ;
void __init plat_time_init(void)
