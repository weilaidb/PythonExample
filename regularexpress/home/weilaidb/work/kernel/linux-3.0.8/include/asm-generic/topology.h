#define _ASM_GENERIC_TOPOLOGY_H
#define cpu_to_node(cpu)	((void)(cpu),0)
#define set_numa_node(node)
#define set_cpu_numa_node(cpu, node)
#define cpu_to_mem(cpu)		((void)(cpu),0)
#define parent_node(node)	((void)(node),0)
#define cpumask_of_node(node)	((void)node, cpu_online_mask)
#define pcibus_to_node(bus)	((void)(bus), -1)
#define cpumask_of_pcibus(bus)	(pcibus_to_node(bus) == -1 ?		\
cpu_all_mask :				\
cpumask_of_node(pcibus_to_node(bus)))
#if !defined(CONFIG_NUMA) || !defined(CONFIG_HAVE_MEMORYLESS_NODES)
#define set_numa_mem(node)
#define set_cpu_numa_mem(cpu, node)
