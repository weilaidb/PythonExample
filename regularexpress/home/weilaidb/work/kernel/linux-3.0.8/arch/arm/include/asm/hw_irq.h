#define _ARCH_ARM_HW_IRQ_H
static inline void ack_bad_irq(int irq)
void set_irq_flags(unsigned int irq, unsigned int flags);
#define IRQF_VALID	(1 << 0)
#define IRQF_PROBE	(1 << 1)
#define IRQF_NOAUTOEN	(1 << 2)
#define ARCH_IRQ_INIT_FLAGS	(IRQ_NOREQUEST | IRQ_NOPROBE)
