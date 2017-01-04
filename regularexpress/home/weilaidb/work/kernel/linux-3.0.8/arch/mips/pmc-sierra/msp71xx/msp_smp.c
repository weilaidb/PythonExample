#define MIPS_CPU_IPI_RESCHED_IRQ 0
#define MIPS_CPU_IPI_CALL_IRQ 1
static void ipi_resched_dispatch(void)
static void ipi_call_dispatch(void)
static irqreturn_t ipi_resched_interrupt(int irq, void *dev_id)
static irqreturn_t ipi_call_interrupt(int irq, void *dev_id)
static struct irqaction irq_resched = ;
static struct irqaction irq_call = ;
void __init arch_init_ipiirq(int irq, struct irqaction *action)
void __init msp_vsmp_int_init(void)
