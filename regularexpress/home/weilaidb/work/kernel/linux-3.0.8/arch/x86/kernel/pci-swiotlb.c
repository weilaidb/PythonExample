int swiotlb __read_mostly;
static void *x86_swiotlb_alloc_coherent(struct device *hwdev, size_t size,
dma_addr_t *dma_handle, gfp_t flags)
static struct dma_map_ops swiotlb_dma_ops = ;
int __init pci_swiotlb_detect_override(void)
IOMMU_INIT_FINISH(pci_swiotlb_detect_override,
pci_xen_swiotlb_detect,
pci_swiotlb_init,
pci_swiotlb_late_init);
int __init pci_swiotlb_detect_4gb(void)
IOMMU_INIT(pci_swiotlb_detect_4gb,
pci_swiotlb_detect_override,
pci_swiotlb_init,
pci_swiotlb_late_init);
void __init pci_swiotlb_init(void)
void __init pci_swiotlb_late_init(void)
