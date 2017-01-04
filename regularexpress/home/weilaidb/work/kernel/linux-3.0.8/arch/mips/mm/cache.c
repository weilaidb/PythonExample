void (*flush_cache_all)(void);
void (*__flush_cache_all)(void);
void (*flush_cache_mm)(struct mm_struct *mm);
void (*flush_cache_range)(struct vm_area_struct *vma, unsigned long start,
unsigned long end);
void (*flush_cache_page)(struct vm_area_struct *vma, unsigned long page,
unsigned long pfn);
void (*flush_icache_range)(unsigned long start, unsigned long end);
void (*local_flush_icache_range)(unsigned long start, unsigned long end);
void (*__flush_cache_vmap)(void);
void (*__flush_cache_vunmap)(void);
void (*flush_cache_sigtramp)(unsigned long addr);
void (*local_flush_data_cache_page)(void * addr);
void (*flush_data_cache_page)(unsigned long addr);
void (*flush_icache_all)(void);
EXPORT_SYMBOL_GPL(local_flush_data_cache_page);
EXPORT_SYMBOL(flush_data_cache_page);
void (*_dma_cache_wback_inv)(unsigned long start, unsigned long size);
void (*_dma_cache_wback)(unsigned long start, unsigned long size);
void (*_dma_cache_inv)(unsigned long start, unsigned long size);
EXPORT_SYMBOL(_dma_cache_wback_inv);
SYSCALL_DEFINE3(cacheflush, unsigned long, addr, unsigned long, bytes,
unsigned int, cache)
void __flush_dcache_page(struct page *page)
EXPORT_SYMBOL(__flush_dcache_page);
void __flush_anon_page(struct page *page, unsigned long vmaddr)
EXPORT_SYMBOL(__flush_anon_page);
void __update_cache(struct vm_area_struct *vma, unsigned long address,
pte_t pte)
unsigned long _page_cachable_default;
EXPORT_SYMBOL(_page_cachable_default);
static inline void setup_protection_map(void)
void __cpuinit cpu_cache_init(void)
int __weak __uncached_access(struct file *file, unsigned long addr)
