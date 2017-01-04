#define __ASM_MEMORY_MODEL_H
#if defined(CONFIG_FLATMEM)
#define ARCH_PFN_OFFSET		(0UL)
#elif defined(CONFIG_DISCONTIGMEM)
#define arch_pfn_to_nid(pfn)	pfn_to_nid(pfn)
#define arch_local_page_offset(pfn, nid)	\
((pfn) - NODE_DATA(nid)->node_start_pfn)
#if defined(CONFIG_FLATMEM)
#define __pfn_to_page(pfn)	(mem_map + ((pfn) - ARCH_PFN_OFFSET))
#define __page_to_pfn(page)	((unsigned long)((page) - mem_map) + \
ARCH_PFN_OFFSET)
#elif defined(CONFIG_DISCONTIGMEM)
#define __pfn_to_page(pfn)			\
()
#define __page_to_pfn(pg)						\
()
#elif defined(CONFIG_SPARSEMEM_VMEMMAP)
#define __pfn_to_page(pfn)	(vmemmap + (pfn))
#define __page_to_pfn(page)	(unsigned long)((page) - vmemmap)
#elif defined(CONFIG_SPARSEMEM)
#define __page_to_pfn(pg)					\
()
#define __pfn_to_page(pfn)				\
()
#define page_to_pfn __page_to_pfn
#define pfn_to_page __pfn_to_page
