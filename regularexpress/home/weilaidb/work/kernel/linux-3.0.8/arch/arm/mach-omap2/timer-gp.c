#define MAX_GPTIMER_ID		12
static struct omap_dm_timer *gptimer;
static struct clock_event_device clockevent_gpt;
static u8 __initdata gptimer_id = 1;
static u8 __initdata inited;
struct omap_dm_timer *gptimer_wakeup;
static irqreturn_t omap2_gp_timer_interrupt(int irq, void *dev_id)
static struct irqaction omap2_gp_timer_irq = ;
static int omap2_gp_timer_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void omap2_gp_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device clockevent_gpt = ;
int __init omap2_gp_clockevent_set_gptimer(u8 id)
static void __init omap2_gp_clockevent_init(void)
static void __init omap2_gp_clocksource_init(void)
static DEFINE_CLOCK_DATA(cd);
static struct omap_dm_timer *gpt_clocksource;
static cycle_t clocksource_read_cycles(struct clocksource *cs)
static struct clocksource clocksource_gpt = ;
static void notrace dmtimer_update_sched_clock(void)
static void __init omap2_gp_clocksource_init(void)
static void __init omap2_gp_timer_init(void)
struct sys_timer omap_timer = ;
