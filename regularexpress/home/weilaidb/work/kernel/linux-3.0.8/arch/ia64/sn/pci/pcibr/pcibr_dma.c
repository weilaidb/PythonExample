extern int sn_ioif_inited;
static dma_addr_t
pcibr_dmamap_ate32(struct pcidev_info *info,
u64 paddr, size_t req_size, u64 flags, int dma_flags)
static dma_addr_t
pcibr_dmatrans_direct64(struct pcidev_info * info, u64 paddr,
u64 dma_attributes, int dma_flags)
static dma_addr_t
pcibr_dmatrans_direct32(struct pcidev_info * info,
u64 paddr, size_t req_size, u64 flags, int dma_flags)
void
pcibr_dma_unmap(struct pci_dev *hwdev, dma_addr_t dma_handle, int direction)
void sn_dma_flush(u64 addr)
dma_addr_t
pcibr_dma_map(struct pci_dev * hwdev, unsigned long phys_addr, size_t size, int dma_flags)
dma_addr_t
pcibr_dma_map_consistent(struct pci_dev * hwdev, unsigned long phys_addr,
size_t size, int dma_flags)
EXPORT_SYMBOL(sn_dma_flush);
