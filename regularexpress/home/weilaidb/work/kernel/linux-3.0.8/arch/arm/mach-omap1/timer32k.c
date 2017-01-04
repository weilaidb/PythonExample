#define OMAP1_32K_TIMER_BASE		0xfffb9000
#define OMAP1_32K_TIMER_CR		0x08
#define OMAP1_32K_TIMER_TVR		0x00
#define OMAP1_32K_TIMER_TCR		0x04
#define OMAP_32K_TICKS_PER_SEC		(32768)
#define OMAP_32K_TIMER_TICK_PERIOD	((OMAP_32K_TICKS_PER_SEC / HZ) - 1)
#define JIFFIES_TO_HW_TICKS(nr_jiffies, clock_rate)			\
(((nr_jiffies) * (clock_rate)) / HZ)
static inline void omap_32k_timer_write(int val, int reg)
static inline unsigned long omap_32k_timer_read(int reg)
static inline void omap_32k_timer_start(unsigned long load_val)
static inline void omap_32k_timer_stop(void)
#define omap_32k_timer_ack_irq()
static int omap_32k_timer_set_next_event(unsigned long delta,
struct clock_event_device *dev)
static void omap_32k_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device clockevent_32k_timer = ;
static irqreturn_t omap_32k_timer_interrupt(int irq, void *dev_id)
static struct irqaction omap_32k_timer_irq = ;
static __init void omap_init_32k_timer(void)
bool __init omap_32k_timer_init(void)
