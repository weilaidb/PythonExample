static int forbid_dac __read_mostly;
struct dma_map_ops *dma_ops = &nommu_dma_ops;
EXPORT_SYMBOL(dma_ops);
static int iommu_sac_force __read_mostly;
int panic_on_overflow __read_mostly = 1;
int force_iommu __read_mostly = 1;
int panic_on_overflow __read_mostly = 0;
int force_iommu __read_mostly = 0;
int iommu_merge __read_mostly = 0;
int no_iommu __read_mostly;
int iommu_detected __read_mostly = 0;
int iommu_pass_through __read_mostly;
extern struct iommu_table_entry __iommu_table[], __iommu_table_end[];
struct device x86_dma_fallback_dev = ;
EXPORT_SYMBOL(x86_dma_fallback_dev);
#define PREALLOC_DMA_DEBUG_ENTRIES       32768
int dma_set_mask(struct device *dev, u64 mask)
EXPORT_SYMBOL(dma_set_mask);
void __init pci_iommu_alloc(void)
void *dma_generic_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_addr, gfp_t flag)
static __init int iommu_setup(char *p)
early_param("iommu", iommu_setup);
int dma_supported(struct device *dev, u64 mask)
EXPORT_SYMBOL(dma_supported);
static int __init pci_iommu_init(void)
rootfs_initcall(pci_iommu_init);
static __devinit void via_no_dac(struct pci_dev *dev)
DECLARE_PCI_FIXUP_FINAL(PCI_VENDOR_ID_VIA, PCI_ANY_ID, via_no_dac);
