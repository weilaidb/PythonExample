static struct gen_pool *sram_pool;
void *sram_alloc(size_t len, dma_addr_t *dma)
EXPORT_SYMBOL(sram_alloc);
void sram_free(void *addr, size_t len)
EXPORT_SYMBOL(sram_free);
static int __init sram_init(void)
core_initcall(sram_init);
