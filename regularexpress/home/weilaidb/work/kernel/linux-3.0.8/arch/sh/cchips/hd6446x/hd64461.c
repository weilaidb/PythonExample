#define INTC_ICR1 0xA4140010UL
static void hd64461_mask_irq(struct irq_data *data)
static void hd64461_unmask_irq(struct irq_data *data)
static void hd64461_mask_and_ack_irq(struct irq_data *data)
static struct irq_chip hd64461_irq_chip = ;
static void hd64461_irq_demux(unsigned int irq, struct irq_desc *desc)
int __init setup_hd64461(void)
module_init(setup_hd64461);
