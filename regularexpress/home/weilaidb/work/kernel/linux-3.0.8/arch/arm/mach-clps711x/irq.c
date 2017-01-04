static void int1_mask(struct irq_data *d)
static void int1_ack(struct irq_data *d)
static void int1_unmask(struct irq_data *d)
static struct irq_chip int1_chip = ;
static void int2_mask(struct irq_data *d)
static void int2_ack(struct irq_data *d)
static void int2_unmask(struct irq_data *d)
static struct irq_chip int2_chip = ;
void __init clps711x_init_irq(void)
