#define _ASM_IRQFLAGS_H
static inline void arch_local_irq_disable(void)
static inline void arch_local_irq_enable(void)
static inline unsigned long arch_local_save_flags(void)
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
#define __arch_local_irq_disable()			\
do  while (0)
#define __arch_local_irq_enable()			\
do  while (0)
#define __arch_local_save_flags(flags)		\
do  while (0)
#define	__arch_local_irq_save(flags)			\
do  while (0)
#define	__arch_local_irq_restore(flags)			\
do  while (0)
#define __arch_irqs_disabled()			\
((__get_PSR() & PSR_PIL) >= PSR_PIL_14)
