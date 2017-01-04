static irqreturn_t math_error_irq(int cpl, void *dev_id)
static struct irqaction fpu_irq = ;
static struct irqaction irq2 = ;
DEFINE_PER_CPU(vector_irq_t, vector_irq) = ;
int vector_used_by_percpu_irq(unsigned int vector)
void __init init_ISA_irqs(void)
void __init init_IRQ(void)
void setup_vector_irq(int cpu)
static void __init smp_intr_init(void)
static void __init apic_intr_init(void)
void __init native_init_IRQ(void)
