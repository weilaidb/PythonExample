static irqreturn_t hvc_handle_interrupt(int irq, void *dev_instance)
int notifier_add_irq(struct hvc_struct *hp, int irq)
void notifier_del_irq(struct hvc_struct *hp, int irq)
void notifier_hangup_irq(struct hvc_struct *hp, int irq)
