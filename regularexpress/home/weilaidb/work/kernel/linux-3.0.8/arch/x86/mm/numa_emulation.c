static int emu_nid_to_phys[MAX_NUMNODES] __cpuinitdata;
static char *emu_cmdline __initdata;
void __init numa_emu_cmdline(char *str)
static int __init emu_find_memblk_by_nid(int nid, const struct numa_meminfo *mi)
static int __init emu_setup_memblk(struct numa_meminfo *ei,
struct numa_meminfo *pi,
int nid, int phys_blk, u64 size)
static int __init split_nodes_interleave(struct numa_meminfo *ei,
struct numa_meminfo *pi,
u64 addr, u64 max_addr, int nr_nodes)
static u64 __init find_end_of_node(u64 start, u64 max_addr, u64 size)
static int __init split_nodes_size_interleave(struct numa_meminfo *ei,
struct numa_meminfo *pi,
u64 addr, u64 max_addr, u64 size)
void __init numa_emulation(struct numa_meminfo *numa_meminfo, int numa_dist_cnt)
void __cpuinit numa_add_cpu(int cpu)
void __cpuinit numa_remove_cpu(int cpu)
static void __cpuinit numa_set_cpumask(int cpu, bool enable)
void __cpuinit numa_add_cpu(int cpu)
void __cpuinit numa_remove_cpu(int cpu)
