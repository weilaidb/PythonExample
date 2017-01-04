#define __ALPHA_IRQFLAGS_H
#define IPL_MIN		0
#define IPL_SW0		1
#define IPL_SW1		2
#define IPL_DEV0	3
#define IPL_DEV1	4
#define IPL_TIMER	5
#define IPL_PERF	6
#define IPL_POWERFAIL	6
#define IPL_MCHECK	7
#define IPL_MAX		7
#undef IPL_MIN
#define IPL_MIN		__min_ipl
extern int __min_ipl;
#define getipl()		(rdps() & 7)
#define setipl(ipl)		((void) swpipl(ipl))
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_disable(void)
static inline unsigned long arch_local_irq_save(void)
static inline void arch_local_irq_enable(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline bool arch_irqs_disabled_flags(unsigned long flags)
static inline bool arch_irqs_disabled(void)
