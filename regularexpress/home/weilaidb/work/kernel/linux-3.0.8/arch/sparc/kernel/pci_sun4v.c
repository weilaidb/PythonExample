#define DRIVER_NAME	"pci_sun4v"
#define PFX		DRIVER_NAME ": "
static unsigned long vpci_major = 1;
static unsigned long vpci_minor = 1;
#define PGLIST_NENTS	(PAGE_SIZE / sizeof(u64))
struct iommu_batch ;
static DEFINE_PER_CPU(struct iommu_batch, iommu_batch);
static int iommu_batch_initialized;
static inline void iommu_batch_start(struct device *dev, unsigned long prot, unsigned long entry)
static long iommu_batch_flush(struct iommu_batch *p)
static inline void iommu_batch_new_entry(unsigned long entry)
static inline long iommu_batch_add(u64 phys_page)
static inline long iommu_batch_end(void)
static void *dma_4v_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_addrp, gfp_t gfp)
static void dma_4v_free_coherent(struct device *dev, size_t size, void *cpu,
dma_addr_t dvma)
static dma_addr_t dma_4v_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t sz,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_4v_unmap_page(struct device *dev, dma_addr_t bus_addr,
size_t sz, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int dma_4v_map_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_4v_unmap_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs)
static struct dma_map_ops sun4v_dma_ops = ;
static void __devinit pci_sun4v_scan_bus(struct pci_pbm_info *pbm,
struct device *parent)
static unsigned long __devinit probe_existing_entries(struct pci_pbm_info *pbm,
struct iommu *iommu)
static int __devinit pci_sun4v_iommu_init(struct pci_pbm_info *pbm)
struct pci_sun4v_msiq_entry ;
static int pci_sun4v_get_head(struct pci_pbm_info *pbm, unsigned long msiqid,
unsigned long *head)
static int pci_sun4v_dequeue_msi(struct pci_pbm_info *pbm,
unsigned long msiqid, unsigned long *head,
unsigned long *msi)
static int pci_sun4v_set_head(struct pci_pbm_info *pbm, unsigned long msiqid,
unsigned long head)
static int pci_sun4v_msi_setup(struct pci_pbm_info *pbm, unsigned long msiqid,
unsigned long msi, int is_msi64)
static int pci_sun4v_msi_teardown(struct pci_pbm_info *pbm, unsigned long msi)
static int pci_sun4v_msiq_alloc(struct pci_pbm_info *pbm)
static void pci_sun4v_msiq_free(struct pci_pbm_info *pbm)
static int pci_sun4v_msiq_build_irq(struct pci_pbm_info *pbm,
unsigned long msiqid,
unsigned long devino)
static const struct sparc64_msiq_ops pci_sun4v_msiq_ops = ;
static void pci_sun4v_msi_init(struct pci_pbm_info *pbm)
static void pci_sun4v_msi_init(struct pci_pbm_info *pbm)
static int __devinit pci_sun4v_pbm_init(struct pci_pbm_info *pbm,
struct platform_device *op, u32 devhandle)
static int __devinit pci_sun4v_probe(struct platform_device *op)
static const struct of_device_id pci_sun4v_match[] = ;
static struct platform_driver pci_sun4v_driver = ;
static int __init pci_sun4v_init(void)
subsys_initcall(pci_sun4v_init);
