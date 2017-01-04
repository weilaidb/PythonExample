typedef struct irq_cascade  irq_cascade_t;
static irq_cascade_t irq_cascade[NR_IRQS] __cacheline_aligned;
static struct irqaction cascade_irqaction = ;
int cascade_irq(unsigned int irq, int (*get_irq)(unsigned int))
EXPORT_SYMBOL_GPL(cascade_irq);
static void irq_dispatch(unsigned int irq)
asmlinkage void plat_irq_dispatch(void)
void __init arch_init_irq(void)
