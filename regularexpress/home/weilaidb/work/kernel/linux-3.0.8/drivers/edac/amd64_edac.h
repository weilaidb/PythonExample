#define amd64_debug(fmt, arg...) \
edac_printk(KERN_DEBUG, "amd64", fmt, ##arg)
#define amd64_info(fmt, arg...) \
edac_printk(KERN_INFO, "amd64", fmt, ##arg)
#define amd64_notice(fmt, arg...) \
edac_printk(KERN_NOTICE, "amd64", fmt, ##arg)
#define amd64_warn(fmt, arg...) \
edac_printk(KERN_WARNING, "amd64", fmt, ##arg)
#define amd64_err(fmt, arg...) \
edac_printk(KERN_ERR, "amd64", fmt, ##arg)
#define amd64_mc_warn(mci, fmt, arg...) \
edac_mc_chipset_printk(mci, KERN_WARNING, "amd64", fmt, ##arg)
#define amd64_mc_err(mci, fmt, arg...) \
edac_mc_chipset_printk(mci, KERN_ERR, "amd64", fmt, ##arg)
#define EDAC_AMD64_VERSION		"3.4.0"
#define EDAC_MOD_STR			"amd64_edac"
#define K8_REV_D			1
#define K8_REV_E			2
#define K8_REV_F			4
#define NUM_CHIPSELECTS			8
#define DRAM_RANGES			8
#define ON true
#define OFF false
#define GENMASK(lo, hi)			(((1ULL << ((hi) - (lo) + 1)) - 1) << (lo))
#define PCI_DEVICE_ID_AMD_15H_NB_F1	0x1601
#define PCI_DEVICE_ID_AMD_15H_NB_F2	0x1602
#define DRAM_BASE_LO			0x40
#define DRAM_LIMIT_LO			0x44
#define dram_intlv_en(pvt, i)		((u8)((pvt->ranges[i].base.lo >> 8) & 0x7))
#define dram_rw(pvt, i)			((u8)(pvt->ranges[i].base.lo & 0x3))
#define dram_intlv_sel(pvt, i)		((u8)((pvt->ranges[i].lim.lo >> 8) & 0x7))
#define dram_dst_node(pvt, i)		((u8)(pvt->ranges[i].lim.lo & 0x7))
#define DHAR				0xf0
#define dhar_valid(pvt)			((pvt)->dhar & BIT(0))
#define dhar_mem_hoist_valid(pvt)	((pvt)->dhar & BIT(1))
#define dhar_base(pvt)			((pvt)->dhar & 0xff000000)
#define k8_dhar_offset(pvt)		(((pvt)->dhar & 0x0000ff00) << 16)
#define f10_dhar_offset(pvt)		(((pvt)->dhar & 0x0000ff80) << 16)
#define DCT_CFG_SEL			0x10C
#define DRAM_LOCAL_NODE_BASE		0x120
#define DRAM_LOCAL_NODE_LIM		0x124
#define DRAM_BASE_HI			0x140
#define DRAM_LIMIT_HI			0x144
#define DCSB0				0x40
#define DCSB1				0x140
#define DCSB_CS_ENABLE			BIT(0)
#define DCSM0				0x60
#define DCSM1				0x160
#define csrow_enabled(i, dct, pvt)	((pvt)->csels[(dct)].csbases[(i)] & DCSB_CS_ENABLE)
#define DBAM0				0x80
#define DBAM1				0x180
#define DBAM_DIMM(i, reg)		((((reg) >> (4*i))) & 0xF)
#define DBAM_MAX_VALUE			11
#define DCLR0				0x90
#define DCLR1				0x190
#define REVE_WIDTH_128			BIT(16)
#define WIDTH_128			BIT(11)
#define DCHR0				0x94
#define DCHR1				0x194
#define DDR3_MODE			BIT(8)
#define DCT_SEL_LO			0x110
#define dct_sel_baseaddr(pvt)		((pvt)->dct_sel_lo & 0xFFFFF800)
#define dct_sel_interleave_addr(pvt)	(((pvt)->dct_sel_lo >> 6) & 0x3)
#define dct_high_range_enabled(pvt)	((pvt)->dct_sel_lo & BIT(0))
#define dct_interleave_enabled(pvt)	((pvt)->dct_sel_lo & BIT(2))
#define dct_ganging_enabled(pvt)	((boot_cpu_data.x86 == 0x10) && ((pvt)->dct_sel_lo & BIT(4)))
#define dct_data_intlv_enabled(pvt)	((pvt)->dct_sel_lo & BIT(5))
#define dct_memory_cleared(pvt)		((pvt)->dct_sel_lo & BIT(10))
#define SWAP_INTLV_REG			0x10c
#define DCT_SEL_HI			0x114
#define NBCTL				0x40
#define NBCFG				0x44
#define NBCFG_CHIPKILL			BIT(23)
#define NBCFG_ECC_ENABLE		BIT(22)
#define F10_NBSL_EXT_ERR_ECC		0x8
#define NBSL_PP_OBS			0x2
#define SCRCTRL				0x58
#define F10_ONLINE_SPARE		0xB0
#define online_spare_swap_done(pvt, c)	(((pvt)->online_spare >> (1 + 2 * (c))) & 0x1)
#define online_spare_bad_dramcs(pvt, c)	(((pvt)->online_spare >> (4 + 4 * (c))) & 0x7)
#define F10_NB_ARRAY_ADDR		0xB8
#define F10_NB_ARRAY_DRAM_ECC		BIT(31)
#define SET_NB_ARRAY_ADDRESS(section)	(((section) & 0x3) << 1)
#define F10_NB_ARRAY_DATA		0xBC
#define SET_NB_DRAM_INJECTION_WRITE(word, bits)  \
(BIT(((word) & 0xF) + 20) | \
BIT(17) | bits)
#define SET_NB_DRAM_INJECTION_READ(word, bits)  \
(BIT(((word) & 0xF) + 20) | \
BIT(16) |  bits)
#define NBCAP				0xE8
#define NBCAP_CHIPKILL			BIT(4)
#define NBCAP_SECDED			BIT(3)
#define NBCAP_DCT_DUAL			BIT(0)
#define EXT_NB_MCA_CFG			0x180
#define MSR_MCGCTL_NBE			BIT(4)
static inline u8 get_node_id(struct pci_dev *pdev)
enum amd_families ;
struct error_injection ;
struct reg_pair ;
struct dram_range ;
struct chip_select ;
struct amd64_pvt ;
static inline u64 get_dram_base(struct amd64_pvt *pvt, unsigned i)
static inline u64 get_dram_limit(struct amd64_pvt *pvt, unsigned i)
static inline u16 extract_syndrome(u64 status)
struct ecc_settings ;
#define NUM_DBG_ATTRS 5
#define NUM_DBG_ATTRS 0
#define NUM_INJ_ATTRS 5
#define NUM_INJ_ATTRS 0
extern struct mcidev_sysfs_attribute amd64_dbg_attrs[NUM_DBG_ATTRS],
amd64_inj_attrs[NUM_INJ_ATTRS];
struct low_ops ;
struct amd64_family_type ;
int __amd64_write_pci_cfg_dword(struct pci_dev *pdev, int offset,
u32 val, const char *func);
#define amd64_read_pci_cfg(pdev, offset, val)	\
__amd64_read_pci_cfg_dword(pdev, offset, val, __func__)
#define amd64_write_pci_cfg(pdev, offset, val)	\
__amd64_write_pci_cfg_dword(pdev, offset, val, __func__)
#define amd64_read_dct_pci_cfg(pvt, offset, val) \
pvt->ops->read_dct_pci_cfg(pvt, offset, val, __func__)
int amd64_get_dram_hole_info(struct mem_ctl_info *mci, u64 *hole_base,
u64 *hole_offset, u64 *hole_size);
