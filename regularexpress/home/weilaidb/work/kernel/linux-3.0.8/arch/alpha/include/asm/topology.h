#define _ASM_ALPHA_TOPOLOGY_H
static inline int cpu_to_node(int cpu)
extern struct cpumask node_to_cpumask_map[];
static const struct cpumask *cpumask_of_node(int node)
#define cpumask_of_pcibus(bus)	(cpu_online_mask)
# include <asm-generic/topology.h>
