#define _ASM_HIGHMEM_H
#define NR_TLB_LINES		64
#define HIGHMEM_DEBUG 1
#define HIGHMEM_DEBUG 0
extern unsigned long highstart_pfn, highend_pfn;
#define kmap_prot PAGE_KERNEL
#define kmap_pte ______kmap_pte_in_TLB
extern pte_t *pkmap_page_table;
#define flush_cache_kmaps()  do  while (0)
#define LAST_PKMAP	PTRS_PER_PTE
#define LAST_PKMAP_MASK	(LAST_PKMAP - 1)
#define PKMAP_NR(virt)	((virt - PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)	(PKMAP_BASE + ((nr) << PAGE_SHIFT))
extern void *kmap_high(struct page *page);
extern void kunmap_high(struct page *page);
extern void *kmap(struct page *page);
extern void kunmap(struct page *page);
extern struct page *kmap_atomic_to_page(void *ptr);
#define KMAP_ATOMIC_CACHE_DAMR		8
#define __kmap_atomic_primary(type, paddr, ampr)						\
()
#define __kmap_atomic_secondary(slot, paddr)							  \
()
static inline void *kmap_atomic_primary(struct page *page, enum km_type type)
#define __kunmap_atomic_primary(type, ampr)				\
do  while(0)
#define __kunmap_atomic_secondary(slot, vaddr)				\
do  while(0)
static inline void kunmap_atomic_primary(void *kvaddr, enum km_type type)
void *__kmap_atomic(struct page *page);
void __kunmap_atomic(void *kvaddr);
