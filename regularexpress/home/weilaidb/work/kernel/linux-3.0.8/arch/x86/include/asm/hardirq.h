#define _ASM_X86_HARDIRQ_H
typedef struct  ____cacheline_aligned irq_cpustat_t;
DECLARE_PER_CPU_SHARED_ALIGNED(irq_cpustat_t, irq_stat);
#define MAX_HARDIRQS_PER_CPU NR_VECTORS
#define __ARCH_IRQ_STAT
#define inc_irq_stat(member)	percpu_inc(irq_stat.member)
#define local_softirq_pending()	percpu_read(irq_stat.__softirq_pending)
#define __ARCH_SET_SOFTIRQ_PENDING
#define set_softirq_pending(x)	percpu_write(irq_stat.__softirq_pending, (x))
#define or_softirq_pending(x)	percpu_or(irq_stat.__softirq_pending, (x))
extern void ack_bad_irq(unsigned int irq);
extern u64 arch_irq_stat_cpu(unsigned int cpu);
#define arch_irq_stat_cpu	arch_irq_stat_cpu
extern u64 arch_irq_stat(void);
#define arch_irq_stat		arch_irq_stat
