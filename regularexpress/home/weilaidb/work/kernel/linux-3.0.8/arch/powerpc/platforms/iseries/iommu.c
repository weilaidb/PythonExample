static int tce_build_iSeries(struct iommu_table *tbl, long index, long npages,
unsigned long uaddr, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void tce_free_iSeries(struct iommu_table *tbl, long index, long npages)
struct iommu_table_cb ;
void iommu_table_getparms_iSeries(unsigned long busno,
unsigned char slotno,
unsigned char virtbus,
struct iommu_table* tbl)
static struct iommu_table *iommu_table_find(struct iommu_table * tbl)
static void pci_dma_dev_setup_iseries(struct pci_dev *pdev)
#define pci_dma_dev_setup_iseries	NULL
static struct iommu_table veth_iommu_table;
static struct iommu_table vio_iommu_table;
void *iseries_hv_alloc(size_t size, dma_addr_t *dma_handle, gfp_t flag)
EXPORT_SYMBOL_GPL(iseries_hv_alloc);
void iseries_hv_free(size_t size, void *vaddr, dma_addr_t dma_handle)
EXPORT_SYMBOL_GPL(iseries_hv_free);
dma_addr_t iseries_hv_map(void *vaddr, size_t size,
enum dma_data_direction direction)
void iseries_hv_unmap(dma_addr_t dma_handle, size_t size,
enum dma_data_direction direction)
void __init iommu_vio_init(void)
struct iommu_table *vio_build_iommu_table_iseries(struct vio_dev *dev)
void iommu_init_early_iSeries(void)
