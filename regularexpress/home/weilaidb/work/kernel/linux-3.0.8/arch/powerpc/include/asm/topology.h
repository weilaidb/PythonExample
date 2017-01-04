#define _ASM_POWERPC_TOPOLOGY_H
struct sys_device;
struct device_node;
#define RECLAIM_DISTANCE 10
#define RECLAIM_DISTANCE 10
static inline int cpu_to_node(int cpu)
#define parent_node(node)	(node)
#define cpumask_of_node(node) ((node) == -1 ?				\
cpu_all_mask :				\
node_to_cpumask_map[node])
struct pci_bus;
extern int pcibus_to_node(struct pci_bus *bus);
static inline int pcibus_to_node(struct pci_bus *bus)
#define cpumask_of_pcibus(bus)	(pcibus_to_node(bus) == -1 ?		\
cpu_all_mask :				\
cpumask_of_node(pcibus_to_node(bus)))
#define SD_NODE_INIT (struct sched_domain)
extern int __node_distance(int, int);
#define node_distance(a, b) __node_distance(a, b)
extern void __init dump_numa_cpu_topology(void);
extern int sysfs_add_device_to_node(struct sys_device *dev, int nid);
extern void sysfs_remove_device_from_node(struct sys_device *dev, int nid);
static inline void dump_numa_cpu_topology(void)
static inline int sysfs_add_device_to_node(struct sys_device *dev, int nid)
static inline void sysfs_remove_device_from_node(struct sys_device *dev,
int nid)
#if defined(CONFIG_NUMA) && defined(CONFIG_PPC_SPLPAR)
extern int start_topology_update(void);
extern int stop_topology_update(void);
static inline int start_topology_update(void)
static inline int stop_topology_update(void)
#define smt_capable()		(cpu_has_feature(CPU_FTR_SMT))
#define topology_thread_cpumask(cpu)	(per_cpu(cpu_sibling_map, cpu))
#define topology_core_cpumask(cpu)	(per_cpu(cpu_core_map, cpu))
#define topology_core_id(cpu)		(cpu_to_core_id(cpu))
