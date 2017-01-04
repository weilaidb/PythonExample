static inline unsigned int cp_intc_read(unsigned offset)
static inline void cp_intc_write(unsigned long value, unsigned offset)
static void cp_intc_ack_irq(struct irq_data *d)
static void cp_intc_mask_irq(struct irq_data *d)
static void cp_intc_unmask_irq(struct irq_data *d)
static int cp_intc_set_irq_type(struct irq_data *d, unsigned int flow_type)
static int cp_intc_set_wake(struct irq_data *d, unsigned int on)
static struct irq_chip cp_intc_irq_chip = ;
void __init cp_intc_init(void)
