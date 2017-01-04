#define _ASM_HIGHMEM_H
#define PKMAP_BASE		(PAGE_OFFSET - PMD_SIZE)
#define LAST_PKMAP		PTRS_PER_PTE
#define LAST_PKMAP_MASK		(LAST_PKMAP - 1)
#define PKMAP_NR(virt)		(((virt) - PKMAP_BASE) >> PAGE_SHIFT)
#define PKMAP_ADDR(nr)		(PKMAP_BASE + ((nr) << PAGE_SHIFT))
#define kmap_prot		PAGE_KERNEL
#define flush_cache_kmaps() \
do  while (0)
extern pte_t *pkmap_page_table;
extern void *kmap_high(struct page *page);
extern void kunmap_high(struct page *page);
#define ARCH_NEEDS_KMAP_HIGH_GET
#if defined(CONFIG_SMP) && defined(CONFIG_CPU_TLB_V6)
#undef ARCH_NEEDS_KMAP_HIGH_GET
#if defined(CONFIG_HIGHMEM) && defined(CONFIG_CPU_CACHE_VIVT)
#error "The sum of features in your kernel config cannot be supported together"
extern void *kmap_high_get(struct page *page);
static inline void *kmap_high_get(struct page *page)
extern void *kmap(struct page *page);
extern void kunmap(struct page *page);
extern void *__kmap_atomic(struct page *page);
extern void __kunmap_atomic(void *kvaddr);
extern void *kmap_atomic_pfn(unsigned long pfn);
extern struct page *kmap_atomic_to_page(const void *ptr);
