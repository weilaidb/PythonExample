#define _ASM_IOMMU_H
#define IOMMU_PAGE_SHIFT      12
#define IOMMU_PAGE_SIZE       (ASM_CONST(1) << IOMMU_PAGE_SHIFT)
#define IOMMU_PAGE_MASK       (~((1 << IOMMU_PAGE_SHIFT) - 1))
#define IOMMU_PAGE_ALIGN(addr) _ALIGN_UP(addr, IOMMU_PAGE_SIZE)
extern int iommu_is_off;
extern int iommu_force_on;
static __inline__ __attribute_const__ int get_iommu_order(unsigned long size)
#define IOMAP_MAX_ORDER		13
struct iommu_table ;
struct scatterlist;
static inline void set_iommu_table_base(struct device *dev, void *base)
static inline void *get_iommu_table_base(struct device *dev)
extern void iommu_free_table(struct iommu_table *tbl, const char *node_name);
extern struct iommu_table *iommu_init_table(struct iommu_table * tbl,
int nid);
extern int iommu_map_sg(struct device *dev, struct iommu_table *tbl,
struct scatterlist *sglist, int nelems,
unsigned long mask, enum dma_data_direction direction,
struct dma_attrs *attrs);
extern void iommu_unmap_sg(struct iommu_table *tbl, struct scatterlist *sglist,
int nelems, enum dma_data_direction direction,
struct dma_attrs *attrs);
extern void *iommu_alloc_coherent(struct device *dev, struct iommu_table *tbl,
size_t size, dma_addr_t *dma_handle,
unsigned long mask, gfp_t flag, int node);
extern void iommu_free_coherent(struct iommu_table *tbl, size_t size,
void *vaddr, dma_addr_t dma_handle);
extern dma_addr_t iommu_map_page(struct device *dev, struct iommu_table *tbl,
struct page *page, unsigned long offset,
size_t size, unsigned long mask,
enum dma_data_direction direction,
struct dma_attrs *attrs);
extern void iommu_unmap_page(struct iommu_table *tbl, dma_addr_t dma_handle,
size_t size, enum dma_data_direction direction,
struct dma_attrs *attrs);
extern void iommu_init_early_pSeries(void);
extern void iommu_init_early_iSeries(void);
extern void iommu_init_early_dart(void);
extern void iommu_init_early_pasemi(void);
extern void pci_iommu_init(void);
extern void pci_direct_iommu_init(void);
static inline void pci_iommu_init(void)
extern void alloc_dart_table(void);
#if defined(CONFIG_PPC64) && defined(CONFIG_PM)
static inline void iommu_save(void)
static inline void iommu_restore(void)
