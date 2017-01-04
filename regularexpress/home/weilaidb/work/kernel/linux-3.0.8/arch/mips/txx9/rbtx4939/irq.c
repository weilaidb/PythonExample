static void rbtx4939_ioc_irq_unmask(struct irq_data *d)
static void rbtx4939_ioc_irq_mask(struct irq_data *d)
static struct irq_chip rbtx4939_ioc_irq_chip = ;
static inline int rbtx4939_ioc_irqroute(void)
static int rbtx4939_irq_dispatch(int pending)
void __init rbtx4939_irq_setup(void)
