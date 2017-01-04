#undef DEBUG
#define CELL_IOMMU_REAL_UNMAP
#define CELL_IOMMU_STRICT_PROTECTION
#define NR_IOMMUS			2
#define IOC_Reg_Size			0x2000
#define IOC_IOPT_CacheInvd		0x908
#define IOC_IOPT_CacheInvd_NE_Mask	0xffe0000000000000ul
#define IOC_IOPT_CacheInvd_IOPTE_Mask	0x000003fffffffff8ul
#define IOC_IOPT_CacheInvd_Busy		0x0000000000000001ul
#define IOC_IOST_Origin			0x918
#define IOC_IOST_Origin_E		0x8000000000000000ul
#define IOC_IOST_Origin_HW		0x0000000000000800ul
#define IOC_IOST_Origin_HL		0x0000000000000400ul
#define IOC_IO_ExcpStat			0x920
#define IOC_IO_ExcpStat_V		0x8000000000000000ul
#define IOC_IO_ExcpStat_SPF_Mask	0x6000000000000000ul
#define IOC_IO_ExcpStat_SPF_S		0x6000000000000000ul
#define IOC_IO_ExcpStat_SPF_P		0x2000000000000000ul
#define IOC_IO_ExcpStat_ADDR_Mask	0x00000007fffff000ul
#define IOC_IO_ExcpStat_RW_Mask		0x0000000000000800ul
#define IOC_IO_ExcpStat_IOID_Mask	0x00000000000007fful
#define IOC_IO_ExcpMask			0x928
#define IOC_IO_ExcpMask_SFE		0x4000000000000000ul
#define IOC_IO_ExcpMask_PFE		0x2000000000000000ul
#define IOC_IOCmd_Offset		0x1000
#define IOC_IOCmd_Cfg			0xc00
#define IOC_IOCmd_Cfg_TE		0x0000800000000000ul
#define IOSTE_V			0x8000000000000000ul
#define IOSTE_H			0x4000000000000000ul
#define IOSTE_PT_Base_RPN_Mask  0x3ffffffffffff000ul
#define IOSTE_NPPT_Mask		0x0000000000000fe0ul
#define IOSTE_PS_Mask		0x0000000000000007ul
#define IOSTE_PS_4K		0x0000000000000001ul
#define IOSTE_PS_64K		0x0000000000000003ul
#define IOSTE_PS_1M		0x0000000000000005ul
#define IOSTE_PS_16M		0x0000000000000007ul
#define IO_SEGMENT_SHIFT	28
#define IO_PAGENO_BITS(shift)	(IO_SEGMENT_SHIFT - (shift))
#define SPIDER_DMA_OFFSET	0x80000000ul
struct iommu_window ;
#define NAMESIZE 8
struct cbe_iommu ;
static struct cbe_iommu iommus[NR_IOMMUS];
static int cbe_nr_iommus;
static void invalidate_tce_cache(struct cbe_iommu *iommu, unsigned long *pte,
long n_ptes)
static int tce_build_cell(struct iommu_table *tbl, long index, long npages,
unsigned long uaddr, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void tce_free_cell(struct iommu_table *tbl, long index, long npages)
static irqreturn_t ioc_interrupt(int irq, void *data)
static int cell_iommu_find_ioc(int nid, unsigned long *base)
static void cell_iommu_setup_stab(struct cbe_iommu *iommu,
unsigned long dbase, unsigned long dsize,
unsigned long fbase, unsigned long fsize)
static unsigned long *cell_iommu_alloc_ptab(struct cbe_iommu *iommu,
unsigned long base, unsigned long size, unsigned long gap_base,
unsigned long gap_size, unsigned long page_shift)
static void cell_iommu_enable_hardware(struct cbe_iommu *iommu)
static void cell_iommu_setup_hardware(struct cbe_iommu *iommu,
unsigned long base, unsigned long size)
static inline u32 cell_iommu_get_ioid(struct device_node *np)
static struct iommu_window * __init
cell_iommu_setup_window(struct cbe_iommu *iommu, struct device_node *np,
unsigned long offset, unsigned long size,
unsigned long pte_offset)
static struct cbe_iommu *cell_iommu_for_node(int nid)
static unsigned long cell_dma_direct_offset;
static unsigned long dma_iommu_fixed_base;
static int iommu_fixed_is_weak;
static struct iommu_table *cell_get_iommu_table(struct device *dev)
static void *dma_fixed_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static void dma_fixed_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static dma_addr_t dma_fixed_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_fixed_unmap_page(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int dma_fixed_map_sg(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction,
struct dma_attrs *attrs)
static void dma_fixed_unmap_sg(struct device *dev, struct scatterlist *sg,
int nents, enum dma_data_direction direction,
struct dma_attrs *attrs)
static int dma_fixed_dma_supported(struct device *dev, u64 mask)
static int dma_set_mask_and_switch(struct device *dev, u64 dma_mask);
struct dma_map_ops dma_iommu_fixed_ops = ;
static void cell_dma_dev_setup_fixed(struct device *dev);
static void cell_dma_dev_setup(struct device *dev)
static void cell_pci_dma_dev_setup(struct pci_dev *dev)
static int cell_of_bus_notify(struct notifier_block *nb, unsigned long action,
void *data)
static struct notifier_block cell_of_bus_notifier = ;
static int __init cell_iommu_get_window(struct device_node *np,
unsigned long *base,
unsigned long *size)
static struct cbe_iommu * __init cell_iommu_alloc(struct device_node *np)
static void __init cell_iommu_init_one(struct device_node *np,
unsigned long offset)
static void __init cell_disable_iommus(void)
static int __init cell_iommu_init_disabled(void)
static u64 cell_iommu_get_fixed_address(struct device *dev)
static int dma_set_mask_and_switch(struct device *dev, u64 dma_mask)
static void cell_dma_dev_setup_fixed(struct device *dev)
static void insert_16M_pte(unsigned long addr, unsigned long *ptab,
unsigned long base_pte)
static void cell_iommu_setup_fixed_ptab(struct cbe_iommu *iommu,
struct device_node *np, unsigned long dbase, unsigned long dsize,
unsigned long fbase, unsigned long fsize)
static int __init cell_iommu_fixed_mapping_init(void)
static int iommu_fixed_disabled;
static int __init setup_iommu_fixed(char *str)
__setup("iommu_fixed=", setup_iommu_fixed);
static int __init cell_iommu_init(void)
machine_arch_initcall(cell, cell_iommu_init);
machine_arch_initcall(celleb_native, cell_iommu_init);
