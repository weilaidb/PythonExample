#define __ASM_SMP_H
static __inline__ unsigned char
__hard_smp_processor_id(void)
struct cpuinfo_alpha  __attribute__((aligned(64)));
extern struct cpuinfo_alpha cpu_data[NR_CPUS];
#define hard_smp_processor_id()	__hard_smp_processor_id()
#define raw_smp_processor_id()	(current_thread_info()->cpu)
extern int smp_num_cpus;
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
#define hard_smp_processor_id()		0
#define smp_call_function_on_cpu(func,info,wait,cpu)    ()
#define NO_PROC_ID	(-1)
