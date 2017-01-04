void (*local_flush_cache_all)(void *args) = cache_noop;
void (*local_flush_cache_mm)(void *args) = cache_noop;
void (*local_flush_cache_dup_mm)(void *args) = cache_noop;
void (*local_flush_cache_page)(void *args) = cache_noop;
void (*local_flush_cache_range)(void *args) = cache_noop;
void (*local_flush_dcache_page)(void *args) = cache_noop;
void (*local_flush_icache_range)(void *args) = cache_noop;
void (*local_flush_icache_page)(void *args) = cache_noop;
void (*local_flush_cache_sigtramp)(void *args) = cache_noop;
void (*__flush_wback_region)(void *start, int size);
EXPORT_SYMBOL(__flush_wback_region);
void (*__flush_purge_region)(void *start, int size);
EXPORT_SYMBOL(__flush_purge_region);
void (*__flush_invalidate_region)(void *start, int size);
EXPORT_SYMBOL(__flush_invalidate_region);
static inline void noop__flush_region(void *start, int size)
static inline void cacheop_on_each_cpu(void (*func) (void *info), void *info,
int wait)
void copy_to_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long vaddr, void *dst, const void *src,
unsigned long len)
void copy_from_user_page(struct vm_area_struct *vma, struct page *page,
unsigned long vaddr, void *dst, const void *src,
unsigned long len)
void copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
EXPORT_SYMBOL(copy_user_highpage);
void clear_user_highpage(struct page *page, unsigned long vaddr)
EXPORT_SYMBOL(clear_user_highpage);
void __update_cache(struct vm_area_struct *vma,
unsigned long address, pte_t pte)
void __flush_anon_page(struct page *page, unsigned long vmaddr)
void flush_cache_all(void)
EXPORT_SYMBOL(flush_cache_all);
void flush_cache_mm(struct mm_struct *mm)
void flush_cache_dup_mm(struct mm_struct *mm)
void flush_cache_page(struct vm_area_struct *vma, unsigned long addr,
unsigned long pfn)
void flush_cache_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
EXPORT_SYMBOL(flush_cache_range);
void flush_dcache_page(struct page *page)
EXPORT_SYMBOL(flush_dcache_page);
void flush_icache_range(unsigned long start, unsigned long end)
void flush_icache_page(struct vm_area_struct *vma, struct page *page)
void flush_cache_sigtramp(unsigned long address)
static void compute_alias(struct cache_info *c)
static void __init emit_cache_params(void)
void __init cpu_cache_init(void)
