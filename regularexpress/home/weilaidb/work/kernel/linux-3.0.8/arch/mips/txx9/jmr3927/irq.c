#if JMR3927_IRQ_END > NR_IRQS
#error JMR3927_IRQ_END > NR_IRQS
static void mask_irq_ioc(struct irq_data *d)
static void unmask_irq_ioc(struct irq_data *d)
static int jmr3927_ioc_irqroute(void)
static int jmr3927_irq_dispatch(int pending)
static struct irq_chip jmr3927_irq_ioc = ;
void __init jmr3927_irq_setup(void)
