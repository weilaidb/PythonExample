extern char _end[];
struct pglist_data *node_data[MAX_NUMNODES];
EXPORT_SYMBOL(node_data);
pg_data_t m32r_node_data[MAX_NUMNODES];
typedef struct  mem_prof_t;
static mem_prof_t mem_prof[MAX_NUMNODES];
extern unsigned long memory_start;
extern unsigned long memory_end;
static void __init mem_prof_init(void)
unsigned long __init setup_memory(void)
#define START_PFN(nid)		(NODE_DATA(nid)->bdata->node_min_pfn)
#define MAX_LOW_PFN(nid)	(NODE_DATA(nid)->bdata->node_low_pfn)
unsigned long __init zone_sizes_init(void)
