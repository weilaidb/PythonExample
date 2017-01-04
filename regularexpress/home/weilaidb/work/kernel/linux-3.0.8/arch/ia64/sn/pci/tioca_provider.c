u32 tioca_gart_found;
EXPORT_SYMBOL(tioca_gart_found);
LIST_HEAD(tioca_list);
EXPORT_SYMBOL(tioca_list);
static int tioca_gart_init(struct tioca_kernel *);
static int
tioca_gart_init(struct tioca_kernel *tioca_kern)
void
tioca_fastwrite_enable(struct tioca_kernel *tioca_kern)
EXPORT_SYMBOL(tioca_fastwrite_enable);
static u64
tioca_dma_d64(unsigned long paddr)
static u64
tioca_dma_d48(struct pci_dev *pdev, u64 paddr)
static dma_addr_t
tioca_dma_mapped(struct pci_dev *pdev, unsigned long paddr, size_t req_size)
static void
tioca_dma_unmap(struct pci_dev *pdev, dma_addr_t bus_addr, int dir)
static u64
tioca_dma_map(struct pci_dev *pdev, unsigned long paddr, size_t byte_count, int dma_flags)
static irqreturn_t
tioca_error_intr_handler(int irq, void *arg)
static void *
tioca_bus_fixup(struct pcibus_bussoft *prom_bussoft, struct pci_controller *controller)
static struct sn_pcibus_provider tioca_pci_interfaces = ;
int
tioca_init_provider(void)
