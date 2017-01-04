#define _SPARC_IRQ_H
#define NR_IRQS    64
#define irq_canonicalize(irq)	(irq)
extern void __init init_IRQ(void);
#define NO_IRQ		0xffffffff
