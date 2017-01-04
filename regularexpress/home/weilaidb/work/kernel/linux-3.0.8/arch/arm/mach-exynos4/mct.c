static unsigned long clk_cnt_per_tick;
static unsigned long clk_rate;
struct mct_clock_event_device ;
struct mct_clock_event_device mct_tick[2];
static void exynos4_mct_write(unsigned int value, void *addr)
static void exynos4_mct_frc_start(u32 hi, u32 lo)
static cycle_t exynos4_frc_read(struct clocksource *cs)
struct clocksource mct_frc = ;
static void __init exynos4_clocksource_init(void)
static void exynos4_mct_comp0_stop(void)
static void exynos4_mct_comp0_start(enum clock_event_mode mode,
unsigned long cycles)
static int exynos4_comp_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void exynos4_comp_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device mct_comp_device = ;
static irqreturn_t exynos4_mct_comp_isr(int irq, void *dev_id)
static struct irqaction mct_comp_event_irq = ;
static void exynos4_clockevent_init(void)
static void exynos4_mct_tick_stop(struct mct_clock_event_device *mevt)
static void exynos4_mct_tick_start(unsigned long cycles,
struct mct_clock_event_device *mevt)
static int exynos4_tick_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static inline void exynos4_tick_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static irqreturn_t exynos4_mct_tick_isr(int irq, void *dev_id)
static struct irqaction mct_tick0_event_irq = ;
static struct irqaction mct_tick1_event_irq = ;
static void exynos4_mct_tick_init(struct clock_event_device *evt)
void __cpuinit local_timer_setup(struct clock_event_device *evt)
int local_timer_ack(void)
static void __init exynos4_timer_resources(void)
static void __init exynos4_timer_init(void)
struct sys_timer exynos4_timer = ;
