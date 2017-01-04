#define _SPARC64_CPUDATA_H
typedef struct  cpuinfo_sparc;
DECLARE_PER_CPU(cpuinfo_sparc, __cpu_data);
#define cpu_data(__cpu)		per_cpu(__cpu_data, (__cpu))
#define local_cpu_data()	__get_cpu_var(__cpu_data)
extern const struct seq_operations cpuinfo_op;
