#define _ASM_IA64_IRQFLAGS_H
extern unsigned long last_cli_ip;
static inline void arch_maybe_save_ip(unsigned long flags)
#define arch_maybe_save_ip(flags) do  while (0)
static inline unsigned long arch_local_save_flags(void)
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_disable(void)
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
static inline void arch_safe_halt(void)
