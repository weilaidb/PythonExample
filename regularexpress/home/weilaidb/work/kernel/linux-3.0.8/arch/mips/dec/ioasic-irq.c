static int ioasic_irq_base;
static void unmask_ioasic_irq(struct irq_data *d)
static void mask_ioasic_irq(struct irq_data *d)
static void ack_ioasic_irq(struct irq_data *d)
static struct irq_chip ioasic_irq_type = ;
static struct irq_chip ioasic_dma_irq_type = ;
void __init init_ioasic_irqs(int base)
