struct pglist_data *node_data[MAX_NUMNODES] __read_mostly;
EXPORT_SYMBOL_GPL(node_data);
void __init setup_bootmem_node(int nid, unsigned long start, unsigned long end)
