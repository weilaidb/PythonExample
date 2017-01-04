pg_data_t node_data[MAX_NUMNODES];
EXPORT_SYMBOL(node_data);
#undef DEBUG_DISCONTIG
#define DBGDCONT(args...) printk(args)
#define DBGDCONT(args...)
#define for_each_mem_cluster(memdesc, _cluster, i)		\
for ((_cluster) = (memdesc)->cluster, (i) = 0;		\
(i) < (memdesc)->numclusters; (i)++, (_cluster)++)
static void __init show_mem_layout(void)
static void __init
setup_memory_node(int nid, void *kernel_end)
void __init
setup_memory(void *kernel_end)
void __init paging_init(void)
void __init mem_init(void)
