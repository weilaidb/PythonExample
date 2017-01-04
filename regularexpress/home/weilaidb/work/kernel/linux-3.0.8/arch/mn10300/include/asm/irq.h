#define _ASM_IRQ_H
#define NO_IRQ		INT_MAX
#define NR_CPU_IRQS	GxICR_NUM_IRQS
#define NR_IRQS		NR_CPU_IRQS
#define NR_XIRQS	GxICR_NUM_XIRQS
#define irq_canonicalize(IRQ) (IRQ)
