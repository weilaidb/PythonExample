#define _ASM_MACH_TOPOLOGY_H	1
struct cpuinfo_ip27 ;
extern struct cpuinfo_ip27 sn_cpu_info[NR_CPUS];
#define cpu_to_node(cpu)	(sn_cpu_info[(cpu)].p_nodeid)
#define parent_node(node)	(node)
#define cpumask_of_node(node)	((node) == -1 ?				\
cpu_all_mask :				\
&hub_data(node)->h_cpus)
struct pci_bus;
extern int pcibus_to_node(struct pci_bus *);
#define cpumask_of_pcibus(bus)	(cpu_online_mask)
extern unsigned char __node_distances[MAX_COMPACT_NODES][MAX_COMPACT_NODES];
#define node_distance(from, to)	(__node_distances[(from)][(to)])
#define SD_NODE_INIT (struct sched_domain)
