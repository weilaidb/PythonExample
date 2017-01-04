static void isa_mask_pic_lo_irq(struct irq_data *d)
static void isa_ack_pic_lo_irq(struct irq_data *d)
static void isa_unmask_pic_lo_irq(struct irq_data *d)
static struct irq_chip isa_lo_chip = ;
static void isa_mask_pic_hi_irq(struct irq_data *d)
static void isa_ack_pic_hi_irq(struct irq_data *d)
static void isa_unmask_pic_hi_irq(struct irq_data *d)
static struct irq_chip isa_hi_chip = ;
static void
isa_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irqaction irq_cascade = ;
static struct resource pic1_resource = ;
static struct resource pic2_resource = ;
void __init isa_init_irq(unsigned int host_irq)
