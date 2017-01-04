#define __ASM_HARDIRQ_H
extern atomic_t irq_err_count;
static inline void ack_bad_irq(int irq)
#define ack_bad_irq ack_bad_irq
