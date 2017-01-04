#define __ASM_ARM_SMP_H
# error "<asm/smp.h> included in non-SMP build"
#define raw_smp_processor_id() (current_thread_info()->cpu)
struct seq_file;
extern void show_ipi_list(struct seq_file *, int);
asmlinkage void do_IPI(int ipinr, struct pt_regs *regs);
extern void smp_init_cpus(void);
extern void set_smp_cross_call(void (*)(const struct cpumask *, unsigned int));
extern int boot_secondary(unsigned int cpu, struct task_struct *);
asmlinkage void secondary_start_kernel(void);
extern void platform_secondary_init(unsigned int cpu);
extern void platform_smp_prepare_cpus(unsigned int);
struct secondary_data ;
extern struct secondary_data secondary_data;
extern int __cpu_disable(void);
extern int platform_cpu_disable(unsigned int cpu);
extern void __cpu_die(unsigned int cpu);
extern void cpu_die(void);
extern void platform_cpu_die(unsigned int cpu);
extern int platform_cpu_kill(unsigned int cpu);
extern void platform_cpu_enable(unsigned int cpu);
extern void arch_send_call_function_single_ipi(int cpu);
extern void arch_send_call_function_ipi_mask(const struct cpumask *mask);
extern void show_local_irqs(struct seq_file *, int);
