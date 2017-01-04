#define _ASM_IRQ_H_
#define NR_IRQS				48
#define IRQ_BASE_CPU			(0 * 16)
#define IRQ_BASE_FPGA			(1 * 16)
#define IRQ_BASE_MB93493		(2 * 16)
#define MIN_PROBE_IRQ			(NR_IRQS - 32)
static inline int irq_canonicalize(int irq)
