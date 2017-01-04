#define __ASM_SH_SMP_H
#define raw_smp_processor_id()	(current_thread_info()->cpu)
extern int __cpu_number_map[NR_CPUS];
#define cpu_number_map(cpu)  __cpu_number_map[cpu]
extern int __cpu_logical_map[NR_CPUS];
#define cpu_logical_map(cpu)  __cpu_logical_map[cpu]
enum ;
DECLARE_PER_CPU(int, cpu_state);
void smp_message_recv(unsigned int msg);
void smp_timer_broadcast(const struct cpumask *mask);
void local_timer_interrupt(void);
void local_timer_setup(unsigned int cpu);
void local_timer_stop(unsigned int cpu);
void arch_send_call_function_single_ipi(int cpu);
void arch_send_call_function_ipi_mask(const struct cpumask *mask);
void native_play_dead(void);
void native_cpu_die(unsigned int cpu);
int native_cpu_disable(unsigned int cpu);
void play_dead_common(void);
extern int __cpu_disable(void);
static inline void __cpu_die(unsigned int cpu)
static inline int hard_smp_processor_id(void)
#define hard_smp_processor_id()	(0)
