#define _ASM_HIGHMEM_H
#define HIGHMEM_DEBUG 1
extern unsigned long highstart_pfn, highend_pfn;
extern pte_t *pkmap_page_table;
#define LAST_PKMAP 1024
#define LAST_PKMAP_MASK (LAST_PKMAP-1)
#define PKMAP_NR(virt)  ((virt-PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)  (PKMAP_BASE + ((nr) << PAGE_SHIFT))
extern void * kmap_high(struct page *page);
extern void kunmap_high(struct page *page);
extern void *kmap(struct page *page);
extern void kunmap(struct page *page);
extern void *__kmap_atomic(struct page *page);
extern void __kunmap_atomic(void *kvaddr);
extern void *kmap_atomic_pfn(unsigned long pfn);
extern struct page *kmap_atomic_to_page(void *ptr);
#define flush_cache_kmaps()	flush_cache_all()
extern void kmap_init(void);
#define kmap_prot PAGE_KERNEL
