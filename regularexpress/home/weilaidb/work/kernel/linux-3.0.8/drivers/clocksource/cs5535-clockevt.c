#define DRV_NAME "cs5535-clockevt"
static int timer_irq;
module_param_named(irq, timer_irq, int, 0644);
MODULE_PARM_DESC(irq, "Which IRQ to use for the clock source MFGPT ticks.");
static unsigned int cs5535_tick_mode = CLOCK_EVT_MODE_SHUTDOWN;
static struct cs5535_mfgpt_timer *cs5535_event_clock;
#define MFGPT_DIVISOR 16
#define MFGPT_SCALE  4
#define MFGPT_HZ  (32768 / MFGPT_DIVISOR)
#define MFGPT_PERIODIC (MFGPT_HZ / HZ)
static void disable_timer(struct cs5535_mfgpt_timer *timer)
static void start_timer(struct cs5535_mfgpt_timer *timer, uint16_t delta)
static void mfgpt_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static int mfgpt_next_event(unsigned long delta, struct clock_event_device *evt)
static struct clock_event_device cs5535_clockevent = ;
static irqreturn_t mfgpt_tick(int irq, void *dev_id)
static struct irqaction mfgptirq  = ;
static int __init cs5535_mfgpt_init(void)
module_init(cs5535_mfgpt_init);
MODULE_AUTHOR("Andres Salomon <dilinger@queued.net>");
MODULE_DESCRIPTION("CS5535/CS5536 MFGPT clock event driver");
MODULE_LICENSE("GPL");
