#undef DEBUG
#define IOBMAP_PAGE_SHIFT	12
#define IOBMAP_PAGE_SIZE	(1 << IOBMAP_PAGE_SHIFT)
#define IOBMAP_PAGE_MASK	(IOBMAP_PAGE_SIZE - 1)
#define IOB_BASE		0xe0000000
#define IOB_SIZE		0x3000
#define IOBCAP_REG		0x40
#define IOBCOM_REG		0x100
#define IOBCOM_ATEN		0x00000100
#define IOB_AD_REG		0x14c
#define IOB_AD_VGPRT		0x00000e00
#define IOB_AD_VGAEN		0x00000100
#define IOB_AD_MPSEL_MASK	0x00000030
#define IOB_AD_MPSEL_B38	0x00000000
#define IOB_AD_MPSEL_B40	0x00000010
#define IOB_AD_MPSEL_B42	0x00000020
#define IOB_AD_TRNG_MASK	0x00000003
#define IOB_AD_TRNG_256M	0x00000000
#define IOB_AD_TRNG_2G		0x00000001
#define IOB_AD_TRNG_128G	0x00000003
#define IOB_TABLEBASE_REG	0x154
#define IOB_XLT_L1_REGBASE	0x2b00
#define IOB_AT_INVAL_TLB_REG	0x2d00
#define IOBMAP_L1E_V		0x40000000
#define IOBMAP_L1E_V_B		0x80000000
#define IOBMAP_L1E_BIG_CACHED	0x00000002
#define IOBMAP_L1E_BIG_PRIORITY	0x00000001
#define IOBMAP_L2E_V		0x80000000
#define IOBMAP_L2E_V_CACHED	0xc0000000
static void __iomem *iob;
static u32 iob_l1_emptyval;
static u32 iob_l2_emptyval;
static u32 *iob_l2_base;
static struct iommu_table iommu_table_iobmap;
static int iommu_table_iobmap_inited;
static int iobmap_build(struct iommu_table *tbl, long index,
long npages, unsigned long uaddr,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void iobmap_free(struct iommu_table *tbl, long index,
long npages)
static void iommu_table_iobmap_setup(void)
static void pci_dma_bus_setup_pasemi(struct pci_bus *bus)
static void pci_dma_dev_setup_pasemi(struct pci_dev *dev)
int __init iob_init(struct device_node *dn)
void __init iommu_init_early_pasemi(void)
void __init alloc_iobmap_l2(void)
