enum ;
enum ;
struct cpuinfo_node ;
struct cpuinfo_level ;
struct cpuinfo_tree ;
static struct cpuinfo_tree *cpuinfo_tree;
static u16 cpu_distribution_map[NR_CPUS];
static DEFINE_SPINLOCK(cpu_map_lock);
static const int niagara_iterate_method[] = ;
static const int generic_iterate_method[] = ;
static int cpuinfo_id(int cpu, int level)
static int enumerate_cpuinfo_nodes(struct cpuinfo_level *tree_level)
static struct cpuinfo_tree *build_cpuinfo_tree(void)
static void increment_rover(struct cpuinfo_tree *t, int node_index,
int root_index, const int *rover_inc_table)
static int iterate_cpu(struct cpuinfo_tree *t, unsigned int root_index)
static void _cpu_map_rebuild(void)
static int simple_map_to_cpu(unsigned int index)
static int _map_to_cpu(unsigned int index)
int map_to_cpu(unsigned int index)
EXPORT_SYMBOL(map_to_cpu);
void cpu_map_rebuild(void)
