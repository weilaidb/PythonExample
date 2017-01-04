#define __ASM_ARM_IRQFLAGS_H
#if __LINUX_ARM_ARCH__ >= 6
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_disable(void)
#define local_fiq_enable()  __asm__("cpsie f	@ __stf" : : : "memory", "cc")
#define local_fiq_disable() __asm__("cpsid f	@ __clf" : : : "memory", "cc")
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_disable(void)
#define local_fiq_enable()					\
()
#define local_fiq_disable()					\
()
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline int arch_irqs_disabled_flags(unsigned long flags)
