#define MX23_TIMROT_VERSION_OFFSET	0x0a0
#define MX28_TIMROT_VERSION_OFFSET	0x120
#define BP_TIMROT_MAJOR_VERSION		24
#define BV_TIMROT_VERSION_1		0x01
#define BV_TIMROT_VERSION_2		0x02
#define timrot_is_v1()	(timrot_major_version == BV_TIMROT_VERSION_1)
#define HW_TIMROT_ROTCTRL		0x00
#define HW_TIMROT_TIMCTRLn(n)		(0x20 + (n) * 0x40)
#define HW_TIMROT_TIMCOUNTn(n)		(0x30 + (n) * 0x40)
#define HW_TIMROT_RUNNING_COUNTn(n)	(0x30 + (n) * 0x40)
#define HW_TIMROT_FIXED_COUNTn(n)	(0x40 + (n) * 0x40)
#define BM_TIMROT_TIMCTRLn_RELOAD	(1 << 6)
#define BM_TIMROT_TIMCTRLn_UPDATE	(1 << 7)
#define BM_TIMROT_TIMCTRLn_IRQ_EN	(1 << 14)
#define BM_TIMROT_TIMCTRLn_IRQ		(1 << 15)
#define BP_TIMROT_TIMCTRLn_SELECT	0
#define BV_TIMROTv1_TIMCTRLn_SELECT__32KHZ_XTAL	0x8
#define BV_TIMROTv2_TIMCTRLn_SELECT__32KHZ_XTAL	0xb
static struct clock_event_device mxs_clockevent_device;
static enum clock_event_mode mxs_clockevent_mode = CLOCK_EVT_MODE_UNUSED;
static void __iomem *mxs_timrot_base = MXS_IO_ADDRESS(MXS_TIMROT_BASE_ADDR);
static u32 timrot_major_version;
static inline void timrot_irq_disable(void)
static inline void timrot_irq_enable(void)
static void timrot_irq_acknowledge(void)
static cycle_t timrotv1_get_cycles(struct clocksource *cs)
static int timrotv1_set_next_event(unsigned long evt,
struct clock_event_device *dev)
static int timrotv2_set_next_event(unsigned long evt,
struct clock_event_device *dev)
static irqreturn_t mxs_timer_interrupt(int irq, void *dev_id)
static struct irqaction mxs_timer_irq = ;
static const char *clock_event_mode_label[] const = ;
static void mxs_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device mxs_clockevent_device = ;
static int __init mxs_clockevent_init(struct clk *timer_clk)
static struct clocksource clocksource_mxs = ;
static int __init mxs_clocksource_init(struct clk *timer_clk)
void __init mxs_timer_init(struct clk *timer_clk, int irq)
