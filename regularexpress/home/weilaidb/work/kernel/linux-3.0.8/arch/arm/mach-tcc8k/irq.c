static void tcc8000_mask_ack_irq0(struct irq_data *d)
static void tcc8000_mask_ack_irq1(struct irq_data *d)
static void tcc8000_mask_irq0(struct irq_data *d)
static void tcc8000_mask_irq1(struct irq_data *d)
static void tcc8000_ack_irq0(struct irq_data *d)
static void tcc8000_ack_irq1(struct irq_data *d)
static void tcc8000_unmask_irq0(struct irq_data *d)
static void tcc8000_unmask_irq1(struct irq_data *d)
static struct irq_chip tcc8000_irq_chip0 = ;
static struct irq_chip tcc8000_irq_chip1 = ;
void __init tcc8k_init_irq(void)
