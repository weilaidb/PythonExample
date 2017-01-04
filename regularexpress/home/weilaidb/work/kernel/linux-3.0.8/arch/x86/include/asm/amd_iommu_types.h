#define _ASM_X86_AMD_IOMMU_TYPES_H
#define MAX_IOMMUS	32
#define DEV_TABLE_ENTRY_SIZE		32
#define ALIAS_TABLE_ENTRY_SIZE		2
#define RLOOKUP_TABLE_ENTRY_SIZE	(sizeof(void *))
#define MMIO_REGION_LENGTH       0x4000
#define MMIO_CAP_HDR_OFFSET	0x00
#define MMIO_RANGE_OFFSET	0x0c
#define MMIO_MISC_OFFSET	0x10
#define MMIO_RANGE_LD_MASK	0xff000000
#define MMIO_RANGE_FD_MASK	0x00ff0000
#define MMIO_RANGE_BUS_MASK	0x0000ff00
#define MMIO_RANGE_LD_SHIFT	24
#define MMIO_RANGE_FD_SHIFT	16
#define MMIO_RANGE_BUS_SHIFT	8
#define MMIO_GET_LD(x)  (((x) & MMIO_RANGE_LD_MASK) >> MMIO_RANGE_LD_SHIFT)
#define MMIO_GET_FD(x)  (((x) & MMIO_RANGE_FD_MASK) >> MMIO_RANGE_FD_SHIFT)
#define MMIO_GET_BUS(x) (((x) & MMIO_RANGE_BUS_MASK) >> MMIO_RANGE_BUS_SHIFT)
#define MMIO_MSI_NUM(x)	((x) & 0x1f)
#define MMIO_EXCL_ENABLE_MASK 0x01ULL
#define MMIO_EXCL_ALLOW_MASK  0x02ULL
#define MMIO_DEV_TABLE_OFFSET   0x0000
#define MMIO_CMD_BUF_OFFSET     0x0008
#define MMIO_EVT_BUF_OFFSET     0x0010
#define MMIO_CONTROL_OFFSET     0x0018
#define MMIO_EXCL_BASE_OFFSET   0x0020
#define MMIO_EXCL_LIMIT_OFFSET  0x0028
#define MMIO_EXT_FEATURES	0x0030
#define MMIO_CMD_HEAD_OFFSET	0x2000
#define MMIO_CMD_TAIL_OFFSET	0x2008
#define MMIO_EVT_HEAD_OFFSET	0x2010
#define MMIO_EVT_TAIL_OFFSET	0x2018
#define MMIO_STATUS_OFFSET	0x2020
#define FEATURE_PREFETCH	(1ULL<<0)
#define FEATURE_PPR		(1ULL<<1)
#define FEATURE_X2APIC		(1ULL<<2)
#define FEATURE_NX		(1ULL<<3)
#define FEATURE_GT		(1ULL<<4)
#define FEATURE_IA		(1ULL<<6)
#define FEATURE_GA		(1ULL<<7)
#define FEATURE_HE		(1ULL<<8)
#define FEATURE_PC		(1ULL<<9)
#define MMIO_STATUS_COM_WAIT_INT_MASK	0x04
#define EVENT_ENTRY_SIZE	0x10
#define EVENT_TYPE_SHIFT	28
#define EVENT_TYPE_MASK		0xf
#define EVENT_TYPE_ILL_DEV	0x1
#define EVENT_TYPE_IO_FAULT	0x2
#define EVENT_TYPE_DEV_TAB_ERR	0x3
#define EVENT_TYPE_PAGE_TAB_ERR	0x4
#define EVENT_TYPE_ILL_CMD	0x5
#define EVENT_TYPE_CMD_HARD_ERR	0x6
#define EVENT_TYPE_IOTLB_INV_TO	0x7
#define EVENT_TYPE_INV_DEV_REQ	0x8
#define EVENT_DEVID_MASK	0xffff
#define EVENT_DEVID_SHIFT	0
#define EVENT_DOMID_MASK	0xffff
#define EVENT_DOMID_SHIFT	0
#define EVENT_FLAGS_MASK	0xfff
#define EVENT_FLAGS_SHIFT	0x10
#define CONTROL_IOMMU_EN        0x00ULL
#define CONTROL_HT_TUN_EN       0x01ULL
#define CONTROL_EVT_LOG_EN      0x02ULL
#define CONTROL_EVT_INT_EN      0x03ULL
#define CONTROL_COMWAIT_EN      0x04ULL
#define CONTROL_PASSPW_EN       0x08ULL
#define CONTROL_RESPASSPW_EN    0x09ULL
#define CONTROL_COHERENT_EN     0x0aULL
#define CONTROL_ISOC_EN         0x0bULL
#define CONTROL_CMDBUF_EN       0x0cULL
#define CONTROL_PPFLOG_EN       0x0dULL
#define CONTROL_PPFINT_EN       0x0eULL
#define CMD_COMPL_WAIT          0x01
#define CMD_INV_DEV_ENTRY       0x02
#define CMD_INV_IOMMU_PAGES	0x03
#define CMD_INV_IOTLB_PAGES	0x04
#define CMD_INV_ALL		0x08
#define CMD_COMPL_WAIT_STORE_MASK	0x01
#define CMD_COMPL_WAIT_INT_MASK		0x02
#define CMD_INV_IOMMU_PAGES_SIZE_MASK	0x01
#define CMD_INV_IOMMU_PAGES_PDE_MASK	0x02
#define CMD_INV_IOMMU_ALL_PAGES_ADDRESS	0x7fffffffffffffffULL
#define DEV_ENTRY_VALID         0x00
#define DEV_ENTRY_TRANSLATION   0x01
#define DEV_ENTRY_IR            0x3d
#define DEV_ENTRY_IW            0x3e
#define DEV_ENTRY_NO_PAGE_FAULT	0x62
#define DEV_ENTRY_EX            0x67
#define DEV_ENTRY_SYSMGT1       0x68
#define DEV_ENTRY_SYSMGT2       0x69
#define DEV_ENTRY_INIT_PASS     0xb8
#define DEV_ENTRY_EINT_PASS     0xb9
#define DEV_ENTRY_NMI_PASS      0xba
#define DEV_ENTRY_LINT0_PASS    0xbe
#define DEV_ENTRY_LINT1_PASS    0xbf
#define DEV_ENTRY_MODE_MASK	0x07
#define DEV_ENTRY_MODE_SHIFT	0x09
#define CMD_BUFFER_SIZE    8192
#define CMD_BUFFER_UNINITIALIZED 1
#define CMD_BUFFER_ENTRIES 512
#define MMIO_CMD_SIZE_SHIFT 56
#define MMIO_CMD_SIZE_512 (0x9ULL << MMIO_CMD_SIZE_SHIFT)
#define EVT_BUFFER_SIZE		8192
#define EVT_LEN_MASK		(0x9ULL << 56)
#define PAGE_MODE_NONE    0x00
#define PAGE_MODE_1_LEVEL 0x01
#define PAGE_MODE_2_LEVEL 0x02
#define PAGE_MODE_3_LEVEL 0x03
#define PAGE_MODE_4_LEVEL 0x04
#define PAGE_MODE_5_LEVEL 0x05
#define PAGE_MODE_6_LEVEL 0x06
#define PM_LEVEL_SHIFT(x)	(12 + ((x) * 9))
#define PM_LEVEL_SIZE(x)	(((x) < 6) ? \
((1ULL << PM_LEVEL_SHIFT((x))) - 1): \
(0xffffffffffffffffULL))
#define PM_LEVEL_INDEX(x, a)	(((a) >> PM_LEVEL_SHIFT((x))) & 0x1ffULL)
#define PM_LEVEL_ENC(x)		(((x) << 9) & 0xe00ULL)
#define PM_LEVEL_PDE(x, a)	((a) | PM_LEVEL_ENC((x)) | \
IOMMU_PTE_P | IOMMU_PTE_IR | IOMMU_PTE_IW)
#define PM_PTE_LEVEL(pte)	(((pte) >> 9) & 0x7ULL)
#define PM_MAP_4k		0
#define PM_ADDR_MASK		0x000ffffffffff000ULL
#define PM_MAP_MASK(lvl)	(PM_ADDR_MASK & \
(~((1ULL << (12 + ((lvl) * 9))) - 1)))
#define PM_ALIGNED(lvl, addr)	((PM_MAP_MASK(lvl) & (addr)) == (addr))
#define PAGE_SIZE_LEVEL(pagesize) \
((__ffs(pagesize) - 12) / 9)
#define PAGE_SIZE_PTE_COUNT(pagesize) \
(1ULL << ((__ffs(pagesize) - 12) % 9))
#define PAGE_SIZE_ALIGN(address, pagesize) \
((address) & ~((pagesize) - 1))
#define PAGE_SIZE_PTE(address, pagesize)		\
(((address) | ((pagesize) - 1)) &	\
(~(pagesize >> 1)) & PM_ADDR_MASK)
#define PTE_PAGE_SIZE(pte) \
(1ULL << (1 + ffz(((pte) | 0xfffULL))))
#define IOMMU_PTE_P  (1ULL << 0)
#define IOMMU_PTE_TV (1ULL << 1)
#define IOMMU_PTE_U  (1ULL << 59)
#define IOMMU_PTE_FC (1ULL << 60)
#define IOMMU_PTE_IR (1ULL << 61)
#define IOMMU_PTE_IW (1ULL << 62)
#define DTE_FLAG_IOTLB	0x01
#define IOMMU_PAGE_MASK (((1ULL << 52) - 1) & ~0xfffULL)
#define IOMMU_PTE_PRESENT(pte) ((pte) & IOMMU_PTE_P)
#define IOMMU_PTE_PAGE(pte) (phys_to_virt((pte) & IOMMU_PAGE_MASK))
#define IOMMU_PTE_MODE(pte) (((pte) >> 9) & 0x07)
#define IOMMU_PROT_MASK 0x03
#define IOMMU_PROT_IR 0x01
#define IOMMU_PROT_IW 0x02
#define IOMMU_CAP_IOTLB   24
#define IOMMU_CAP_NPCACHE 26
#define IOMMU_CAP_EFR     27
#define MAX_DOMAIN_ID 65536
#define PCI_BUS(x) (((x) >> 8) & 0xff)
#define PD_DMA_OPS_MASK		(1UL << 0)
#define PD_DEFAULT_MASK		(1UL << 1)
#define PD_PASSTHROUGH_MASK	(1UL << 2)
extern bool amd_iommu_dump;
#define DUMP_printk(format, arg...)					\
do  while(0);
extern bool amd_iommu_np_cache;
extern bool amd_iommu_iotlb_sup;
#define for_each_iommu(iommu) \
list_for_each_entry((iommu), &amd_iommu_list, list)
#define for_each_iommu_safe(iommu, next) \
list_for_each_entry_safe((iommu), (next), &amd_iommu_list, list)
#define APERTURE_RANGE_SHIFT	27
#define APERTURE_RANGE_SIZE	(1ULL << APERTURE_RANGE_SHIFT)
#define APERTURE_RANGE_PAGES	(APERTURE_RANGE_SIZE >> PAGE_SHIFT)
#define APERTURE_MAX_RANGES	32
#define APERTURE_RANGE_INDEX(a)	((a) >> APERTURE_RANGE_SHIFT)
#define APERTURE_PAGE_INDEX(a)	(((a) >> 21) & 0x3fULL)
struct protection_domain ;
struct iommu_dev_data ;
struct aperture_range ;
struct dma_ops_domain ;
struct amd_iommu ;
extern struct list_head amd_iommu_list;
extern struct amd_iommu *amd_iommus[MAX_IOMMUS];
extern int amd_iommus_present;
extern spinlock_t amd_iommu_pd_lock;
extern struct list_head amd_iommu_pd_list;
struct dev_table_entry ;
struct unity_map_entry ;
extern struct list_head amd_iommu_unity_map;
extern struct dev_table_entry *amd_iommu_dev_table;
extern u16 *amd_iommu_alias_table;
extern struct amd_iommu **amd_iommu_rlookup_table;
extern unsigned amd_iommu_aperture_order;
extern u16 amd_iommu_last_bdf;
extern unsigned long *amd_iommu_pd_alloc_bitmap;
extern bool amd_iommu_unmap_flush;
static inline u16 calc_devid(u8 bus, u8 devfn)
struct __iommu_counter ;
#define DECLARE_STATS_COUNTER(nm) \
static struct __iommu_counter nm =
#define INC_STATS_COUNTER(name)		name.value += 1
#define ADD_STATS_COUNTER(name, x)	name.value += (x)
#define SUB_STATS_COUNTER(name, x)	name.value -= (x)
#define DECLARE_STATS_COUNTER(name)
#define INC_STATS_COUNTER(name)
#define ADD_STATS_COUNTER(name, x)
#define SUB_STATS_COUNTER(name, x)
