#define ASMARM_DMA_MAPPING_H
#error Please update to __arch_pfn_to_dma
static inline dma_addr_t pfn_to_dma(struct device *dev, unsigned long pfn)
static inline unsigned long dma_to_pfn(struct device *dev, dma_addr_t addr)
static inline void *dma_to_virt(struct device *dev, dma_addr_t addr)
static inline dma_addr_t virt_to_dma(struct device *dev, void *addr)
static inline dma_addr_t pfn_to_dma(struct device *dev, unsigned long pfn)
static inline unsigned long dma_to_pfn(struct device *dev, dma_addr_t addr)
static inline void *dma_to_virt(struct device *dev, dma_addr_t addr)
static inline dma_addr_t virt_to_dma(struct device *dev, void *addr)
static inline void __dma_single_cpu_to_dev(const void *kaddr, size_t size,
enum dma_data_direction dir)
static inline void __dma_single_dev_to_cpu(const void *kaddr, size_t size,
enum dma_data_direction dir)
static inline void __dma_page_cpu_to_dev(struct page *page, unsigned long off,
size_t size, enum dma_data_direction dir)
static inline void __dma_page_dev_to_cpu(struct page *page, unsigned long off,
size_t size, enum dma_data_direction dir)
static inline int dma_supported(struct device *dev, u64 mask)
static inline int dma_set_mask(struct device *dev, u64 dma_mask)
static inline int dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
static inline void *dma_alloc_noncoherent(struct device *dev, size_t size,
dma_addr_t *handle, gfp_t gfp)
static inline void dma_free_noncoherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t handle)
extern void *dma_alloc_coherent(struct device *, size_t, dma_addr_t *, gfp_t);
extern void dma_free_coherent(struct device *, size_t, void *, dma_addr_t);
int dma_mmap_coherent(struct device *, struct vm_area_struct *,
void *, dma_addr_t, size_t);
extern void *dma_alloc_writecombine(struct device *, size_t, dma_addr_t *,
gfp_t);
#define dma_free_writecombine(dev,size,cpu_addr,handle) \
dma_free_coherent(dev,size,cpu_addr,handle)
int dma_mmap_writecombine(struct device *, struct vm_area_struct *,
void *, dma_addr_t, size_t);
extern int dmabounce_register_dev(struct device *, unsigned long,
unsigned long);
extern void dmabounce_unregister_dev(struct device *);
extern int dma_needs_bounce(struct device*, dma_addr_t, size_t);
extern dma_addr_t __dma_map_single(struct device *, void *, size_t,
enum dma_data_direction);
extern void __dma_unmap_single(struct device *, dma_addr_t, size_t,
enum dma_data_direction);
extern dma_addr_t __dma_map_page(struct device *, struct page *,
unsigned long, size_t, enum dma_data_direction);
extern void __dma_unmap_page(struct device *, dma_addr_t, size_t,
enum dma_data_direction);
int dmabounce_sync_for_cpu(struct device *, dma_addr_t, unsigned long,
size_t, enum dma_data_direction);
int dmabounce_sync_for_device(struct device *, dma_addr_t, unsigned long,
size_t, enum dma_data_direction);
static inline int dmabounce_sync_for_cpu(struct device *d, dma_addr_t addr,
unsigned long offset, size_t size, enum dma_data_direction dir)
static inline int dmabounce_sync_for_device(struct device *d, dma_addr_t addr,
unsigned long offset, size_t size, enum dma_data_direction dir)
static inline dma_addr_t __dma_map_single(struct device *dev, void *cpu_addr,
size_t size, enum dma_data_direction dir)
static inline dma_addr_t __dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size, enum dma_data_direction dir)
static inline void __dma_unmap_single(struct device *dev, dma_addr_t handle,
size_t size, enum dma_data_direction dir)
static inline void __dma_unmap_page(struct device *dev, dma_addr_t handle,
size_t size, enum dma_data_direction dir)
static inline dma_addr_t dma_map_single(struct device *dev, void *cpu_addr,
size_t size, enum dma_data_direction dir)
static inline dma_addr_t dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size, enum dma_data_direction dir)
static inline void dma_unmap_single(struct device *dev, dma_addr_t handle,
size_t size, enum dma_data_direction dir)
static inline void dma_unmap_page(struct device *dev, dma_addr_t handle,
size_t size, enum dma_data_direction dir)
static inline void dma_sync_single_range_for_cpu(struct device *dev,
dma_addr_t handle, unsigned long offset, size_t size,
enum dma_data_direction dir)
static inline void dma_sync_single_range_for_device(struct device *dev,
dma_addr_t handle, unsigned long offset, size_t size,
enum dma_data_direction dir)
static inline void dma_sync_single_for_cpu(struct device *dev,
dma_addr_t handle, size_t size, enum dma_data_direction dir)
static inline void dma_sync_single_for_device(struct device *dev,
dma_addr_t handle, size_t size, enum dma_data_direction dir)
extern int dma_map_sg(struct device *, struct scatterlist *, int,
enum dma_data_direction);
extern void dma_unmap_sg(struct device *, struct scatterlist *, int,
enum dma_data_direction);
extern void dma_sync_sg_for_cpu(struct device *, struct scatterlist *, int,
enum dma_data_direction);
extern void dma_sync_sg_for_device(struct device *, struct scatterlist *, int,
enum dma_data_direction);
