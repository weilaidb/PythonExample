void *kmap(struct page *page)
EXPORT_SYMBOL(kmap);
void kunmap(struct page *page)
EXPORT_SYMBOL(kunmap);
void *kmap_atomic_prot(struct page *page, pgprot_t prot)
EXPORT_SYMBOL(kmap_atomic_prot);
void *__kmap_atomic(struct page *page)
EXPORT_SYMBOL(__kmap_atomic);
void *kmap_atomic_pfn(unsigned long pfn)
EXPORT_SYMBOL_GPL(kmap_atomic_pfn);
void __kunmap_atomic(void *kvaddr)
EXPORT_SYMBOL(__kunmap_atomic);
struct page *kmap_atomic_to_page(void *ptr)
EXPORT_SYMBOL(kmap_atomic_to_page);
void __init set_highmem_pages_init(void)
