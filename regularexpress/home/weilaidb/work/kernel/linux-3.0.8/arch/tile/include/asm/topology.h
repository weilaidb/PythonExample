#define _ASM_TILE_TOPOLOGY_H
extern struct cpumask node_2_cpu_mask[];
extern char cpu_2_node[];
static inline int cpu_to_node(int cpu)
#define parent_node(node) (node)
static inline const struct cpumask *cpumask_of_node(int node)
#define pcibus_to_node(bus)		((void)(bus), -1)
#define SD_CPU_INIT (struct sched_domain)
#define SD_NODE_INIT (struct sched_domain)
#define node_has_online_mem(nid) 1
#define topology_physical_package_id(cpu)       ((void)(cpu), 0)
#define topology_core_id(cpu)                   (cpu)
#define topology_core_cpumask(cpu)              ((void)(cpu), cpu_online_mask)
#define topology_thread_cpumask(cpu)            cpumask_of(cpu)
#define arch_provides_topology_pointers         yes
