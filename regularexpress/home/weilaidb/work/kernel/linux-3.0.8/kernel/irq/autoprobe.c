static DEFINE_MUTEX(probing_active);
unsigned long probe_irq_on(void)
EXPORT_SYMBOL(probe_irq_on);
unsigned int probe_irq_mask(unsigned long val)
EXPORT_SYMBOL(probe_irq_mask);
int probe_irq_off(unsigned long val)
EXPORT_SYMBOL(probe_irq_off);
