void handle_bad_irq(unsigned int irq, struct irq_desc *desc)
irqreturn_t no_action(int cpl, void *dev_id)
static void warn_no_thread(unsigned int irq, struct irqaction *action)
static void irq_wake_thread(struct irq_desc *desc, struct irqaction *action)
irqreturn_t
handle_irq_event_percpu(struct irq_desc *desc, struct irqaction *action)
irqreturn_t handle_irq_event(struct irq_desc *desc)
