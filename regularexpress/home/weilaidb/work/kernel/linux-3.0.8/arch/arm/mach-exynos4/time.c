static unsigned long clock_count_per_tick;
static struct clk *tin2;
static struct clk *tin4;
static struct clk *tdiv2;
static struct clk *tdiv4;
static struct clk *timerclk;
static void exynos4_pwm_stop(unsigned int pwm_id)
static void exynos4_pwm_init(unsigned int pwm_id, unsigned long tcnt)
static inline void exynos4_pwm_start(unsigned int pwm_id, bool periodic)
static int exynos4_pwm_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void exynos4_pwm_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device pwm_event_device = ;
irqreturn_t exynos4_clock_event_isr(int irq, void *dev_id)
static struct irqaction exynos4_clock_event_irq = ;
static void __init exynos4_clockevent_init(void)
static cycle_t exynos4_pwm4_read(struct clocksource *cs)
static void exynos4_pwm4_resume(struct clocksource *cs)
struct clocksource pwm_clocksource = ;
static void __init exynos4_clocksource_init(void)
static void __init exynos4_timer_resources(void)
static void __init exynos4_timer_init(void)
struct sys_timer exynos4_timer = ;
