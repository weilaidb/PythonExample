#if defined(CONFIG_X86)
static void
drm_clflush_page(struct page *page)
static void drm_cache_flush_clflush(struct page *pages[],
unsigned long num_pages)
static void
drm_clflush_ipi_handler(void *null)
void
drm_clflush_pages(struct page *pages[], unsigned long num_pages)
EXPORT_SYMBOL(drm_clflush_pages);
