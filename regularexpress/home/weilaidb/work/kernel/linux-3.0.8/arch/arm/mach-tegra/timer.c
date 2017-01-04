#define RTC_SECONDS            0x08
#define RTC_SHADOW_SECONDS     0x0c
#define RTC_MILLISECONDS       0x10
#define TIMERUS_CNTR_1US 0x10
#define TIMERUS_USEC_CFG 0x14
#define TIMERUS_CNTR_FREEZE 0x4c
#define TIMER1_BASE 0x0
#define TIMER2_BASE 0x8
#define TIMER3_BASE 0x50
#define TIMER4_BASE 0x58
#define TIMER_PTV 0x0
#define TIMER_PCR 0x4
static void __iomem *timer_reg_base = IO_ADDRESS(TEGRA_TMR1_BASE);
static void __iomem *rtc_base = IO_ADDRESS(TEGRA_RTC_BASE);
static struct timespec persistent_ts;
static u64 persistent_ms, last_persistent_ms;
#define timer_writel(value, reg) \
__raw_writel(value, (u32)timer_reg_base + (reg))
#define timer_readl(reg) \
__raw_readl((u32)timer_reg_base + (reg))
static int tegra_timer_set_next_event(unsigned long cycles,
struct clock_event_device *evt)
static void tegra_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device tegra_clockevent = ;
static DEFINE_CLOCK_DATA(cd);
#define SC_MULT		4194304000u
#define SC_SHIFT	22
unsigned long long notrace sched_clock(void)
static void notrace tegra_update_sched_clock(void)
u64 tegra_rtc_read_ms(void)
void read_persistent_clock(struct timespec *ts)
static irqreturn_t tegra_timer_interrupt(int irq, void *dev_id)
static struct irqaction tegra_timer_irq = ;
static void __init tegra_init_timer(void)
struct sys_timer tegra_timer = ;
static u32 usec_config;
void tegra_timer_suspend(void)
void tegra_timer_resume(void)
