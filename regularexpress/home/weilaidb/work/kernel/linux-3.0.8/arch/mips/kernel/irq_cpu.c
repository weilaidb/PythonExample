static inline void unmask_mips_irq(struct irq_data *d)
static inline void mask_mips_irq(struct irq_data *d)
static struct irq_chip mips_cpu_irq_controller = ;
static unsigned int mips_mt_cpu_irq_startup(struct irq_data *d)
static void mips_mt_cpu_irq_ack(struct irq_data *d)
static struct irq_chip mips_mt_cpu_irq_controller = ;
void __init mips_cpu_irq_init(void)
