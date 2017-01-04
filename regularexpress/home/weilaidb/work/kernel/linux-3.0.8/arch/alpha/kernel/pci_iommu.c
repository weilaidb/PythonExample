#define DEBUG_ALLOC 0
#if DEBUG_ALLOC > 0
# define DBGA(args...)		printk(KERN_DEBUG args)
# define DBGA(args...)
#if DEBUG_ALLOC > 1
# define DBGA2(args...)		printk(KERN_DEBUG args)
# define DBGA2(args...)
#define DEBUG_NODIRECT 0
#define ISA_DMA_MASK		0x00ffffff
static inline unsigned long
mk_iommu_pte(unsigned long paddr)
unsigned long
size_for_memory(unsigned long max)
struct pci_iommu_arena * __init
iommu_arena_new_node(int nid, struct pci_controller *hose, dma_addr_t base,
unsigned long window_size, unsigned long align)
struct pci_iommu_arena * __init
iommu_arena_new(struct pci_controller *hose, dma_addr_t base,
unsigned long window_size, unsigned long align)
static long
iommu_arena_find_pages(struct device *dev, struct pci_iommu_arena *arena,
long n, long mask)
static long
iommu_arena_alloc(struct device *dev, struct pci_iommu_arena *arena, long n,
unsigned int align)
static void
iommu_arena_free(struct pci_iommu_arena *arena, long ofs, long n)
static int pci_dac_dma_supported(struct pci_dev *dev, u64 mask)
static dma_addr_t
pci_map_single_1(struct pci_dev *pdev, void *cpu_addr, size_t size,
int dac_allowed)
static struct pci_dev *alpha_gendev_to_pci(struct device *dev)
static dma_addr_t alpha_pci_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void alpha_pci_unmap_page(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void *alpha_pci_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_addrp, gfp_t gfp)
static void alpha_pci_free_coherent(struct device *dev, size_t size,
void *cpu_addr, dma_addr_t dma_addr)
#define SG_ENT_VIRT_ADDRESS(SG) (sg_virt((SG)))
#define SG_ENT_PHYS_ADDRESS(SG) __pa(SG_ENT_VIRT_ADDRESS(SG))
static void
sg_classify(struct device *dev, struct scatterlist *sg, struct scatterlist *end,
int virt_ok)
static int
sg_fill(struct device *dev, struct scatterlist *leader, struct scatterlist *end,
struct scatterlist *out, struct pci_iommu_arena *arena,
dma_addr_t max_dma, int dac_allowed)
static int alpha_pci_map_sg(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void alpha_pci_unmap_sg(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static int alpha_pci_supported(struct device *dev, u64 mask)
int
iommu_reserve(struct pci_iommu_arena *arena, long pg_count, long align_mask)
int
iommu_release(struct pci_iommu_arena *arena, long pg_start, long pg_count)
int
iommu_bind(struct pci_iommu_arena *arena, long pg_start, long pg_count,
struct page **pages)
int
iommu_unbind(struct pci_iommu_arena *arena, long pg_start, long pg_count)
static int alpha_pci_mapping_error(struct device *dev, dma_addr_t dma_addr)
static int alpha_pci_set_mask(struct device *dev, u64 mask)
struct dma_map_ops alpha_pci_ops = ;
struct dma_map_ops *dma_ops = &alpha_pci_ops;
EXPORT_SYMBOL(dma_ops);
