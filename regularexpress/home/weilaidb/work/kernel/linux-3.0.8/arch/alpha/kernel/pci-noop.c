struct pci_controller *hose_head, **hose_tail = &hose_head;
struct pci_controller *pci_isa_hose;
struct pci_controller * __init
alloc_pci_controller(void)
struct resource * __init
alloc_resource(void)
asmlinkage long
sys_pciconfig_iobase(long which, unsigned long bus, unsigned long dfn)
asmlinkage long
sys_pciconfig_read(unsigned long bus, unsigned long dfn,
unsigned long off, unsigned long len, void *buf)
asmlinkage long
sys_pciconfig_write(unsigned long bus, unsigned long dfn,
unsigned long off, unsigned long len, void *buf)
static void *alpha_noop_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t gfp)
static void alpha_noop_free_coherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t dma_addr)
static dma_addr_t alpha_noop_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static int alpha_noop_map_sg(struct device *dev, struct scatterlist *sgl, int nents,
enum dma_data_direction dir, struct dma_attrs *attrs)
static int alpha_noop_mapping_error(struct device *dev, dma_addr_t dma_addr)
static int alpha_noop_supported(struct device *dev, u64 mask)
static int alpha_noop_set_mask(struct device *dev, u64 mask)
struct dma_map_ops alpha_noop_ops = ;
struct dma_map_ops *dma_ops = &alpha_noop_ops;
EXPORT_SYMBOL(dma_ops);
void __iomem *pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
void pci_iounmap(struct pci_dev *dev, void __iomem * addr)
EXPORT_SYMBOL(pci_iomap);
EXPORT_SYMBOL(pci_iounmap);
