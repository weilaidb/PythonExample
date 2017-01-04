static u32 concurrent_irq;
void __irq_entry do_IRQ(struct pt_regs *regs)
unsigned int irq_create_mapping(struct irq_host *host, irq_hw_number_t hwirq)
EXPORT_SYMBOL_GPL(irq_create_mapping);
unsigned int irq_create_of_mapping(struct device_node *controller,
const u32 *intspec, unsigned int intsize)
EXPORT_SYMBOL_GPL(irq_create_of_mapping);
