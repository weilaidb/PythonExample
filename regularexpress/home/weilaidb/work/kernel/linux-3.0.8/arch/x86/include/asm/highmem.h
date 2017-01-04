#define _ASM_X86_HIGHMEM_H
extern unsigned long highstart_pfn, highend_pfn;
#define LAST_PKMAP_MASK (LAST_PKMAP-1)
#define PKMAP_NR(virt)  ((virt-PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)  (PKMAP_BASE + ((nr) << PAGE_SHIFT))
extern void *kmap_high(struct page *page);
extern void kunmap_high(struct page *page);
void *kmap(struct page *page);
void kunmap(struct page *page);
void *kmap_atomic_prot(struct page *page, pgprot_t prot);
void *__kmap_atomic(struct page *page);
void __kunmap_atomic(void *kvaddr);
void *kmap_atomic_pfn(unsigned long pfn);
void *kmap_atomic_prot_pfn(unsigned long pfn, pgprot_t prot);
struct page *kmap_atomic_to_page(void *ptr);
#define flush_cache_kmaps()	do  while (0)
extern void add_highpages_with_active_regions(int nid, unsigned long start_pfn,
unsigned long end_pfn);
