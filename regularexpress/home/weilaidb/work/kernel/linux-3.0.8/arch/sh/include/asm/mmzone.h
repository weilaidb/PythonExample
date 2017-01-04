#define __ASM_SH_MMZONE_H
extern struct pglist_data *node_data[];
#define NODE_DATA(nid)		(node_data[nid])
static inline int pfn_to_nid(unsigned long pfn)
static inline struct pglist_data *pfn_to_pgdat(unsigned long pfn)
void __init setup_bootmem_node(int nid, unsigned long start, unsigned long end);
static inline void
setup_bootmem_node(int nid, unsigned long start, unsigned long end)
void __init plat_mem_setup(void);
void __init __add_active_range(unsigned int nid, unsigned long start_pfn,
unsigned long end_pfn);
void __init allocate_pgdat(unsigned int nid);
