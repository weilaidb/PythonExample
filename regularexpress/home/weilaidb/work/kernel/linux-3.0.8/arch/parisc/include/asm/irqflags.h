#define __PARISC_IRQFLAGS_H
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_disable(void)
static inline void arch_local_irq_enable(void)
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
