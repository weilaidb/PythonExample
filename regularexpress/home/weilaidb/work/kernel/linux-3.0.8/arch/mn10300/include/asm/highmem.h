#define _ASM_HIGHMEM_H
#undef HIGHMEM_DEBUG
extern unsigned long highstart_pfn, highend_pfn;
extern pte_t *kmap_pte;
extern pgprot_t kmap_prot;
extern pte_t *pkmap_page_table;
extern void __init kmap_init(void);
#define PKMAP_BASE	0xfe000000UL
#define LAST_PKMAP	1024
#define LAST_PKMAP_MASK (LAST_PKMAP - 1)
#define PKMAP_NR(virt)  ((virt - PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)  (PKMAP_BASE + ((nr) << PAGE_SHIFT))
extern unsigned long kmap_high(struct page *page);
extern void kunmap_high(struct page *page);
static inline unsigned long kmap(struct page *page)
static inline void kunmap(struct page *page)
static inline unsigned long __kmap_atomic(struct page *page)
static inline void __kunmap_atomic(unsigned long vaddr)
