static inline struct ipr_desc *get_ipr_desc(struct irq_data *data)
static void disable_ipr_irq(struct irq_data *data)
static void enable_ipr_irq(struct irq_data *data)
void register_ipr_controller(struct ipr_desc *desc)
EXPORT_SYMBOL(register_ipr_controller);
