#define __irq_cpustat_h
extern irq_cpustat_t irq_stat[];
#define __IRQ_STAT(cpu, member)	(irq_stat[cpu].member)
#define local_softirq_pending() \
__IRQ_STAT(smp_processor_id(), __softirq_pending)
#define nmi_count(cpu)		__IRQ_STAT((cpu), __nmi_count)
