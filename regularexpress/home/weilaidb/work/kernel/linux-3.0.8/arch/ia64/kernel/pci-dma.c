dma_addr_t bad_dma_address __read_mostly;
EXPORT_SYMBOL(bad_dma_address);
static int iommu_sac_force __read_mostly;
int no_iommu __read_mostly;
int force_iommu __read_mostly = 1;
int force_iommu __read_mostly;
int iommu_pass_through;
struct device fallback_dev = ;
extern struct dma_map_ops intel_dma_ops;
static int __init pci_iommu_init(void)
fs_initcall(pci_iommu_init);
void pci_iommu_shutdown(void)
void __init
iommu_dma_init(void)
int iommu_dma_supported(struct device *dev, u64 mask)
EXPORT_SYMBOL(iommu_dma_supported);
void __init pci_iommu_alloc(void)
