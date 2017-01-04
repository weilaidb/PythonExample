int xen_swiotlb __read_mostly;
static struct dma_map_ops xen_swiotlb_dma_ops = ;
int __init pci_xen_swiotlb_detect(void)
void __init pci_xen_swiotlb_init(void)
IOMMU_INIT_FINISH(pci_xen_swiotlb_detect,
0,
pci_xen_swiotlb_init,
0);
