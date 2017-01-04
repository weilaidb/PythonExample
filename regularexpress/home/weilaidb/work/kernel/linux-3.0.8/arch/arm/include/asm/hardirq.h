#define __ASM_HARDIRQ_H
#define NR_IPI	5
typedef struct  ____cacheline_aligned irq_cpustat_t;
#define __inc_irq_stat(cpu, member)	__IRQ_STAT(cpu, member)++
#define __get_irq_stat(cpu, member)	__IRQ_STAT(cpu, member)
u64 smp_irq_stat_cpu(unsigned int cpu);
#define smp_irq_stat_cpu(cpu)	0
#define arch_irq_stat_cpu	smp_irq_stat_cpu
#if NR_IRQS > 512
#define HARDIRQ_BITS	10
#elif NR_IRQS > 256
#define HARDIRQ_BITS	9
#define HARDIRQ_BITS	8
#if (1 << HARDIRQ_BITS) < NR_IRQS
# error HARDIRQ_BITS is too low!
#define __ARCH_IRQ_EXIT_IRQS_DISABLED	1
