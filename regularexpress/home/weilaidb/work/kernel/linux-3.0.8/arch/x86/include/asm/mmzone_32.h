#define _ASM_X86_MMZONE_32_H
extern struct pglist_data *node_data[];
#define NODE_DATA(nid)	(node_data[nid])
extern void resume_map_numa_kva(pgd_t *pgd);
static inline void resume_map_numa_kva(pgd_t *pgd)
#define MAX_NR_PAGES 16777216
#define MAX_ELEMENTS 1024
#define PAGES_PER_ELEMENT (MAX_NR_PAGES/MAX_ELEMENTS)
extern s8 physnode_map[];
static inline int pfn_to_nid(unsigned long pfn)
static inline int pfn_valid(int pfn)
#define early_pfn_valid(pfn)	pfn_valid((pfn))
#define bootmem_arch_preferred_node(__bdata, size, align, goal, limit)	\
(NODE_DATA(0)->bdata)
