#define __ASM_ARCH_IRQS_H
#define NR_AIC_IRQS 32
#define irq_finish(irq) do  while (0)
#define	NR_IRQS		(NR_AIC_IRQS + (5 * 32))
#define FIQ_START AT91_ID_FIQ
