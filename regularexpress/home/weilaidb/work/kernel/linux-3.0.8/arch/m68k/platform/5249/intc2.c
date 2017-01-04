static void intc2_irq_gpio_mask(struct irq_data *d)
static void intc2_irq_gpio_unmask(struct irq_data *d)
static void intc2_irq_gpio_ack(struct irq_data *d)
static struct irq_chip intc2_irq_gpio_chip = ;
static int __init mcf_intc2_init(void)
arch_initcall(mcf_intc2_init);
