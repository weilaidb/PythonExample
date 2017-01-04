unsigned int se7343_fpga_irq[SE7343_FPGA_IRQ_NR] = ;
static void disable_se7343_irq(struct irq_data *data)
static void enable_se7343_irq(struct irq_data *data)
static struct irq_chip se7343_irq_chip __read_mostly = ;
static void se7343_irq_demux(unsigned int irq, struct irq_desc *desc)
void __init init_7343se_IRQ(void)
