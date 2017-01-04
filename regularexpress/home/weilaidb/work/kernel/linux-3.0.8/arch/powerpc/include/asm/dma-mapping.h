#define _ASM_DMA_MAPPING_H
#define DMA_ERROR_CODE		(~(dma_addr_t)0x0)
extern void *dma_direct_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag);
extern void dma_direct_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle);
struct device;
extern void *__dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *handle, gfp_t gfp);
extern void __dma_free_coherent(size_t size, void *vaddr);
extern void __dma_sync(void *vaddr, size_t size, int direction);
extern void __dma_sync_page(struct page *page, unsigned long offset,
size_t size, int direction);
extern unsigned long __dma_get_coherent_pfn(unsigned long cpu_addr);
#define __dma_alloc_coherent(dev, gfp, size, handle)	NULL
#define __dma_free_coherent(size, addr)		((void)0)
#define __dma_sync(addr, size, rw)		((void)0)
#define __dma_sync_page(pg, off, sz, rw)	((void)0)
static inline unsigned long device_to_mask(struct device *dev)
extern struct dma_map_ops dma_iommu_ops;
extern struct dma_map_ops dma_direct_ops;
static inline struct dma_map_ops *get_dma_ops(struct device *dev)
static inline void set_dma_ops(struct device *dev, struct dma_map_ops *ops)
static inline dma_addr_t get_dma_offset(struct device *dev)
static inline void set_dma_offset(struct device *dev, dma_addr_t off)
#define flush_write_buffers()
static inline int dma_supported(struct device *dev, u64 mask)
extern int dma_set_mask(struct device *dev, u64 dma_mask);
static inline void *dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static inline void dma_free_coherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t dma_handle)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
static inline bool dma_capable(struct device *dev, dma_addr_t addr, size_t size)
static inline dma_addr_t phys_to_dma(struct device *dev, phys_addr_t paddr)
static inline phys_addr_t dma_to_phys(struct device *dev, dma_addr_t daddr)
#define dma_alloc_noncoherent(d, s, h, f) dma_alloc_coherent(d, s, h, f)
#define dma_free_noncoherent(d, s, v, h) dma_free_coherent(d, s, v, h)
extern int dma_mmap_coherent(struct device *, struct vm_area_struct *,
void *, dma_addr_t, size_t);
#define ARCH_HAS_DMA_MMAP_COHERENT
static inline void dma_cache_sync(struct device *dev, void *vaddr, size_t size,
enum dma_data_direction direction)
