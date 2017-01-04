#define __ASM_IRQFLAGS_H
#define __arch_local_irq_stosm(__or)					\
()
#define __arch_local_irq_stnsm(__and)					\
()
static inline void __arch_local_irq_ssm(unsigned long flags)
static inline unsigned long arch_local_save_flags(void)
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_disable(void)
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
