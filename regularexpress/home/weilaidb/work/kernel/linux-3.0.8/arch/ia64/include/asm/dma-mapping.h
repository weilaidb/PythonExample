#define _ASM_IA64_DMA_MAPPING_H
#define ARCH_HAS_DMA_GET_REQUIRED_MASK
#define DMA_ERROR_CODE 0
extern struct dma_map_ops *dma_ops;
extern struct ia64_machine_vector ia64_mv;
extern void set_iommu_machvec(void);
extern void machvec_dma_sync_single(struct device *, dma_addr_t, size_t,
enum dma_data_direction);
extern void machvec_dma_sync_sg(struct device *, struct scatterlist *, int,
enum dma_data_direction);
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *daddr, gfp_t gfp)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *caddr, dma_addr_t daddr)
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
#define get_dma_ops(dev) platform_dma_get_ops(dev)
static inline int dma_mapping_error(struct device *dev, dma_addr_t daddr)
static inline int dma_supported(struct device *dev, u64 mask)
static inline int
dma_set_mask (struct device *dev, u64 mask)
static inline bool dma_capable(struct device *dev, dma_addr_t addr, size_t size)
static inline dma_addr_t phys_to_dma(struct device *dev, phys_addr_t paddr)
static inline phys_addr_t dma_to_phys(struct device *dev, dma_addr_t daddr)
static inline void
dma_cache_sync (struct device *dev, void *vaddr, size_t size,
enum dma_data_direction dir)
