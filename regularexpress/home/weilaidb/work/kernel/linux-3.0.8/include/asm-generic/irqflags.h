#define __ASM_GENERIC_IRQFLAGS_H
#define ARCH_IRQ_DISABLED 0
#define ARCH_IRQ_ENABLED 1
unsigned long arch_local_save_flags(void);
void arch_local_irq_restore(unsigned long flags);
static inline unsigned long arch_local_irq_save(void)
static inline int arch_irqs_disabled_flags(unsigned long flags)
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_disable(void)
static inline int arch_irqs_disabled(void)
