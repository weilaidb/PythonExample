static int numa_enabled = 1;
static char *cmdline __initdata;
static int numa_debug;
#define dbg(args...) if (numa_debug)
int numa_cpu_lookup_table[NR_CPUS];
cpumask_var_t node_to_cpumask_map[MAX_NUMNODES];
struct pglist_data *node_data[MAX_NUMNODES];
EXPORT_SYMBOL(numa_cpu_lookup_table);
EXPORT_SYMBOL(node_to_cpumask_map);
EXPORT_SYMBOL(node_data);
static int min_common_depth;
static int n_mem_addr_cells, n_mem_size_cells;
static int form1_affinity;
#define MAX_DISTANCE_REF_POINTS 4
static int distance_ref_points_depth;
static const unsigned int *distance_ref_points;
static int distance_lookup_table[MAX_NUMNODES][MAX_DISTANCE_REF_POINTS];
static void __init setup_node_to_cpumask_map(void)
static int __cpuinit fake_numa_create_new_node(unsigned long end_pfn,
unsigned int *nid)
static int __init get_active_region_work_fn(unsigned long start_pfn,
unsigned long end_pfn, void *datax)
static void __init get_node_active_region(unsigned long start_pfn,
struct node_active_region *node_ar)
static void map_cpu_to_node(int cpu, int node)
#if defined(CONFIG_HOTPLUG_CPU) || defined(CONFIG_PPC_SPLPAR)
static void unmap_cpu_from_node(unsigned long cpu)
static const int *of_get_associativity(struct device_node *dev)
static const u32 *of_get_usable_memory(struct device_node *memory)
int __node_distance(int a, int b)
static void initialize_distance_lookup_table(int nid,
const unsigned int *associativity)
static int associativity_to_nid(const unsigned int *associativity)
static int of_node_to_nid_single(struct device_node *device)
int of_node_to_nid(struct device_node *device)
EXPORT_SYMBOL_GPL(of_node_to_nid);
static int __init find_min_common_depth(void)
static void __init get_n_mem_cells(int *n_addr_cells, int *n_size_cells)
static unsigned long __devinit read_n_cells(int n, const unsigned int **buf)
struct of_drconf_cell ;
#define DRCONF_MEM_ASSIGNED	0x00000008
#define DRCONF_MEM_AI_INVALID	0x00000040
#define DRCONF_MEM_RESERVED	0x00000080
static void read_drconf_cell(struct of_drconf_cell *drmem, const u32 **cellp)
static int of_get_drconf_memory(struct device_node *memory, const u32 **dm)
static u64 of_get_lmb_size(struct device_node *memory)
struct assoc_arrays ;
static int of_get_assoc_arrays(struct device_node *memory,
struct assoc_arrays *aa)
static int of_drconf_to_nid_single(struct of_drconf_cell *drmem,
struct assoc_arrays *aa)
static int __cpuinit numa_setup_cpu(unsigned long lcpu)
static int __cpuinit cpu_numa_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static unsigned long __init numa_enforce_memory_limit(unsigned long start,
unsigned long size)
static inline int __init read_usm_ranges(const u32 **usm)
static void __init parse_drconf_memory(struct device_node *memory)
static int __init parse_numa_properties(void)
static void __init setup_nonnuma(void)
void __init dump_numa_cpu_topology(void)
static void __init dump_numa_memory_topology(void)
static void __init *careful_zallocation(int nid, unsigned long size,
unsigned long align,
unsigned long end_pfn)
static struct notifier_block __cpuinitdata ppc64_numa_nb = ;
static void mark_reserved_regions_for_nid(int nid)
void __init do_init_bootmem(void)
void __init paging_init(void)
static int __init early_numa(char *p)
early_param("numa", early_numa);
static int hot_add_drconf_scn_to_nid(struct device_node *memory,
unsigned long scn_addr)
int hot_add_node_scn_to_nid(unsigned long scn_addr)
int hot_add_scn_to_nid(unsigned long scn_addr)
static u64 hot_add_drconf_memory_max(void)
u64 memory_hotplug_max(void)
static u8 vphn_cpu_change_counts[NR_CPUS][MAX_DISTANCE_REF_POINTS];
static cpumask_t cpu_associativity_changes_mask;
static int vphn_enabled;
static void set_topology_timer(void);
static void setup_cpu_associativity_change_counters(void)
static int update_cpu_associativity_changes_mask(void)
#define VPHN_ASSOC_BUFSIZE (6*sizeof(u64)/sizeof(u32) + 1)
static int vphn_unpack_associativity(const long *packed, unsigned int *unpacked)
static long hcall_vphn(unsigned long cpu, unsigned int *associativity)
static long vphn_get_associativity(unsigned long cpu,
unsigned int *associativity)
int arch_update_cpu_topology(void)
static void topology_work_fn(struct work_struct *work)
static DECLARE_WORK(topology_work, topology_work_fn);
void topology_schedule_update(void)
static void topology_timer_fn(unsigned long ignored)
static struct timer_list topology_timer =
TIMER_INITIALIZER(topology_timer_fn, 0, 0);
static void set_topology_timer(void)
int start_topology_update(void)
__initcall(start_topology_update);
int stop_topology_update(void)
