#define _ASM_SPARC64_TOPOLOGY_H
static inline int cpu_to_node(int cpu)
#define parent_node(node)	(node)
#define cpumask_of_node(node) ((node) == -1 ?				\
cpu_all_mask :				\
&numa_cpumask_lookup_table[node])
struct pci_bus;
extern int pcibus_to_node(struct pci_bus *pbus);
static inline int pcibus_to_node(struct pci_bus *pbus)
#define cpumask_of_pcibus(bus)	\
(pcibus_to_node(bus) == -1 ? \
cpu_all_mask : \
cpumask_of_node(pcibus_to_node(bus)))
#define SD_NODE_INIT (struct sched_domain)
#define topology_physical_package_id(cpu)	(cpu_data(cpu).proc_id)
#define topology_core_id(cpu)			(cpu_data(cpu).core_id)
#define topology_core_cpumask(cpu)		(&cpu_core_map[cpu])
#define topology_thread_cpumask(cpu)		(&per_cpu(cpu_sibling_map, cpu))
#define mc_capable()				(sparc64_multi_core)
#define smt_capable()				(sparc64_multi_core)
extern cpumask_t cpu_core_map[NR_CPUS];
static inline const struct cpumask *cpu_coregroup_mask(int cpu)
