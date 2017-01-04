static void s3c_irq_demux_vic_timer(unsigned int irq, struct irq_desc *desc)
static void s3c_irq_timer_ack(struct irq_data *d)
void __init s3c_init_vic_timer_irq(unsigned int num, unsigned int timer_irq)
