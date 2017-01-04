#define _ASM_GENERIC_PCI_DMA_COMPAT_H
static inline int
pci_dma_supported(struct pci_dev *hwdev, u64 mask)
static inline void *
pci_alloc_consistent(struct pci_dev *hwdev, size_t size,
dma_addr_t *dma_handle)
static inline void
pci_free_consistent(struct pci_dev *hwdev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static inline dma_addr_t
pci_map_single(struct pci_dev *hwdev, void *ptr, size_t size, int direction)
static inline void
pci_unmap_single(struct pci_dev *hwdev, dma_addr_t dma_addr,
size_t size, int direction)
static inline dma_addr_t
pci_map_page(struct pci_dev *hwdev, struct page *page,
unsigned long offset, size_t size, int direction)
static inline void
pci_unmap_page(struct pci_dev *hwdev, dma_addr_t dma_address,
size_t size, int direction)
static inline int
pci_map_sg(struct pci_dev *hwdev, struct scatterlist *sg,
int nents, int direction)
static inline void
pci_unmap_sg(struct pci_dev *hwdev, struct scatterlist *sg,
int nents, int direction)
static inline void
pci_dma_sync_single_for_cpu(struct pci_dev *hwdev, dma_addr_t dma_handle,
size_t size, int direction)
static inline void
pci_dma_sync_single_for_device(struct pci_dev *hwdev, dma_addr_t dma_handle,
size_t size, int direction)
static inline void
pci_dma_sync_sg_for_cpu(struct pci_dev *hwdev, struct scatterlist *sg,
int nelems, int direction)
static inline void
pci_dma_sync_sg_for_device(struct pci_dev *hwdev, struct scatterlist *sg,
int nelems, int direction)
static inline int
pci_dma_mapping_error(struct pci_dev *pdev, dma_addr_t dma_addr)
static inline int pci_set_dma_mask(struct pci_dev *dev, u64 mask)
static inline int pci_set_consistent_dma_mask(struct pci_dev *dev, u64 mask)
