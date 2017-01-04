#define _ASM_POWERPC_HARDIRQ_H
typedef struct  ____cacheline_aligned irq_cpustat_t;
DECLARE_PER_CPU_SHARED_ALIGNED(irq_cpustat_t, irq_stat);
#define __ARCH_IRQ_STAT
#define local_softirq_pending()	__get_cpu_var(irq_stat).__softirq_pending
static inline void ack_bad_irq(unsigned int irq)
extern u64 arch_irq_stat_cpu(unsigned int cpu);
#define arch_irq_stat_cpu	arch_irq_stat_cpu
