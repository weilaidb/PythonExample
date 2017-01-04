#define _ASM_POWERPC_HW_IRQ_H
extern void timer_interrupt(struct pt_regs *);
static inline unsigned long arch_local_save_flags(void)
static inline unsigned long arch_local_irq_disable(void)
extern void arch_local_irq_restore(unsigned long);
extern void iseries_handle_interrupts(void);
static inline void arch_local_irq_enable(void)
static inline unsigned long arch_local_irq_save(void)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
#define __hard_irq_enable()	asm volatile("wrteei 1" : : : "memory");
#define __hard_irq_disable()	asm volatile("wrteei 0" : : : "memory");
#define __hard_irq_enable()	__mtmsrd(mfmsr() | MSR_EE, 1)
#define __hard_irq_disable()	__mtmsrd(mfmsr() & ~MSR_EE, 1)
#define  hard_irq_disable()			\
do  while(0)
#define SET_MSR_EE(x)	mtmsr(x)
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_disable(void)
static inline void arch_local_irq_enable(void)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
#define hard_irq_disable()		arch_local_irq_disable()
#define ARCH_IRQ_INIT_FLAGS	IRQ_NOREQUEST
struct irq_chip;
