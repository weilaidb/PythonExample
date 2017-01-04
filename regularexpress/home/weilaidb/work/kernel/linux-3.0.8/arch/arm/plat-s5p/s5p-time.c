static struct clk *tin_event;
static struct clk *tin_source;
static struct clk *tdiv_event;
static struct clk *tdiv_source;
static struct clk *timerclk;
static struct s5p_timer_source timer_source;
static unsigned long clock_count_per_tick;
static void s5p_timer_resume(void);
static void s5p_time_stop(enum s5p_timer_mode mode)
static void s5p_time_setup(enum s5p_timer_mode mode, unsigned long tcnt)
static void s5p_time_start(enum s5p_timer_mode mode, bool periodic)
static int s5p_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void s5p_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static void s5p_timer_resume(void)
void __init s5p_set_timer_source(enum s5p_timer_mode event,
enum s5p_timer_mode source)
static struct clock_event_device time_event_device = ;
static irqreturn_t s5p_clock_event_isr(int irq, void *dev_id)
static struct irqaction s5p_clock_event_irq = ;
static void __init s5p_clockevent_init(void)
static void __iomem *s5p_timer_reg(void)
static cycle_t s5p_timer_read(struct clocksource *cs)
static DEFINE_CLOCK_DATA(cd);
unsigned long long notrace sched_clock(void)
static void notrace s5p_update_sched_clock(void)
struct clocksource time_clocksource = ;
static void __init s5p_clocksource_init(void)
static void __init s5p_timer_resources(void)
static void __init s5p_timer_init(void)
struct sys_timer s5p_timer = ;
