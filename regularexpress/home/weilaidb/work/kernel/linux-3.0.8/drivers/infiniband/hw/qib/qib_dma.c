#define BAD_DMA_ADDRESS ((u64) 0)
static int qib_mapping_error(struct ib_device *dev, u64 dma_addr)
static u64 qib_dma_map_single(struct ib_device *dev, void *cpu_addr,
size_t size, enum dma_data_direction direction)
static void qib_dma_unmap_single(struct ib_device *dev, u64 addr, size_t size,
enum dma_data_direction direction)
static u64 qib_dma_map_page(struct ib_device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction)
static void qib_dma_unmap_page(struct ib_device *dev, u64 addr, size_t size,
enum dma_data_direction direction)
static int qib_map_sg(struct ib_device *dev, struct scatterlist *sgl,
int nents, enum dma_data_direction direction)
static void qib_unmap_sg(struct ib_device *dev,
struct scatterlist *sg, int nents,
enum dma_data_direction direction)
static u64 qib_sg_dma_address(struct ib_device *dev, struct scatterlist *sg)
static unsigned int qib_sg_dma_len(struct ib_device *dev,
struct scatterlist *sg)
static void qib_sync_single_for_cpu(struct ib_device *dev, u64 addr,
size_t size, enum dma_data_direction dir)
static void qib_sync_single_for_device(struct ib_device *dev, u64 addr,
size_t size,
enum dma_data_direction dir)
static void *qib_dma_alloc_coherent(struct ib_device *dev, size_t size,
u64 *dma_handle, gfp_t flag)
static void qib_dma_free_coherent(struct ib_device *dev, size_t size,
void *cpu_addr, u64 dma_handle)
struct ib_dma_mapping_ops qib_dma_mapping_ops = ;
