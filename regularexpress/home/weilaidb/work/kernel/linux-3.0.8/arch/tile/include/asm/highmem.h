#define _ASM_TILE_HIGHMEM_H
extern unsigned long highstart_pfn, highend_pfn;
extern pte_t *pkmap_page_table;
#define LAST_PKMAP_MASK (LAST_PKMAP-1)
#define PKMAP_NR(virt)  ((virt-PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)  (PKMAP_BASE + ((nr) << PAGE_SHIFT))
void *kmap_high(struct page *page);
void kunmap_high(struct page *page);
void *kmap(struct page *page);
void kunmap(struct page *page);
void *kmap_fix_kpte(struct page *page, int finished);
#define kmap_prot page_to_kpgprot(page)
void *__kmap_atomic(struct page *page);
void __kunmap_atomic(void *kvaddr);
void *kmap_atomic_pfn(unsigned long pfn);
void *kmap_atomic_prot_pfn(unsigned long pfn, pgprot_t prot);
struct page *kmap_atomic_to_page(void *ptr);
void *kmap_atomic_prot(struct page *page, pgprot_t prot);
void kmap_atomic_fix_kpte(struct page *page, int finished);
#define flush_cache_kmaps()	do  while (0)
