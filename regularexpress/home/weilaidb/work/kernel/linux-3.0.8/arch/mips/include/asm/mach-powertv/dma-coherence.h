#define __ASM_MACH_POWERTV_DMA_COHERENCE_H
static inline bool is_kseg2(void *addr)
static inline unsigned long virt_to_phys_from_pte(void *addr)
static inline dma_addr_t plat_map_dma_mem(struct device *dev, void *addr,
size_t size)
static inline dma_addr_t plat_map_dma_mem_page(struct device *dev,
struct page *page)
static inline unsigned long plat_dma_addr_to_phys(struct device *dev,
dma_addr_t dma_addr)
static inline void plat_unmap_dma_mem(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction direction)
static inline int plat_dma_supported(struct device *dev, u64 mask)
static inline void plat_extra_sync_for_device(struct device *dev)
static inline int plat_dma_mapping_error(struct device *dev,
dma_addr_t dma_addr)
static inline int plat_device_is_coherent(struct device *dev)
