#define _ASM_X86_DMA_MAPPING_H
# define ISA_DMA_BIT_MASK DMA_BIT_MASK(24)
# define ISA_DMA_BIT_MASK DMA_BIT_MASK(32)
#define DMA_ERROR_CODE	0
extern int iommu_merge;
extern struct device x86_dma_fallback_dev;
extern int panic_on_overflow;
extern struct dma_map_ops *dma_ops;
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
extern int dma_supported(struct device *hwdev, u64 mask);
extern int dma_set_mask(struct device *dev, u64 mask);
extern void *dma_generic_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_addr, gfp_t flag);
static inline bool dma_capable(struct device *dev, dma_addr_t addr, size_t size)
static inline dma_addr_t phys_to_dma(struct device *dev, phys_addr_t paddr)
static inline phys_addr_t dma_to_phys(struct device *dev, dma_addr_t daddr)
static inline void
dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction dir)
static inline unsigned long dma_alloc_coherent_mask(struct device *dev,
gfp_t gfp)
static inline gfp_t dma_alloc_coherent_gfp_flags(struct device *dev, gfp_t gfp)
static inline void *
dma_alloc_coherent(struct device *dev, size_t size, dma_addr_t *dma_handle,
gfp_t gfp)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t bus)
