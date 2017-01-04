#define _LINUX_DMA_MAPPING_H
enum dma_data_direction ;
struct dma_map_ops ;
#define DMA_BIT_MASK(n)	(((n) == 64) ? ~0ULL : ((1ULL<<(n))-1))
typedef u64 DMA_nnBIT_MASK __deprecated;
#define DMA_64BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(64)
#define DMA_48BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(48)
#define DMA_47BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(47)
#define DMA_40BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(40)
#define DMA_39BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(39)
#define DMA_35BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(35)
#define DMA_32BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(32)
#define DMA_31BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(31)
#define DMA_30BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(30)
#define DMA_29BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(29)
#define DMA_28BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(28)
#define DMA_24BIT_MASK	(DMA_nnBIT_MASK)DMA_BIT_MASK(24)
#define DMA_MASK_NONE	0x0ULL
static inline int valid_dma_direction(int dma_direction)
static inline int is_device_dma_capable(struct device *dev)
static inline u64 dma_get_mask(struct device *dev)
int dma_set_coherent_mask(struct device *dev, u64 mask);
static inline int dma_set_coherent_mask(struct device *dev, u64 mask)
extern u64 dma_get_required_mask(struct device *dev);
static inline unsigned int dma_get_max_seg_size(struct device *dev)
static inline unsigned int dma_set_max_seg_size(struct device *dev,
unsigned int size)
static inline unsigned long dma_get_seg_boundary(struct device *dev)
static inline int dma_set_seg_boundary(struct device *dev, unsigned long mask)
static inline int dma_get_cache_alignment(void)
#define	DMA_MEMORY_MAP			0x01
#define DMA_MEMORY_IO			0x02
#define DMA_MEMORY_INCLUDES_CHILDREN	0x04
#define DMA_MEMORY_EXCLUSIVE		0x08
static inline int
dma_declare_coherent_memory(struct device *dev, dma_addr_t bus_addr,
dma_addr_t device_addr, size_t size, int flags)
static inline void
dma_release_declared_memory(struct device *dev)
static inline void *
dma_mark_declared_memory_occupied(struct device *dev,
dma_addr_t device_addr, size_t size)
extern void *dmam_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp);
extern void dmam_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle);
extern void *dmam_alloc_noncoherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp);
extern void dmam_free_noncoherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_handle);
extern int dmam_declare_coherent_memory(struct device *dev, dma_addr_t bus_addr,
dma_addr_t device_addr, size_t size,
int flags);
extern void dmam_release_declared_memory(struct device *dev);
static inline int dmam_declare_coherent_memory(struct device *dev,
dma_addr_t bus_addr, dma_addr_t device_addr,
size_t size, gfp_t gfp)
static inline void dmam_release_declared_memory(struct device *dev)
struct dma_attrs;
#define dma_map_single_attrs(dev, cpu_addr, size, dir, attrs) \
dma_map_single(dev, cpu_addr, size, dir)
#define dma_unmap_single_attrs(dev, dma_addr, size, dir, attrs) \
dma_unmap_single(dev, dma_addr, size, dir)
#define dma_map_sg_attrs(dev, sgl, nents, dir, attrs) \
dma_map_sg(dev, sgl, nents, dir)
#define dma_unmap_sg_attrs(dev, sgl, nents, dir, attrs) \
dma_unmap_sg(dev, sgl, nents, dir)
#define DEFINE_DMA_UNMAP_ADDR(ADDR_NAME)        dma_addr_t ADDR_NAME
#define DEFINE_DMA_UNMAP_LEN(LEN_NAME)          __u32 LEN_NAME
#define dma_unmap_addr(PTR, ADDR_NAME)           ((PTR)->ADDR_NAME)
#define dma_unmap_addr_set(PTR, ADDR_NAME, VAL)  (((PTR)->ADDR_NAME) = (VAL))
#define dma_unmap_len(PTR, LEN_NAME)             ((PTR)->LEN_NAME)
#define dma_unmap_len_set(PTR, LEN_NAME, VAL)    (((PTR)->LEN_NAME) = (VAL))
#define DEFINE_DMA_UNMAP_ADDR(ADDR_NAME)
#define DEFINE_DMA_UNMAP_LEN(LEN_NAME)
#define dma_unmap_addr(PTR, ADDR_NAME)           (0)
#define dma_unmap_addr_set(PTR, ADDR_NAME, VAL)  do  while (0)
#define dma_unmap_len(PTR, LEN_NAME)             (0)
#define dma_unmap_len_set(PTR, LEN_NAME, VAL)    do  while (0)
