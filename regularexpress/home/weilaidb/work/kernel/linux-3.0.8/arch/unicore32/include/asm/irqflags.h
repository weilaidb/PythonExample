#define __UNICORE_IRQFLAGS_H__
#define ARCH_IRQ_DISABLED	(PRIV_MODE | PSR_I_BIT)
#define ARCH_IRQ_ENABLED	(PRIV_MODE)
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_restore(unsigned long flags)
