#define __ASM_HARDIRQ_H
#if NR_IRQS > 256
#define HARDIRQ_BITS	9
#define HARDIRQ_BITS	8
#if (1 << HARDIRQ_BITS) < NR_IRQS
# error HARDIRQ_BITS is too low!
