#define __ASM_AVR32_IRQ_H
#define NR_INTERNAL_IRQS	64
#define NR_IRQS			(NR_INTERNAL_IRQS)
#define irq_canonicalize(i)	(i)
int nmi_enable(void);
void nmi_disable(void);
extern unsigned long intc_get_pending(unsigned int group);
