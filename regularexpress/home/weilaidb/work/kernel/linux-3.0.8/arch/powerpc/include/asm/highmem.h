#define _ASM_HIGHMEM_H
extern pte_t *kmap_pte;
extern pgprot_t kmap_prot;
extern pte_t *pkmap_page_table;
#define PKMAP_ORDER	PTE_SHIFT
#define PKMAP_ORDER	9
#define LAST_PKMAP	(1 << PKMAP_ORDER)
#define PKMAP_BASE	(FIXADDR_START - PAGE_SIZE*(LAST_PKMAP + 1))
#define PKMAP_BASE	((FIXADDR_START - PAGE_SIZE*(LAST_PKMAP + 1)) & PMD_MASK)
#define LAST_PKMAP_MASK	(LAST_PKMAP-1)
#define PKMAP_NR(virt)  ((virt-PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)  (PKMAP_BASE + ((nr) << PAGE_SHIFT))
extern void *kmap_high(struct page *page);
extern void kunmap_high(struct page *page);
extern void *kmap_atomic_prot(struct page *page, pgprot_t prot);
extern void __kunmap_atomic(void *kvaddr);
static inline void *kmap(struct page *page)
static inline void kunmap(struct page *page)
static inline void *__kmap_atomic(struct page *page)
static inline struct page *kmap_atomic_to_page(void *ptr)
#define flush_cache_kmaps()	flush_cache_all()
