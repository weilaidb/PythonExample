#define __ASM_SWIOTLB_H
extern struct dma_map_ops swiotlb_dma_ops;
static inline void dma_mark_clean(void *addr, size_t size)
extern unsigned int ppc_swiotlb_enable;
int __init swiotlb_setup_bus_notifier(void);
extern void pci_dma_dev_setup_swiotlb(struct pci_dev *pdev);
