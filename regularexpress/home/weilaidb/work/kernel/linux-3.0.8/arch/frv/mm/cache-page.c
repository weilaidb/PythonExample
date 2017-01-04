void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
void flush_icache_user_range(struct vm_area_struct *vma, struct page *page,
unsigned long start, unsigned long len)
EXPORT_SYMBOL(flush_icache_user_range);
