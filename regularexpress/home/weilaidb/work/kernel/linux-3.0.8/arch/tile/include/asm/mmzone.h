#define _ASM_TILE_MMZONE_H
extern struct pglist_data node_data[];
#define NODE_DATA(nid)	(&node_data[nid])
extern void get_memcfg_numa(void);
extern int highbits_to_node[];
static inline int pfn_to_nid(unsigned long pfn)
#define kern_addr_valid(kaddr)	virt_addr_valid((void *)kaddr)
static inline int pfn_valid(int pfn)
extern unsigned long node_start_pfn[];
extern unsigned long node_end_pfn[];
extern unsigned long node_memmap_pfn[];
extern unsigned long node_percpu_pfn[];
extern unsigned long node_free_pfn[];
extern unsigned long node_lowmem_end_pfn[];
extern unsigned long pci_reserve_start_pfn;
extern unsigned long pci_reserve_end_pfn;
