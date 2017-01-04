static struct resource h7202ps2_resources[] = ;
static struct platform_device h7202ps2_device = ;
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static struct platform_device *devices[] __initdata = ;
static void
h7202_timerx_demux_handler(unsigned int irq_unused, struct irq_desc *desc)
static irqreturn_t
h7202_timer_interrupt(int irq, void *dev_id)
static void inline __mask_timerx_irq(unsigned int irq)
static void inline mask_timerx_irq(struct irq_data *d)
static void inline unmask_timerx_irq(struct irq_data *d)
static struct irq_chip h7202_timerx_chip = ;
static struct irqaction h7202_timer_irq = ;
void __init h7202_init_time(void)
struct sys_timer h7202_timer = ;
void __init h7202_init_irq (void)
void __init init_hw_h7202(void)
