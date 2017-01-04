#define IOMMU_RNGE	IOMMU_RNGE_256MB
#define IOMMU_START	0xF0000000
#define IOMMU_WINSIZE	(256*1024*1024U)
#define IOMMU_NPTES	(IOMMU_WINSIZE/PAGE_SIZE)
#define IOMMU_ORDER	6
extern int viking_mxcc_present;
BTFIXUPDEF_CALL(void, flush_page_for_dma, unsigned long)
#define flush_page_for_dma(page) BTFIXUP_CALL(flush_page_for_dma)(page)
extern int flush_page_for_dma_global;
static int viking_flush;
extern void viking_flush_page(unsigned long page);
extern void viking_mxcc_flush_page(unsigned long page);
static unsigned int ioperm_noc;
static pgprot_t dvma_prot;
#define IOPERM        (IOPTE_CACHE | IOPTE_WRITE | IOPTE_VALID)
#define MKIOPTE(pfn, perm) (((((pfn)<<8) & IOPTE_PAGE) | (perm)) & ~IOPTE_WAZ)
static void __init sbus_iommu_init(struct platform_device *op)
static int __init iommu_init(void)
subsys_initcall(iommu_init);
static void iommu_flush_iotlb(iopte_t *iopte, unsigned int niopte)
static u32 iommu_get_one(struct device *dev, struct page *page, int npages)
static u32 iommu_get_scsi_one(struct device *dev, char *vaddr, unsigned int len)
static __u32 iommu_get_scsi_one_noflush(struct device *dev, char *vaddr, unsigned long len)
static __u32 iommu_get_scsi_one_gflush(struct device *dev, char *vaddr, unsigned long len)
static __u32 iommu_get_scsi_one_pflush(struct device *dev, char *vaddr, unsigned long len)
static void iommu_get_scsi_sgl_noflush(struct device *dev, struct scatterlist *sg, int sz)
static void iommu_get_scsi_sgl_gflush(struct device *dev, struct scatterlist *sg, int sz)
static void iommu_get_scsi_sgl_pflush(struct device *dev, struct scatterlist *sg, int sz)
static void iommu_release_one(struct device *dev, u32 busa, int npages)
static void iommu_release_scsi_one(struct device *dev, __u32 vaddr, unsigned long len)
static void iommu_release_scsi_sgl(struct device *dev, struct scatterlist *sg, int sz)
static int iommu_map_dma_area(struct device *dev, dma_addr_t *pba, unsigned long va,
unsigned long addr, int len)
static void iommu_unmap_dma_area(struct device *dev, unsigned long busa, int len)
static char *iommu_lockarea(char *vaddr, unsigned long len)
static void iommu_unlockarea(char *vaddr, unsigned long len)
void __init ld_mmu_iommu(void)
