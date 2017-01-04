static int map_page(unsigned long va, unsigned long pa, pgprot_t prot)
void *consistent_alloc(gfp_t gfp, size_t size, dma_addr_t *dma_handle)
void consistent_free(void *vaddr)
void consistent_sync(void *vaddr, size_t size, int direction)
void consistent_sync_page(struct page *page, unsigned long offset,
size_t size, int direction)
