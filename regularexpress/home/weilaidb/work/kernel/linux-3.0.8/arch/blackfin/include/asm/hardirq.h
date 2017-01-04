#define __BFIN_HARDIRQ_H
#define __ARCH_IRQ_EXIT_IRQS_DISABLED	1
extern void ack_bad_irq(unsigned int irq);
#define ack_bad_irq ack_bad_irq
#define HARDIRQ_BITS 9
