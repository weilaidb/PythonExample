#define _XTENSA_IRQ_H
static inline void variant_irq_enable(unsigned int irq)
static inline void variant_irq_disable(unsigned int irq)
# define VARIANT_NR_IRQS 0
# define PLATFORM_NR_IRQS 0
#define XTENSA_NR_IRQS XCHAL_NUM_INTERRUPTS
#define NR_IRQS (XTENSA_NR_IRQS + VARIANT_NR_IRQS + PLATFORM_NR_IRQS)
#if VARIANT_NR_IRQS == 0
static inline void variant_init_irq(void)
void variant_init_irq(void) __init;
static __inline__ int irq_canonicalize(int irq)
struct irqaction;
