#define _LINUX_TOPOLOGY_H
#define node_has_online_mem(nid) (1)
#define nr_cpus_node(node) cpumask_weight(cpumask_of_node(node))
#define for_each_node_with_cpus(node)			\
for_each_online_node(node)			\
if (nr_cpus_node(node))
int arch_update_cpu_topology(void);
#define LOCAL_DISTANCE		10
#define REMOTE_DISTANCE		20
#define node_distance(from,to)	((from) == (to) ? LOCAL_DISTANCE : REMOTE_DISTANCE)
#define RECLAIM_DISTANCE 30
#define PENALTY_FOR_NODE_WITH_CPUS	(1)
#define ARCH_HAS_SCHED_WAKE_IDLE
#define SD_SIBLING_INIT (struct sched_domain)
#define SD_MC_INIT (struct sched_domain)
#define SD_CPU_INIT (struct sched_domain)
#define SD_ALLNODES_INIT (struct sched_domain)
#error Please define an appropriate SD_BOOK_INIT in include/asm/topology.h!!!
#error Please define an appropriate SD_NODE_INIT in include/asm/topology.h!!!
DECLARE_PER_CPU(int, numa_node);
static inline int numa_node_id(void)
static inline int cpu_to_node(int cpu)
static inline void set_numa_node(int node)
static inline void set_cpu_numa_node(int cpu, int node)
static inline int numa_node_id(void)
DECLARE_PER_CPU(int, _numa_mem_);
static inline void set_numa_mem(int node)
static inline int numa_mem_id(void)
static inline int cpu_to_mem(int cpu)
static inline void set_cpu_numa_mem(int cpu, int node)
static inline int numa_mem_id(void)
static inline int cpu_to_mem(int cpu)
#define topology_physical_package_id(cpu)	((void)(cpu), -1)
#define topology_core_id(cpu)			((void)(cpu), 0)
#define topology_thread_cpumask(cpu)		cpumask_of(cpu)
#define topology_core_cpumask(cpu)		cpumask_of(cpu)
