#define __M68K_HARDIRQ_H
#define HARDIRQ_BITS	8
#if (1 << HARDIRQ_BITS) < NR_IRQS
# error HARDIRQ_BITS is too low!
