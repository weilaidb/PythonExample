#define _ASM_HIGHMEM_H
extern unsigned long highstart_pfn, highend_pfn;
extern pte_t *kmap_pte;
extern pgprot_t kmap_prot;
extern pte_t *pkmap_page_table;
extern void kmap_init(void) __init;
#define LAST_PKMAP 1024
#define PKMAP_SIZE (LAST_PKMAP << PAGE_SHIFT)
#define PKMAP_BASE PMD_ALIGN(SRMMU_NOCACHE_VADDR + (SRMMU_MAX_NOCACHE_PAGES << PAGE_SHIFT))
#define LAST_PKMAP_MASK (LAST_PKMAP - 1)
#define PKMAP_NR(virt)  ((virt - PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)  (PKMAP_BASE + ((nr) << PAGE_SHIFT))
#define PKMAP_END (PKMAP_ADDR(LAST_PKMAP))
extern void *kmap_high(struct page *page);
extern void kunmap_high(struct page *page);
static inline void *kmap(struct page *page)
static inline void kunmap(struct page *page)
extern void *__kmap_atomic(struct page *page);
extern void __kunmap_atomic(void *kvaddr);
extern struct page *kmap_atomic_to_page(void *vaddr);
#define flush_cache_kmaps()	flush_cache_all()
