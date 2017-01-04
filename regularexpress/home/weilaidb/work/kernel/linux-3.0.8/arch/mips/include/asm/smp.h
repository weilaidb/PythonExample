#define __ASM_SMP_H
extern int smp_num_siblings;
extern cpumask_t cpu_sibling_map[];
#define raw_smp_processor_id() (current_thread_info()->cpu)
extern int __cpu_number_map[NR_CPUS];
#define cpu_number_map(cpu)  __cpu_number_map[cpu]
extern int __cpu_logical_map[NR_CPUS];
#define cpu_logical_map(cpu)  __cpu_logical_map[cpu]
#define NO_PROC_ID	(-1)
#define SMP_RESCHEDULE_YOURSELF	0x1
#define SMP_CALL_FUNCTION	0x2
#define SMP_ICACHE_FLUSH	0x4
extern volatile cpumask_t cpu_callin_map;
extern void asmlinkage smp_bootstrap(void);
static inline void smp_send_reschedule(int cpu)
static inline int __cpu_disable(void)
static inline void __cpu_die(unsigned int cpu)
extern void play_dead(void);
extern asmlinkage void smp_call_function_interrupt(void);
static inline void arch_send_call_function_single_ipi(int cpu)
static inline void arch_send_call_function_ipi_mask(const struct cpumask *mask)
