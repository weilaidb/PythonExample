#define _PARISC_MMZONE_H
#define MAX_PHYSMEM_RANGES 8
extern int npmem_ranges;
struct node_map_data ;
extern struct node_map_data node_data[];
#define NODE_DATA(nid)          (&node_data[nid].pg_data)
#define PFNNID_SHIFT (30 - PAGE_SHIFT)
#define PFNNID_MAP_MAX  512
extern unsigned char pfnnid_map[PFNNID_MAP_MAX];
#define pfn_is_io(pfn) ((pfn & (0xf0000000UL >> PAGE_SHIFT)) == (0xf0000000UL >> PAGE_SHIFT))
#define pfn_is_io(pfn) ((pfn & (0xf000000000000000UL >> PAGE_SHIFT)) == (0xf000000000000000UL >> PAGE_SHIFT))
static inline int pfn_to_nid(unsigned long pfn)
static inline int pfn_valid(int pfn)
#define MAX_PHYSMEM_RANGES 	1
