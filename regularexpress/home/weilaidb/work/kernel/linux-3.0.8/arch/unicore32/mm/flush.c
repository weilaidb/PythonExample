void flush_cache_mm(struct mm_struct *mm)
void flush_cache_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void flush_cache_page(struct vm_area_struct *vma, unsigned long user_addr,
unsigned long pfn)
static void flush_ptrace_access(struct vm_area_struct *vma, struct page *page,
unsigned long uaddr, void *kaddr, unsigned long len)
void copy_to_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long uaddr, void *dst, const void *src,
unsigned long len)
void __flush_dcache_page(struct address_space *mapping, struct page *page)
void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
