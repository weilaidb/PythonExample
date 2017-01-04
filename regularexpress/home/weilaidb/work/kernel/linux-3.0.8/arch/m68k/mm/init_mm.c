pg_data_t pg_data_map[MAX_NUMNODES];
EXPORT_SYMBOL(pg_data_map);
int m68k_virt_to_node_shift;
pg_data_t *pg_data_table[65];
EXPORT_SYMBOL(pg_data_table);
void __init m68k_setup_node(int node)
void *empty_zero_page;
EXPORT_SYMBOL(empty_zero_page);
extern void init_pointer_table(unsigned long ptable);
extern pmd_t *zero_pgtable;
void __init mem_init(void)
void free_initrd_mem(unsigned long start, unsigned long end)
