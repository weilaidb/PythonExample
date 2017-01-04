#define _XTENSA_SMP_H
extern struct xtensa_cpuinfo boot_cpu_data;
#define cpu_data (&boot_cpu_data)
#define current_cpu_data boot_cpu_data
struct xtensa_cpuinfo ;
#define cpu_logical_map(cpu)	(cpu)
