unsigned int ppc_swiotlb_enable;
struct dma_map_ops swiotlb_dma_ops = ;
void pci_dma_dev_setup_swiotlb(struct pci_dev *pdev)
static int ppc_swiotlb_bus_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block ppc_swiotlb_plat_bus_notifier = ;
int __init swiotlb_setup_bus_notifier(void)
