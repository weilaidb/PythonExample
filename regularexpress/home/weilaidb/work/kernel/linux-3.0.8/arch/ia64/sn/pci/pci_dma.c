#define SG_ENT_VIRT_ADDRESS(sg)	(sg_virt((sg)))
#define SG_ENT_PHYS_ADDRESS(SG)	virt_to_phys(SG_ENT_VIRT_ADDRESS(SG))
static int sn_dma_supported(struct device *dev, u64 mask)
int sn_dma_set_mask(struct device *dev, u64 dma_mask)
EXPORT_SYMBOL(sn_dma_set_mask);
static void *sn_dma_alloc_coherent(struct device *dev, size_t size,
dma_addr_t * dma_handle, gfp_t flags)
static void sn_dma_free_coherent(struct device *dev, size_t size, void *cpu_addr,
dma_addr_t dma_handle)
static dma_addr_t sn_dma_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void sn_dma_unmap_page(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void sn_dma_unmap_sg(struct device *dev, struct scatterlist *sgl,
int nhwentries, enum dma_data_direction dir,
struct dma_attrs *attrs)
static int sn_dma_map_sg(struct device *dev, struct scatterlist *sgl,
int nhwentries, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void sn_dma_sync_single_for_cpu(struct device *dev, dma_addr_t dma_handle,
size_t size, enum dma_data_direction dir)
static void sn_dma_sync_single_for_device(struct device *dev, dma_addr_t dma_handle,
size_t size,
enum dma_data_direction dir)
static void sn_dma_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
static void sn_dma_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir)
static int sn_dma_mapping_error(struct device *dev, dma_addr_t dma_addr)
u64 sn_dma_get_required_mask(struct device *dev)
EXPORT_SYMBOL_GPL(sn_dma_get_required_mask);
char *sn_pci_get_legacy_mem(struct pci_bus *bus)
int sn_pci_legacy_read(struct pci_bus *bus, u16 port, u32 *val, u8 size)
int sn_pci_legacy_write(struct pci_bus *bus, u16 port, u32 val, u8 size)
static struct dma_map_ops sn_dma_ops = ;
void sn_dma_init(void)
