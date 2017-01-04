static unsigned long iommu_bus_base;
static unsigned long iommu_size;
static unsigned long iommu_pages;
static u32 *iommu_gatt_base;
static dma_addr_t bad_dma_addr;
static int iommu_fullflush = 1;
static DEFINE_SPINLOCK(iommu_bitmap_lock);
static unsigned long *iommu_gart_bitmap;
static u32 gart_unmapped_entry;
#define GPTE_VALID    1
#define GPTE_COHERENT 2
#define GPTE_ENCODE(x) \
(((x) & 0xfffff000) | (((x) >> 32) << 4) | GPTE_VALID | GPTE_COHERENT)
#define GPTE_DECODE(x) (((x) & 0xfffff000) | (((u64)(x) & 0xff0) << 28))
#define EMERGENCY_PAGES 32
#define AGPEXTERN extern
#define AGPEXTERN
#define GART_MAX_PHYS_ADDR	(1ULL << 40)
AGPEXTERN int agp_memory_reserved;
AGPEXTERN __u32 *agp_gatt_table;
static unsigned long next_bit;
static bool need_flush;
static unsigned long alloc_iommu(struct device *dev, int size,
unsigned long align_mask)
static void free_iommu(unsigned long offset, int size)
static void flush_gart(void)
static int leak_trace;
static int iommu_leak_pages = 20;
static void dump_leak(void)
static void iommu_full(struct device *dev, size_t size, int dir)
static inline int
need_iommu(struct device *dev, unsigned long addr, size_t size)
static inline int
nonforced_iommu(struct device *dev, unsigned long addr, size_t size)
static dma_addr_t dma_map_area(struct device *dev, dma_addr_t phys_mem,
size_t size, int dir, unsigned long align_mask)
static dma_addr_t gart_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void gart_unmap_page(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void gart_unmap_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction dir, struct dma_attrs *attrs)
static int dma_map_sg_nonforce(struct device *dev, struct scatterlist *sg,
int nents, int dir)
static int __dma_map_cont(struct device *dev, struct scatterlist *start,
int nelems, struct scatterlist *sout,
unsigned long pages)
static inline int
dma_map_cont(struct device *dev, struct scatterlist *start, int nelems,
struct scatterlist *sout, unsigned long pages, int need)
static int gart_map_sg(struct device *dev, struct scatterlist *sg, int nents,
enum dma_data_direction dir, struct dma_attrs *attrs)
static void *
gart_alloc_coherent(struct device *dev, size_t size, dma_addr_t *dma_addr,
gfp_t flag)
static void
gart_free_coherent(struct device *dev, size_t size, void *vaddr,
dma_addr_t dma_addr)
static int gart_mapping_error(struct device *dev, dma_addr_t dma_addr)
static int no_agp;
static __init unsigned long check_iommu_size(unsigned long aper, u64 aper_size)
static __init unsigned read_aperture(struct pci_dev *dev, u32 *size)
static void enable_gart_translations(void)
static bool fix_up_north_bridges;
static u32 aperture_order;
static u32 aperture_alloc;
void set_up_gart_resume(u32 aper_order, u32 aper_alloc)
static void gart_fixup_northbridges(void)
static void gart_resume(void)
static struct syscore_ops gart_syscore_ops = ;
static __init int init_amd_gatt(struct agp_kern_info *info)
static struct dma_map_ops gart_dma_ops = ;
static void gart_iommu_shutdown(void)
int __init gart_iommu_init(void)
void __init gart_parse_options(char *p)
IOMMU_INIT_POST(gart_iommu_hole_init);
