static u8 pnx4008_irq_type[NR_IRQS] = PNX4008_IRQ_TYPES;
static void pnx4008_mask_irq(struct irq_data *d)
static void pnx4008_unmask_irq(struct irq_data *d)
static void pnx4008_mask_ack_irq(struct irq_data *d)
static int pnx4008_set_irq_type(struct irq_data *d, unsigned int type)
static struct irq_chip pnx4008_irq_chip = ;
void __init pnx4008_init_irq(void)
