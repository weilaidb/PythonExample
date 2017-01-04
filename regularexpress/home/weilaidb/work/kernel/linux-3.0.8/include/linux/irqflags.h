#define _LINUX_TRACE_IRQFLAGS_H
extern void trace_softirqs_on(unsigned long ip);
extern void trace_softirqs_off(unsigned long ip);
extern void trace_hardirqs_on(void);
extern void trace_hardirqs_off(void);
# define trace_hardirq_context(p)	((p)->hardirq_context)
# define trace_softirq_context(p)	((p)->softirq_context)
# define trace_hardirqs_enabled(p)	((p)->hardirqs_enabled)
# define trace_softirqs_enabled(p)	((p)->softirqs_enabled)
# define trace_hardirq_enter()	do  while (0)
# define trace_hardirq_exit()	do  while (0)
# define lockdep_softirq_enter()	do  while (0)
# define lockdep_softirq_exit()	do  while (0)
# define INIT_TRACE_IRQFLAGS	.softirqs_enabled = 1,
# define trace_hardirqs_on()		do  while (0)
# define trace_hardirqs_off()		do  while (0)
# define trace_softirqs_on(ip)		do  while (0)
# define trace_softirqs_off(ip)		do  while (0)
# define trace_hardirq_context(p)	0
# define trace_softirq_context(p)	0
# define trace_hardirqs_enabled(p)	0
# define trace_softirqs_enabled(p)	0
# define trace_hardirq_enter()		do  while (0)
# define trace_hardirq_exit()		do  while (0)
# define lockdep_softirq_enter()	do  while (0)
# define lockdep_softirq_exit()		do  while (0)
# define INIT_TRACE_IRQFLAGS
#if defined(CONFIG_IRQSOFF_TRACER) || \
defined(CONFIG_PREEMPT_TRACER)
extern void stop_critical_timings(void);
extern void start_critical_timings(void);
# define stop_critical_timings() do  while (0)
# define start_critical_timings() do  while (0)
#define raw_local_irq_disable()		arch_local_irq_disable()
#define raw_local_irq_enable()		arch_local_irq_enable()
#define raw_local_irq_save(flags)			\
do  while (0)
#define raw_local_irq_restore(flags)			\
do  while (0)
#define raw_local_save_flags(flags)			\
do  while (0)
#define raw_irqs_disabled_flags(flags)			\
()
#define raw_irqs_disabled()		(arch_irqs_disabled())
#define raw_safe_halt()			arch_safe_halt()
#define local_irq_enable() \
do  while (0)
#define local_irq_disable() \
do  while (0)
#define local_irq_save(flags)				\
do  while (0)
#define local_irq_restore(flags)			\
do  while (0)
#define local_save_flags(flags)				\
do  while (0)
#define irqs_disabled_flags(flags)			\
()
#define irqs_disabled()					\
()
#define safe_halt()				\
do  while (0)
#define local_irq_enable()	do  while (0)
#define local_irq_disable()	do  while (0)
#define local_irq_save(flags)					\
do  while (0)
#define local_irq_restore(flags) do  while (0)
#define local_save_flags(flags)	do  while (0)
#define irqs_disabled()		(raw_irqs_disabled())
#define irqs_disabled_flags(flags) (raw_irqs_disabled_flags(flags))
#define safe_halt()		do  while (0)
