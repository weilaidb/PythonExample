u16 cpu_to_node_map[NR_CPUS] __cacheline_aligned;
EXPORT_SYMBOL(cpu_to_node_map);
cpumask_t node_to_cpu_mask[MAX_NUMNODES] __cacheline_aligned;
EXPORT_SYMBOL(node_to_cpu_mask);
void __cpuinit map_cpu_to_node(int cpu, int nid)
void __cpuinit unmap_cpu_from_node(int cpu, int nid)
void __init build_cpu_to_node_map(void)
