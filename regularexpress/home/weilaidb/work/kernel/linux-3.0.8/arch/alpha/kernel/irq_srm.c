DEFINE_SPINLOCK(srm_irq_lock);
static inline void
srm_enable_irq(struct irq_data *d)
static void
srm_disable_irq(struct irq_data *d)
static struct irq_chip srm_irq_type = ;
void __init
init_srm_irqs(long max, unsigned long ignore_mask)
void
srm_device_interrupt(unsigned long vector)
