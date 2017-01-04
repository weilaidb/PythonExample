#define __VIRT_CONVERT__
static inline unsigned long virt_to_phys(void *address)
static inline void *phys_to_virt(unsigned long address)
#define page_to_phys(page) \
__pa(PAGE_OFFSET + (((page) - pg_data_map[0].node_mem_map) << PAGE_SHIFT))
#define page_to_phys(page)	(page_to_pfn(page) << PAGE_SHIFT)
#define page_to_phys(page)	(((page) - mem_map) << PAGE_SHIFT)
#define virt_to_bus virt_to_phys
#define bus_to_virt phys_to_virt
