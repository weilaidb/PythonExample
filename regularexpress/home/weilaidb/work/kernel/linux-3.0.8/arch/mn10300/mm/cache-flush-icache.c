void flush_icache_page(struct vm_area_struct *vma, struct page *page)
EXPORT_SYMBOL(flush_icache_page);
static void flush_icache_page_range(unsigned long start, unsigned long end)
void flush_icache_range(unsigned long start, unsigned long end)
EXPORT_SYMBOL(flush_icache_range);
