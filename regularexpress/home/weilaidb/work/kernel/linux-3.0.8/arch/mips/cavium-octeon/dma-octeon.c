static dma_addr_t octeon_hole_phys_to_dma(phys_addr_t paddr)
static phys_addr_t octeon_hole_dma_to_phys(dma_addr_t daddr)
static dma_addr_t octeon_gen1_phys_to_dma(struct device *dev, phys_addr_t paddr)
static phys_addr_t octeon_gen1_dma_to_phys(struct device *dev, dma_addr_t daddr)
static dma_addr_t octeon_big_phys_to_dma(struct device *dev, phys_addr_t paddr)
static phys_addr_t octeon_big_dma_to_phys(struct device *dev, dma_addr_t daddr)
static dma_addr_t octeon_small_phys_to_dma(struct device *dev,
phys_addr_t paddr)
static phys_addr_t octeon_small_dma_to_phys(struct device *dev,
dma_addr_t daddr)
static dma_addr_t octeon_dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int octeon_dma_map_sg(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction, struct dma_attrs *attrs)
static void octeon_dma_sync_single_for_device(struct device *dev,
dma_addr_t dma_handle, size_t size, enum dma_data_direction direction)
static void octeon_dma_sync_sg_for_device(struct device *dev,
struct scatterlist *sg, int nelems, enum dma_data_direction direction)
static void *octeon_dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
static void octeon_dma_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static dma_addr_t octeon_unity_phys_to_dma(struct device *dev, phys_addr_t paddr)
static phys_addr_t octeon_unity_dma_to_phys(struct device *dev, dma_addr_t daddr)
struct octeon_dma_map_ops ;
dma_addr_t phys_to_dma(struct device *dev, phys_addr_t paddr)
EXPORT_SYMBOL(phys_to_dma);
phys_addr_t dma_to_phys(struct device *dev, dma_addr_t daddr)
EXPORT_SYMBOL(dma_to_phys);
static struct octeon_dma_map_ops octeon_linear_dma_map_ops = ;
char *octeon_swiotlb;
void __init plat_swiotlb_setup(void)
static struct octeon_dma_map_ops _octeon_pci_dma_map_ops = ;
struct dma_map_ops *octeon_pci_dma_map_ops;
void __init octeon_pci_dma_init(void)
