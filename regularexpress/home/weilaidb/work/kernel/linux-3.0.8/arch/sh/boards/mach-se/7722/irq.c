unsigned int se7722_fpga_irq[SE7722_FPGA_IRQ_NR] = ;
static void disable_se7722_irq(struct irq_data *data)
static void enable_se7722_irq(struct irq_data *data)
static struct irq_chip se7722_irq_chip __read_mostly = ;
static void se7722_irq_demux(unsigned int irq, struct irq_desc *desc)
void __init init_se7722_IRQ(void)
