static pte_t *kmap_pte;
unsigned long highstart_pfn, highend_pfn;
void *kmap(struct page *page)
EXPORT_SYMBOL(kmap);
void kunmap(struct page *page)
EXPORT_SYMBOL(kunmap);
void *__kmap_atomic(struct page *page)
EXPORT_SYMBOL(__kmap_atomic);
void __kunmap_atomic(void *kvaddr)
EXPORT_SYMBOL(__kunmap_atomic);
void *kmap_atomic_pfn(unsigned long pfn)
struct page *kmap_atomic_to_page(void *ptr)
void __init kmap_init(void)
