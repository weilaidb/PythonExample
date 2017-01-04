static inline void unmask_rm9k_irq(struct irq_data *d)
static inline void mask_rm9k_irq(struct irq_data *d)
static inline void rm9k_cpu_irq_enable(struct irq_data *d)
static void local_rm9k_perfcounter_irq_startup(void *args)
static unsigned int rm9k_perfcounter_irq_startup(struct irq_data *d)
static void local_rm9k_perfcounter_irq_shutdown(void *args)
static void rm9k_perfcounter_irq_shutdown(struct irq_data *d)
static struct irq_chip rm9k_irq_controller = ;
static struct irq_chip rm9k_perfcounter_irq = ;
unsigned int rm9000_perfcount_irq;
EXPORT_SYMBOL(rm9000_perfcount_irq);
void __init rm9k_cpu_irq_init(void)
