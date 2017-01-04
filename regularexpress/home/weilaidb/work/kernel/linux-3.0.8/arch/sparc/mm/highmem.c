void *__kmap_atomic(struct page *page)
EXPORT_SYMBOL(__kmap_atomic);
void __kunmap_atomic(void *kvaddr)
EXPORT_SYMBOL(__kunmap_atomic);
struct page *kmap_atomic_to_page(void *ptr)
