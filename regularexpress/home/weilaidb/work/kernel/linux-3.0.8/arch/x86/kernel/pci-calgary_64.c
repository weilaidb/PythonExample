int use_calgary __read_mostly = 1;
int use_calgary __read_mostly = 0;
#define PCI_DEVICE_ID_IBM_CALGARY 0x02a1
#define PCI_DEVICE_ID_IBM_CALIOC2 0x0308
#define CALGARY_CONFIG_REG	0x0108
#define PHB_CSR_OFFSET		0x0110
#define PHB_PLSSR_OFFSET	0x0120
#define PHB_CONFIG_RW_OFFSET	0x0160
#define PHB_IOBASE_BAR_LOW	0x0170
#define PHB_IOBASE_BAR_HIGH	0x0180
#define PHB_MEM_1_LOW		0x0190
#define PHB_MEM_1_HIGH		0x01A0
#define PHB_IO_ADDR_SIZE	0x01B0
#define PHB_MEM_1_SIZE		0x01C0
#define PHB_MEM_ST_OFFSET	0x01D0
#define PHB_AER_OFFSET		0x0200
#define PHB_CONFIG_0_HIGH	0x0220
#define PHB_CONFIG_0_LOW	0x0230
#define PHB_CONFIG_0_END	0x0240
#define PHB_MEM_2_LOW		0x02B0
#define PHB_MEM_2_HIGH		0x02C0
#define PHB_MEM_2_SIZE_HIGH	0x02D0
#define PHB_MEM_2_SIZE_LOW	0x02E0
#define PHB_DOSHOLE_OFFSET	0x08E0
#define PHB_SAVIOR_L2		0x0DB0
#define PHB_PAGE_MIG_CTRL	0x0DA8
#define PHB_PAGE_MIG_DEBUG	0x0DA0
#define PHB_ROOT_COMPLEX_STATUS 0x0CB0
#define PHB_TCE_ENABLE		0x20000000
#define PHB_SLOT_DISABLE	0x1C000000
#define PHB_DAC_DISABLE		0x01000000
#define PHB_MEM2_ENABLE		0x00400000
#define PHB_MCSR_ENABLE		0x00100000
#define TAR_SW_BITS		0x0000ffffffff800fUL
#define TAR_VALID		0x0000000000000008UL
#define CSR_AGENT_MASK		0xffe0ffff
#define CCR_2SEC_TIMEOUT	0x000000000000000EUL
#define PMR_SOFTSTOP		0x80000000
#define PMR_SOFTSTOPFAULT	0x40000000
#define PMR_HARDSTOP		0x20000000
#define MAX_PHB_BUS_NUM		256
#define PHBS_PER_CALGARY	  4
static const unsigned long tar_offsets[] = ;
static const unsigned long split_queue_offsets[] = ;
static const unsigned long phb_offsets[] = ;
static const unsigned long phb_debug_offsets[] = ;
#define PHB_DEBUG_STUFF_OFFSET	0x0020
#define EMERGENCY_PAGES 32
unsigned int specified_table_size = TCE_TABLE_SIZE_UNSPECIFIED;
static int translate_empty_slots __read_mostly = 0;
static int calgary_detected __read_mostly = 0;
static struct rio_table_hdr	*rio_table_hdr __initdata;
static struct scal_detail	*scal_devs[MAX_NUMNODES] __initdata;
static struct rio_detail	*rio_devs[MAX_NUMNODES * 4] __initdata;
struct calgary_bus_info ;
static void calgary_handle_quirks(struct iommu_table *tbl, struct pci_dev *dev);
static void calgary_tce_cache_blast(struct iommu_table *tbl);
static void calgary_dump_error_regs(struct iommu_table *tbl);
static void calioc2_handle_quirks(struct iommu_table *tbl, struct pci_dev *dev);
static void calioc2_tce_cache_blast(struct iommu_table *tbl);
static void calioc2_dump_error_regs(struct iommu_table *tbl);
static void calgary_init_bitmap_from_tce_table(struct iommu_table *tbl);
static void get_tce_space_from_tar(void);
static struct cal_chipset_ops calgary_chip_ops = ;
static struct cal_chipset_ops calioc2_chip_ops = ;
static struct calgary_bus_info bus_info[MAX_PHB_BUS_NUM] = ;
static inline int translation_enabled(struct iommu_table *tbl)
static void iommu_range_reserve(struct iommu_table *tbl,
unsigned long start_addr, unsigned int npages)
static unsigned long iommu_range_alloc(struct device *dev,
struct iommu_table *tbl,
unsigned int npages)
static dma_addr_t iommu_alloc(struct device *dev, struct iommu_table *tbl,
void *vaddr, unsigned int npages, int direction)
static void iommu_free(struct iommu_table *tbl, dma_addr_t dma_addr,
unsigned int npages)
static inline struct iommu_table *find_iommu_table(struct device *dev)
static void calgary_unmap_sg(struct device *dev, struct scatterlist *sglist,
int nelems,enum dma_data_direction dir,
struct dma_attrs *attrs)
static int calgary_map_sg(struct device *dev, struct scatterlist *sg,
int nelems, enum dma_data_direction dir,
struct dma_attrs *attrs)
static dma_addr_t calgary_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void calgary_unmap_page(struct device *dev, dma_addr_t dma_addr,
size_t size, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void* calgary_alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_handle, gfp_t flag)
static void calgary_free_coherent(struct device *dev, size_t size,
void *vaddr, dma_addr_t dma_handle)
static struct dma_map_ops calgary_dma_ops = ;
static inline void __iomem * busno_to_bbar(unsigned char num)
static inline int busno_to_phbid(unsigned char num)
static inline unsigned long split_queue_offset(unsigned char num)
static inline unsigned long tar_offset(unsigned char num)
static inline unsigned long phb_offset(unsigned char num)
static inline void __iomem* calgary_reg(void __iomem *bar, unsigned long offset)
static inline int is_calioc2(unsigned short device)
static inline int is_calgary(unsigned short device)
static inline int is_cal_pci_dev(unsigned short device)
static void calgary_tce_cache_blast(struct iommu_table *tbl)
static void calioc2_tce_cache_blast(struct iommu_table *tbl)
static void __init calgary_reserve_mem_region(struct pci_dev *dev, u64 start,
u64 limit)
static void __init calgary_reserve_peripheral_mem_1(struct pci_dev *dev)
static void __init calgary_reserve_peripheral_mem_2(struct pci_dev *dev)
static void __init calgary_reserve_regions(struct pci_dev *dev)
static int __init calgary_setup_tar(struct pci_dev *dev, void __iomem *bbar)
static void __init calgary_free_bus(struct pci_dev *dev)
static void calgary_dump_error_regs(struct iommu_table *tbl)
static void calioc2_dump_error_regs(struct iommu_table *tbl)
static void calgary_watchdog(unsigned long data)
static void __init calgary_set_split_completion_timeout(void __iomem *bbar,
unsigned char busnum, unsigned long timeout)
static void __init calioc2_handle_quirks(struct iommu_table *tbl, struct pci_dev *dev)
static void __init calgary_handle_quirks(struct iommu_table *tbl, struct pci_dev *dev)
static void __init calgary_enable_translation(struct pci_dev *dev)
static void __init calgary_disable_translation(struct pci_dev *dev)
static void __init calgary_init_one_nontraslated(struct pci_dev *dev)
static int __init calgary_init_one(struct pci_dev *dev)
static int __init calgary_locate_bbars(void)
static int __init calgary_init(void)
static inline int __init determine_tce_table_size(u64 ram)
static int __init build_detail_arrays(void)
static int __init calgary_bus_has_devices(int bus, unsigned short pci_dev)
static void calgary_init_bitmap_from_tce_table(struct iommu_table *tbl)
static void __init get_tce_space_from_tar(void)
static int __init calgary_iommu_init(void)
int __init detect_calgary(void)
static int __init calgary_parse_options(char *p)
__setup("calgary=", calgary_parse_options);
static void __init calgary_fixup_one_tce_space(struct pci_dev *dev)
static int __init calgary_fixup_tce_spaces(void)
rootfs_initcall(calgary_fixup_tce_spaces);
IOMMU_INIT_POST(detect_calgary);
