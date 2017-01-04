int __initdata numa_off;
nodemask_t numa_nodes_parsed __initdata;
struct pglist_data *node_data[MAX_NUMNODES] __read_mostly;
EXPORT_SYMBOL(node_data);
static struct numa_meminfo numa_meminfo
__initdata
;
static int numa_distance_cnt;
static u8 *numa_distance;
static __init int numa_setup(char *opt)
early_param("numa", numa_setup);
s16 __apicid_to_node[MAX_LOCAL_APIC] __cpuinitdata = ;
int __cpuinit numa_cpu_node(int cpu)
cpumask_var_t node_to_cpumask_map[MAX_NUMNODES];
EXPORT_SYMBOL(node_to_cpumask_map);
DEFINE_EARLY_PER_CPU(int, x86_cpu_to_node_map, NUMA_NO_NODE);
EXPORT_EARLY_PER_CPU_SYMBOL(x86_cpu_to_node_map);
void __cpuinit numa_set_node(int cpu, int node)
void __cpuinit numa_clear_node(int cpu)
void __init setup_node_to_cpumask_map(void)
static int __init numa_add_memblk_to(int nid, u64 start, u64 end,
struct numa_meminfo *mi)
void __init numa_remove_memblk_from(int idx, struct numa_meminfo *mi)
int __init numa_add_memblk(int nid, u64 start, u64 end)
static void __init setup_node_data(int nid, u64 start, u64 end)
int __init numa_cleanup_meminfo(struct numa_meminfo *mi)
static void __init numa_nodemask_from_meminfo(nodemask_t *nodemask,
const struct numa_meminfo *mi)
void __init numa_reset_distance(void)
static int __init numa_alloc_distance(void)
void __init numa_set_distance(int from, int to, int distance)
int __node_distance(int from, int to)
EXPORT_SYMBOL(__node_distance);
static bool __init numa_meminfo_cover_memory(const struct numa_meminfo *mi)
static int __init numa_register_memblks(struct numa_meminfo *mi)
static void __init numa_init_array(void)
static int __init numa_init(int (*init_func)(void))
static int __init dummy_numa_init(void)
void __init x86_numa_init(void)
static __init int find_near_online_node(int node)
void __init init_cpu_to_node(void)
# ifndef CONFIG_NUMA_EMU
void __cpuinit numa_add_cpu(int cpu)
void __cpuinit numa_remove_cpu(int cpu)
# endif
int __cpu_to_node(int cpu)
EXPORT_SYMBOL(__cpu_to_node);
int early_cpu_to_node(int cpu)
void debug_cpumask_set_cpu(int cpu, int node, bool enable)
# ifndef CONFIG_NUMA_EMU
static void __cpuinit numa_set_cpumask(int cpu, bool enable)
void __cpuinit numa_add_cpu(int cpu)
void __cpuinit numa_remove_cpu(int cpu)
# endif
const struct cpumask *cpumask_of_node(int node)
EXPORT_SYMBOL(cpumask_of_node);
int memory_add_physaddr_to_nid(u64 start)
EXPORT_SYMBOL_GPL(memory_add_physaddr_to_nid);
