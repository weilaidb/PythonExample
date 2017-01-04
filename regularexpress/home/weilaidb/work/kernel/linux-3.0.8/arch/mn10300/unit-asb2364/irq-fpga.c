static void asb2364_fpga_mask(struct irq_data *d)
static void asb2364_fpga_ack(struct irq_data *d)
static void asb2364_fpga_mask_ack(struct irq_data *d)
static void asb2364_fpga_unmask(struct irq_data *d)
static struct irq_chip asb2364_fpga_pic = ;
static irqreturn_t fpga_interrupt(int irq, void *_mask)
static struct irqaction fpga_irq[]  = ;
void __init irq_fpga_init(void)
