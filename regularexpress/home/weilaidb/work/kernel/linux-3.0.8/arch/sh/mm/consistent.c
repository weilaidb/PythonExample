#define PREALLOC_DMA_DEBUG_ENTRIES	4096
struct dma_map_ops *dma_ops;
EXPORT_SYMBOL(dma_ops);
static int __init dma_init(void)
fs_initcall(dma_init);
void *dma_generic_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
void dma_generic_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction)
EXPORT_SYMBOL(dma_cache_sync);
static int __init memchunk_setup(char *str)
__setup("memchunk.", memchunk_setup);
static void __init memchunk_cmdline_override(char *name, unsigned long *sizep)
int __init platform_resource_setup_memory(struct platform_device *pdev,
char *name, unsigned long memsize)
