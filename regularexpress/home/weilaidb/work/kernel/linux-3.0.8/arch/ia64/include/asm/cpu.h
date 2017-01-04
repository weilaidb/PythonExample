#define _ASM_IA64_CPU_H_
struct ia64_cpu ;
DECLARE_PER_CPU(struct ia64_cpu, cpu_devices);
DECLARE_PER_CPU(int, cpu_state);
extern int arch_register_cpu(int num);
extern void arch_unregister_cpu(int);
