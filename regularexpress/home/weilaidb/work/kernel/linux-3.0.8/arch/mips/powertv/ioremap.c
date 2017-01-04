#define IOR_PHYS_GRAIN		((phys_addr_t) 1 << IOR_LSBITS)
#define IOR_PHYS_GRAIN_MASK	(IOR_PHYS_GRAIN - 1)
#define IOR_DMA_GRAIN		((dma_addr_t) 1 << IOR_LSBITS)
#define IOR_DMA_GRAIN_MASK	(IOR_DMA_GRAIN - 1)
struct ior_phys_to_dma _ior_phys_to_dma[IOR_NUM_PHYS_TO_DMA];
EXPORT_SYMBOL(_ior_phys_to_dma);
struct ior_dma_to_phys _ior_dma_to_phys[IOR_NUM_DMA_TO_PHYS];
EXPORT_SYMBOL(_ior_dma_to_phys);
static void setup_dma_to_phys(dma_addr_t dma, phys_addr_t delta, dma_addr_t s)
static void setup_phys_to_dma(phys_addr_t phys, dma_addr_t delta, phys_addr_t s)
void ioremap_add_map(phys_addr_t phys, phys_addr_t dma, phys_addr_t size)
