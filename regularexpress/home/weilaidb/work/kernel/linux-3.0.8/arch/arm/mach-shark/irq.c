static unsigned char cached_irq_mask[2] = ;
static void shark_disable_8259A_irq(struct irq_data *d)
static void shark_enable_8259A_irq(struct irq_data *d)
static void shark_ack_8259A_irq(struct irq_data *d)
static irqreturn_t bogus_int(int irq, void *dev_id)
static struct irqaction cascade;
static struct irq_chip fb_chip = ;
void __init shark_init_irq(void)
