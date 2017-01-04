# define UNCACHED_SHADOW_MASK (cpuinfo.dcache_high - cpuinfo.dcache_base + 1)
void *consistent_alloc(gfp_t gfp, size_t size, dma_addr_t *dma_handle)
EXPORT_SYMBOL(consistent_alloc);
void consistent_free(size_t size, void *vaddr)
EXPORT_SYMBOL(consistent_free);
void consistent_sync(void *vaddr, size_t size, int direction)
EXPORT_SYMBOL(consistent_sync);
void consistent_sync_page(struct page *page, unsigned long offset,
size_t size, int direction)
EXPORT_SYMBOL(consistent_sync_page);
