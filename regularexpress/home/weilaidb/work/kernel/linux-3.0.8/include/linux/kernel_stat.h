#define _LINUX_KERNEL_STAT_H
struct cpu_usage_stat ;
struct kernel_stat ;
DECLARE_PER_CPU(struct kernel_stat, kstat);
#define kstat_cpu(cpu)	per_cpu(kstat, cpu)
#define kstat_this_cpu	__get_cpu_var(kstat)
extern unsigned long long nr_context_switches(void);
struct irq_desc;
static inline void kstat_incr_irqs_this_cpu(unsigned int irq,
struct irq_desc *desc)
static inline unsigned int kstat_irqs_cpu(unsigned int irq, int cpu)
extern unsigned int kstat_irqs_cpu(unsigned int irq, int cpu);
#define kstat_incr_irqs_this_cpu(irqno, DESC)		\
do  while (0)
static inline void kstat_incr_softirqs_this_cpu(unsigned int irq)
static inline unsigned int kstat_softirqs_cpu(unsigned int irq, int cpu)
static inline unsigned int kstat_irqs(unsigned int irq)
extern unsigned int kstat_irqs(unsigned int irq);
static inline unsigned int kstat_cpu_irqs_sum(unsigned int cpu)
extern unsigned long long task_delta_exec(struct task_struct *);
extern void account_user_time(struct task_struct *, cputime_t, cputime_t);
extern void account_system_time(struct task_struct *, int, cputime_t, cputime_t);
extern void account_steal_time(cputime_t);
extern void account_idle_time(cputime_t);
extern void account_process_tick(struct task_struct *, int user);
extern void account_steal_ticks(unsigned long ticks);
extern void account_idle_ticks(unsigned long ticks);
