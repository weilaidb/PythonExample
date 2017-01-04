static DEFINE_PER_CPU(struct cpu, cpu_devices);
cpumask_t cpu_core_map[NR_CPUS];
EXPORT_SYMBOL(cpu_core_map);
static cpumask_t cpu_coregroup_map(unsigned int cpu)
const struct cpumask *cpu_coregroup_mask(unsigned int cpu)
int arch_update_cpu_topology(void)
static int __init topology_init(void)
subsys_initcall(topology_init);
