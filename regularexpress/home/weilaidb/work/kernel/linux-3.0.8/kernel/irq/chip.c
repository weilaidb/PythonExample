int irq_set_chip(unsigned int irq, struct irq_chip *chip)
EXPORT_SYMBOL(irq_set_chip);
int irq_set_irq_type(unsigned int irq, unsigned int type)
EXPORT_SYMBOL(irq_set_irq_type);
int irq_set_handler_data(unsigned int irq, void *data)
EXPORT_SYMBOL(irq_set_handler_data);
int irq_set_msi_desc(unsigned int irq, struct msi_desc *entry)
int irq_set_chip_data(unsigned int irq, void *data)
EXPORT_SYMBOL(irq_set_chip_data);
struct irq_data *irq_get_irq_data(unsigned int irq)
EXPORT_SYMBOL_GPL(irq_get_irq_data);
static void irq_state_clr_disabled(struct irq_desc *desc)
static void irq_state_set_disabled(struct irq_desc *desc)
static void irq_state_clr_masked(struct irq_desc *desc)
static void irq_state_set_masked(struct irq_desc *desc)
int irq_startup(struct irq_desc *desc)
void irq_shutdown(struct irq_desc *desc)
void irq_enable(struct irq_desc *desc)
void irq_disable(struct irq_desc *desc)
static inline void mask_ack_irq(struct irq_desc *desc)
void mask_irq(struct irq_desc *desc)
void unmask_irq(struct irq_desc *desc)
void handle_nested_irq(unsigned int irq)
EXPORT_SYMBOL_GPL(handle_nested_irq);
static bool irq_check_poll(struct irq_desc *desc)
void
handle_simple_irq(unsigned int irq, struct irq_desc *desc)
EXPORT_SYMBOL_GPL(handle_simple_irq);
void
handle_level_irq(unsigned int irq, struct irq_desc *desc)
EXPORT_SYMBOL_GPL(handle_level_irq);
static inline void preflow_handler(struct irq_desc *desc)
static inline void preflow_handler(struct irq_desc *desc)
void
handle_fasteoi_irq(unsigned int irq, struct irq_desc *desc)
void
handle_edge_irq(unsigned int irq, struct irq_desc *desc)
void handle_edge_eoi_irq(unsigned int irq, struct irq_desc *desc)
void
handle_percpu_irq(unsigned int irq, struct irq_desc *desc)
void
__irq_set_handler(unsigned int irq, irq_flow_handler_t handle, int is_chained,
const char *name)
EXPORT_SYMBOL_GPL(__irq_set_handler);
void
irq_set_chip_and_handler_name(unsigned int irq, struct irq_chip *chip,
irq_flow_handler_t handle, const char *name)
void irq_modify_status(unsigned int irq, unsigned long clr, unsigned long set)
EXPORT_SYMBOL_GPL(irq_modify_status);
void irq_cpu_online(void)
void irq_cpu_offline(void)
