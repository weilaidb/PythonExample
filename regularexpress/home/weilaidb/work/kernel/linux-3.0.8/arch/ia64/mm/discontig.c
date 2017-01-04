struct early_node_data ;
static struct early_node_data mem_data[MAX_NUMNODES] __initdata;
static nodemask_t memory_less_mask __initdata;
pg_data_t *pgdat_list[MAX_NUMNODES];
#define MAX_NODE_ALIGN_OFFSET	(32 * 1024 * 1024)
#define NODEDATA_ALIGN(addr, node)						\
((((addr) + 1024*1024-1) & ~(1024*1024-1)) + 				\
(((node)*PERCPU_PAGE_SIZE) & (MAX_NODE_ALIGN_OFFSET - 1)))
static int __init build_node_maps(unsigned long start, unsigned long len,
int node)
static int __meminit early_nr_cpus_node(int node)
static unsigned long __meminit compute_pernodesize(int node)
static void *per_cpu_node_setup(void *cpu_data, int node)
void __init setup_per_cpu_areas(void)
static void __init fill_pernode(int node, unsigned long pernode,
unsigned long pernodesize)
static int __init find_pernode_space(unsigned long start, unsigned long len,
int node)
static int __init free_node_bootmem(unsigned long start, unsigned long len,
int node)
static void __init reserve_pernode_space(void)
static void __meminit scatter_node_data(void)
static void __init initialize_pernode_data(void)
static void __init *memory_less_node_alloc(int nid, unsigned long pernodesize)
static void __init memory_less_nodes(void)
void __init find_memory(void)
void __cpuinit *per_cpu_init(void)
void show_mem(unsigned int filter)
void call_pernode_memory(unsigned long start, unsigned long len, void *arg)
static __init int count_node_pages(unsigned long start, unsigned long len, int node)
void __init paging_init(void)
pg_data_t *arch_alloc_nodedata(int nid)
void arch_free_nodedata(pg_data_t *pgdat)
void arch_refresh_nodedata(int update_node, pg_data_t *update_pgdat)
int __meminit vmemmap_populate(struct page *start_page,
unsigned long size, int node)
