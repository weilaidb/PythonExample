struct fpga_irq ;
static unsigned int fpga2irq(unsigned int irq)
static struct fpga_irq get_fpga_irq(unsigned int irq)
static void disable_se7724_irq(struct irq_data *data)
static void enable_se7724_irq(struct irq_data *data)
static struct irq_chip se7724_irq_chip __read_mostly = ;
static void se7724_irq_demux(unsigned int irq, struct irq_desc *desc)
void __init init_se7724_IRQ(void)
