#define __UM_SYSTEM_GENERIC_H
extern int get_signals(void);
extern int set_signals(int enable);
extern void block_signals(void);
extern void unblock_signals(void);
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_disable(void)
static inline unsigned long arch_local_irq_save(void)
static inline bool arch_irqs_disabled(void)
extern void *_switch_to(void *prev, void *next, void *last);
#define switch_to(prev, next, last) prev = _switch_to(prev, next, last)
