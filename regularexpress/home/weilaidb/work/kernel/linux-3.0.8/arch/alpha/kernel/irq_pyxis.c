static unsigned long cached_irq_mask;
static inline void
pyxis_update_irq_hw(unsigned long mask)
static inline void
pyxis_enable_irq(struct irq_data *d)
static void
pyxis_disable_irq(struct irq_data *d)
static void
pyxis_mask_and_ack_irq(struct irq_data *d)
static struct irq_chip pyxis_irq_type = ;
void
pyxis_device_interrupt(unsigned long vector)
void __init
init_pyxis_irqs(unsigned long ignore_mask)
