unsigned long dart_tablebase;
static unsigned long dart_tablesize;
static u32 *dart_vbase;
static u32 *dart_copy;
static unsigned int __iomem *dart;
static unsigned int dart_emptyval;
static struct iommu_table iommu_table_dart;
static int iommu_table_dart_inited;
static int dart_dirty;
static int dart_is_u4;
#define DART_U4_BYPASS_BASE	0x8000000000ull
#define DBG(...)
static inline void dart_tlb_invalidate_all(void)
static inline void dart_tlb_invalidate_one(unsigned long bus_rpn)
static void dart_flush(struct iommu_table *tbl)
static int dart_build(struct iommu_table *tbl, long index,
long npages, unsigned long uaddr,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dart_free(struct iommu_table *tbl, long index, long npages)
static int __init dart_init(struct device_node *dart_node)
static void iommu_table_dart_setup(void)
static void dma_dev_setup_dart(struct device *dev)
static void pci_dma_dev_setup_dart(struct pci_dev *dev)
static void pci_dma_bus_setup_dart(struct pci_bus *bus)
static bool dart_device_on_pcie(struct device *dev)
static int dart_dma_set_mask(struct device *dev, u64 dma_mask)
void __init iommu_init_early_dart(void)
static void iommu_dart_save(void)
static void iommu_dart_restore(void)
static int __init iommu_init_late_dart(void)
late_initcall(iommu_init_late_dart);
void __init alloc_dart_table(void)
