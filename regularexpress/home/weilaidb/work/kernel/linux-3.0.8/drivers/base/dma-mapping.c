struct dma_devres ;
static void dmam_coherent_release(struct device *dev, void *res)
static void dmam_noncoherent_release(struct device *dev, void *res)
static int dmam_match(struct device *dev, void *res, void *match_data)
void * dmam_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
EXPORT_SYMBOL(dmam_alloc_coherent);
void dmam_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
EXPORT_SYMBOL(dmam_free_coherent);
void *dmam_alloc_noncoherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
EXPORT_SYMBOL(dmam_alloc_noncoherent);
void dmam_free_noncoherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle)
EXPORT_SYMBOL(dmam_free_noncoherent);
static void dmam_coherent_decl_release(struct device *dev, void *res)
int dmam_declare_coherent_memory(struct device *dev, dma_addr_t bus_addr,
dma_addr_t device_addr, size_t size, int flags)
EXPORT_SYMBOL(dmam_declare_coherent_memory);
void dmam_release_declared_memory(struct device *dev)
EXPORT_SYMBOL(dmam_release_declared_memory);
