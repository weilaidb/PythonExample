#define _ASM_X86_TOPOLOGY_H
# ifdef CONFIG_X86_HT
#  define ENABLE_TOPO_DEFINES
# endif
# ifdef CONFIG_SMP
#  define ENABLE_TOPO_DEFINES
# endif
DECLARE_EARLY_PER_CPU(int, x86_cpu_to_node_map);
extern int __cpu_to_node(int cpu);
#define cpu_to_node __cpu_to_node
extern int early_cpu_to_node(int cpu);
static inline int early_cpu_to_node(int cpu)
extern cpumask_var_t node_to_cpumask_map[MAX_NUMNODES];
extern const struct cpumask *cpumask_of_node(int node);
static inline const struct cpumask *cpumask_of_node(int node)
extern void setup_node_to_cpumask_map(void);
#define parent_node(node) (node)
#define pcibus_to_node(bus) __pcibus_to_node(bus)
# define SD_CACHE_NICE_TRIES	1
# define SD_IDLE_IDX		1
# define SD_CACHE_NICE_TRIES	2
# define SD_IDLE_IDX		2
#define SD_NODE_INIT (struct sched_domain)
extern int __node_distance(int, int);
#define node_distance(a, b) __node_distance(a, b)
static inline int numa_node_id(void)
#define numa_node_id numa_node_id
static inline int early_cpu_to_node(int cpu)
static inline void setup_node_to_cpumask_map(void)
extern const struct cpumask *cpu_coregroup_mask(int cpu);
#define topology_physical_package_id(cpu)	(cpu_data(cpu).phys_proc_id)
#define topology_core_id(cpu)			(cpu_data(cpu).cpu_core_id)
#define topology_core_cpumask(cpu)		(per_cpu(cpu_core_map, cpu))
#define topology_thread_cpumask(cpu)		(per_cpu(cpu_sibling_map, cpu))
#define arch_provides_topology_pointers		yes
static inline void arch_fix_phys_package_id(int num, u32 slot)
struct pci_bus;
void x86_pci_root_bus_res_quirks(struct pci_bus *b);
#define mc_capable()	((boot_cpu_data.x86_max_cores > 1) && \
(cpumask_weight(cpu_core_mask(0)) != nr_cpu_ids))
#define smt_capable()			(smp_num_siblings > 1)
extern int get_mp_bus_to_node(int busnum);
extern void set_mp_bus_to_node(int busnum, int node);
static inline int get_mp_bus_to_node(int busnum)
static inline void set_mp_bus_to_node(int busnum, int node)
