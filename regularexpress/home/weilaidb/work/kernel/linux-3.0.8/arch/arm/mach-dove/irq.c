static void gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
static void pmu_irq_mask(struct irq_data *d)
static void pmu_irq_unmask(struct irq_data *d)
static void pmu_irq_ack(struct irq_data *d)
static struct irq_chip pmu_irq_chip = ;
static void pmu_irq_handler(unsigned int irq, struct irq_desc *desc)
void __init dove_init_irq(void)
