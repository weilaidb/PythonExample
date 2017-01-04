struct irqmap ;
static struct irqmap intc_irqmap[MCFINT_VECMAX - MCFINT_VECBASE] = ;
static void intc_irq_mask(struct irq_data *d)
static void intc_irq_unmask(struct irq_data *d)
static void intc_irq_ack(struct irq_data *d)
static int intc_irq_set_type(struct irq_data *d, unsigned int type)
static void intc_external_irq(unsigned int irq, struct irq_desc *desc)
static struct irq_chip intc_irq_chip = ;
void __init init_IRQ(void)
