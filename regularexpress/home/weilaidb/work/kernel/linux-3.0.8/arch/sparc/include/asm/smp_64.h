#define _SPARC64_SMP_H
DECLARE_PER_CPU(cpumask_t, cpu_sibling_map);
extern cpumask_t cpu_core_map[NR_CPUS];
extern int sparc64_multi_core;
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
extern int hard_smp_processor_id(void);
#define raw_smp_processor_id() (current_thread_info()->cpu)
extern void smp_fill_in_sib_core_maps(void);
extern void cpu_play_dead(void);
extern void smp_fetch_global_regs(void);
struct seq_file;
void smp_bogo(struct seq_file *);
void smp_info(struct seq_file *);
extern int __cpu_disable(void);
extern void __cpu_die(unsigned int cpu);
#define hard_smp_processor_id()		0
#define smp_fill_in_sib_core_maps() do  while (0)
#define smp_fetch_global_regs() do  while (0)
