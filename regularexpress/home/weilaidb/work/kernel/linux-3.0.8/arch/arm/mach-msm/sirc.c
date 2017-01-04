static unsigned int int_enable;
static unsigned int wake_enable;
static struct sirc_regs_t sirc_regs = ;
static struct sirc_cascade_regs sirc_reg_table[] = ;
static void sirc_irq_mask(struct irq_data *d)
static void sirc_irq_unmask(struct irq_data *d)
static void sirc_irq_ack(struct irq_data *d)
static int sirc_irq_set_wake(struct irq_data *d, unsigned int on)
static int sirc_irq_set_type(struct irq_data *d, unsigned int flow_type)
static void sirc_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip sirc_irq_chip = ;
void __init msm_init_sirc(void)
