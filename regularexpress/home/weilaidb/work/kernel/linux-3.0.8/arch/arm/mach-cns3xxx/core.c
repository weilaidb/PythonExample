static struct map_desc cns3xxx_io_desc[] __initdata = ;
void __init cns3xxx_map_io(void)
void __init cns3xxx_init_irq(void)
void cns3xxx_power_off(void)
static void __iomem *cns3xxx_tmr1;
static void cns3xxx_timer_set_mode(enum clock_event_mode mode,
struct clock_event_device *clk)
static int cns3xxx_timer_set_next_event(unsigned long evt,
struct clock_event_device *unused)
static struct clock_event_device cns3xxx_tmr1_clockevent = ;
static void __init cns3xxx_clockevents_init(unsigned int timer_irq)
static irqreturn_t cns3xxx_timer_interrupt(int irq, void *dev_id)
static struct irqaction cns3xxx_timer_irq = ;
static void __init __cns3xxx_timer_init(unsigned int timer_irq)
static void __init cns3xxx_timer_init(void)
struct sys_timer cns3xxx_timer = ;
