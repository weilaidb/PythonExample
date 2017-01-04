#define SLOT_PFNSHIFT           (SLOT_SHIFT - PAGE_SHIFT)
#define PFN_NASIDSHFT           (NASID_SHFT - PAGE_SHIFT)
struct node_data *__node_data[MAX_COMPACT_NODES];
EXPORT_SYMBOL(__node_data);
static int fine_mode;
static int is_fine_dirmode(void)
static hubreg_t get_region(cnodeid_t cnode)
static hubreg_t region_mask;
static void gen_region_mask(hubreg_t *region_mask)
#define	rou_rflag	rou_flags
static int router_distance;
static void router_recurse(klrou_t *router_a, klrou_t *router_b, int depth)
unsigned char __node_distances[MAX_COMPACT_NODES][MAX_COMPACT_NODES];
static int __init compute_node_distance(nasid_t nasid_a, nasid_t nasid_b)
static void __init init_topology_matrix(void)
static void __init dump_topology(void)
static pfn_t __init slot_getbasepfn(cnodeid_t cnode, int slot)
static pfn_t __init slot_psize_compute(cnodeid_t node, int slot)
static void __init mlreset(void)
static void __init szmem(void)
static void __init node_mem_init(cnodeid_t node)
static struct node_data null_node = ;
void __init prom_meminit(void)
void __init prom_free_prom_memory(void)
extern unsigned long setup_zero_pages(void);
void __init paging_init(void)
void __init mem_init(void)
