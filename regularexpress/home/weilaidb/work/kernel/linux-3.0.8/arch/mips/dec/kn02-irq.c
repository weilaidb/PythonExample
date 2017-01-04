u32 cached_kn02_csr;
static int kn02_irq_base;
static void unmask_kn02_irq(struct irq_data *d)
static void mask_kn02_irq(struct irq_data *d)
static void ack_kn02_irq(struct irq_data *d)
static struct irq_chip kn02_irq_type = ;
void __init init_kn02_irqs(int base)
