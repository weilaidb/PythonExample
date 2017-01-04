#define __SPARC64_HARDIRQ_H
#define __ARCH_IRQ_STAT
#define local_softirq_pending() \
(local_cpu_data().__softirq_pending)
void ack_bad_irq(unsigned int irq);
#define HARDIRQ_BITS	8
