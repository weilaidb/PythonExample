#define DMA_FLAGS 0xf800000000000000UL
static int __init find_dma_window(u64 *io_space_id, u64 *ioid,
u64 *base, u64 *size, u64 *io_page_size)
static unsigned long celleb_dma_direct_offset;
static void __init celleb_init_direct_mapping(void)
static void celleb_dma_dev_setup(struct device *dev)
static void celleb_pci_dma_dev_setup(struct pci_dev *pdev)
static int celleb_of_bus_notify(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block celleb_of_bus_notifier = ;
static int __init celleb_init_iommu(void)
machine_arch_initcall(celleb_beat, celleb_init_iommu);
