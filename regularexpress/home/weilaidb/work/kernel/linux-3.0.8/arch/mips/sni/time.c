#define SNI_CLOCK_TICK_RATE     3686400
#define SNI_COUNTER2_DIV        64
#define SNI_COUNTER0_DIV        ((SNI_CLOCK_TICK_RATE / SNI_COUNTER2_DIV) / HZ)
static void a20r_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device a20r_clockevent_device = ;
static irqreturn_t a20r_interrupt(int irq, void *dev_id)
static struct irqaction a20r_irqaction = ;
static void __init sni_a20r_timer_setup(void)
#define SNI_8254_TICK_RATE        1193182UL
#define SNI_8254_TCSAMP_COUNTER   ((SNI_8254_TICK_RATE / HZ) + 255)
static __init unsigned long dosample(void)
void __init plat_time_init(void)
void read_persistent_clock(struct timespec *ts)
