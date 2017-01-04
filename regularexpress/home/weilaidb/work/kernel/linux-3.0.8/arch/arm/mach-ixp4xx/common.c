static void __init ixp4xx_clocksource_init(void);
static void __init ixp4xx_clockevent_init(void);
static struct clock_event_device clockevent_ixp4xx;
static struct map_desc ixp4xx_io_desc[] __initdata = ;
void __init ixp4xx_map_io(void)
enum ixp4xx_irq_type ;
static unsigned long long ixp4xx_irq_edge = 0;
static signed char irq2gpio[32] = ;
int gpio_to_irq(int gpio)
EXPORT_SYMBOL(gpio_to_irq);
int irq_to_gpio(unsigned int irq)
EXPORT_SYMBOL(irq_to_gpio);
static int ixp4xx_set_irq_type(struct irq_data *d, unsigned int type)
static void ixp4xx_irq_mask(struct irq_data *d)
static void ixp4xx_irq_ack(struct irq_data *d)
static void ixp4xx_irq_unmask(struct irq_data *d)
static struct irq_chip ixp4xx_irq_chip = ;
void __init ixp4xx_init_irq(void)
static irqreturn_t ixp4xx_timer_interrupt(int irq, void *dev_id)
static struct irqaction ixp4xx_timer_irq = ;
void __init ixp4xx_timer_init(void)
struct sys_timer ixp4xx_timer = ;
static struct pxa2xx_udc_mach_info ixp4xx_udc_info;
void __init ixp4xx_set_udc_info(struct pxa2xx_udc_mach_info *info)
static struct resource ixp4xx_udc_resources[] = ;
static struct platform_device ixp4xx_udc_device = ;
static struct platform_device *ixp4xx_devices[] __initdata = ;
static struct resource ixp46x_i2c_resources[] = ;
static struct platform_device ixp46x_i2c_controller = ;
static struct platform_device *ixp46x_devices[] __initdata = ;
unsigned long ixp4xx_exp_bus_size;
EXPORT_SYMBOL(ixp4xx_exp_bus_size);
void __init ixp4xx_sys_init(void)
static DEFINE_CLOCK_DATA(cd);
unsigned long long notrace sched_clock(void)
static void notrace ixp4xx_update_sched_clock(void)
static cycle_t ixp4xx_clocksource_read(struct clocksource *c)
unsigned long ixp4xx_timer_freq = IXP4XX_TIMER_FREQ;
EXPORT_SYMBOL(ixp4xx_timer_freq);
static void __init ixp4xx_clocksource_init(void)
static int ixp4xx_set_next_event(unsigned long evt,
struct clock_event_device *unused)
static void ixp4xx_set_mode(enum clock_event_mode mode,
struct clock_event_device *evt)
static struct clock_event_device clockevent_ixp4xx = ;
static void __init ixp4xx_clockevent_init(void)
