#define MXC_TCTL		0x00
#define MXC_TCTL_TEN		(1 << 0)
#define MXC_TPRER		0x04
#define MX1_2_TCTL_CLK_PCLK1	(1 << 1)
#define MX1_2_TCTL_IRQEN	(1 << 4)
#define MX1_2_TCTL_FRR		(1 << 8)
#define MX1_2_TCMP		0x08
#define MX1_2_TCN		0x10
#define MX1_2_TSTAT		0x14
#define MX2_TSTAT_CAPT		(1 << 1)
#define MX2_TSTAT_COMP		(1 << 0)
#define V2_TCTL_WAITEN		(1 << 3)
#define V2_TCTL_CLK_IPG		(1 << 6)
#define V2_TCTL_FRR		(1 << 9)
#define V2_IR			0x0c
#define V2_TSTAT		0x08
#define V2_TSTAT_OF1		(1 << 0)
#define V2_TCN			0x24
#define V2_TCMP			0x10
#define timer_is_v1()	(cpu_is_mx1() || cpu_is_mx21() || cpu_is_mx27())
#define timer_is_v2()	(!timer_is_v1())
static struct clock_event_device clockevent_mxc;
static enum clock_event_mode clockevent_mode = CLOCK_EVT_MODE_UNUSED;
static void __iomem *timer_base;
static inline void gpt_irq_disable(void)
static inline void gpt_irq_enable(void)
static void gpt_irq_acknowledge(void)
static void __iomem *sched_clock_reg;
static DEFINE_CLOCK_DATA(cd);
unsigned long long notrace sched_clock(void)
static void notrace mxc_update_sched_clock(void)
static int __init mxc_clocksource_init(struct clk *timer_clk)
static int mx1_2_set_next_event(unsigned long evt,
struct clock_event_device *unused)
static int v2_set_next_event(unsigned long evt,
struct clock_event_device *unused)
static const char *clock_event_mode_label[] = ;
static void mxc_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static irqreturn_t mxc_timer_interrupt(int irq, void *dev_id)
static struct irqaction mxc_timer_irq = ;
static struct clock_event_device clockevent_mxc = ;
static int __init mxc_clockevent_init(struct clk *timer_clk)
void __init mxc_timer_init(struct clk *timer_clk, void __iomem *base, int irq)
