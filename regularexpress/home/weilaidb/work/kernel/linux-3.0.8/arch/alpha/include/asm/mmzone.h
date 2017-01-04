#define _ASM_MMZONE_H_
struct bootmem_data_t;
extern pg_data_t node_data[];
#define alpha_pa_to_nid(pa)		\
(alpha_mv.pa_to_nid 		\
? alpha_mv.pa_to_nid(pa)	\
: (0))
#define node_mem_start(nid)		\
(alpha_mv.node_mem_start 	\
? alpha_mv.node_mem_start(nid) \
: (0UL))
#define node_mem_size(nid)		\
(alpha_mv.node_mem_size 	\
? alpha_mv.node_mem_size(nid) 	\
: ((nid) ? (0UL) : (~0UL)))
#define pa_to_nid(pa)		alpha_pa_to_nid(pa)
#define NODE_DATA(nid)		(&node_data[(nid)])
#define node_localnr(pfn, nid)	((pfn) - NODE_DATA(nid)->node_start_pfn)
#if 1
#define PLAT_NODE_DATA_LOCALNR(p, n)	\
(((p) >> PAGE_SHIFT) - PLAT_NODE_DATA(n)->gendata.node_start_pfn)
static inline unsigned long
PLAT_NODE_DATA_LOCALNR(unsigned long p, int n)
#define kvaddr_to_nid(kaddr)	pa_to_nid(__pa(kaddr))
#define LOCAL_BASE_ADDR(kaddr)						  \
((unsigned long)__va(NODE_DATA(kvaddr_to_nid(kaddr))->node_start_pfn  \
<< PAGE_SHIFT))
#define kern_addr_valid(kaddr)	(0)
#define virt_to_page(kaddr)	pfn_to_page(__pa(kaddr) >> PAGE_SHIFT)
#define VALID_PAGE(page)	(((page) - mem_map) < max_mapnr)
#define pmd_page(pmd)		(pfn_to_page(pmd_val(pmd) >> 32))
#define pgd_page(pgd)		(pfn_to_page(pgd_val(pgd) >> 32))
#define pte_pfn(pte)		(pte_val(pte) >> 32)
#define mk_pte(page, pgprot)						     \
()
#define pte_page(x)							\
()
#define page_to_pa(page)						\
(page_to_pfn(page) << PAGE_SHIFT)
#define pfn_to_nid(pfn)		pa_to_nid(((u64)(pfn) << PAGE_SHIFT))
#define pfn_valid(pfn)							\
(((pfn) - node_start_pfn(pfn_to_nid(pfn))) <			\
node_spanned_pages(pfn_to_nid(pfn)))					\
#define virt_addr_valid(kaddr)	pfn_valid((__pa(kaddr) >> PAGE_SHIFT))
