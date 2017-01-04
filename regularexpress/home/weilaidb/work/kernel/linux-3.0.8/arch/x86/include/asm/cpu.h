#define _ASM_X86_CPU_H
extern void prefill_possible_map(void);
static inline void prefill_possible_map(void)
#define cpu_physical_id(cpu)			boot_cpu_physical_apicid
#define safe_smp_processor_id()			0
#define stack_smp_processor_id()		0
struct x86_cpu ;
extern int arch_register_cpu(int num);
extern void arch_unregister_cpu(int);
DECLARE_PER_CPU(int, cpu_state);
int mwait_usable(const struct cpuinfo_x86 *);
