#define PFX	KBUILD_MODNAME ": "
#define INTEL_RNG_HW_STATUS			0
#define         INTEL_RNG_PRESENT		0x40
#define         INTEL_RNG_ENABLED		0x01
#define INTEL_RNG_STATUS			1
#define         INTEL_RNG_DATA_PRESENT		0x01
#define INTEL_RNG_DATA				2
#define INTEL_RNG_ADDR				0xFFBC015F
#define INTEL_RNG_ADDR_LEN			3
#define FWH_DEC_EN1_REG_OLD			0xe3
#define FWH_DEC_EN1_REG_NEW			0xd9
#define FWH_F8_EN_MASK				0x80
#define BIOS_CNTL_REG_OLD			0x4e
#define BIOS_CNTL_REG_NEW			0xdc
#define BIOS_CNTL_WRITE_ENABLE_MASK		0x01
#define BIOS_CNTL_LOCK_ENABLE_MASK		0x02
#define INTEL_FWH_ADDR				0xffff0000
#define INTEL_FWH_ADDR_LEN			2
#define INTEL_FWH_RESET_CMD			0xff
#define INTEL_FWH_READ_ID_CMD			0x90
#define INTEL_FWH_MANUFACTURER_CODE_ADDRESS	0x000000
#define INTEL_FWH_DEVICE_CODE_ADDRESS		0x000001
#define INTEL_FWH_MANUFACTURER_CODE		0x89
#define INTEL_FWH_DEVICE_CODE_8M		0xac
#define INTEL_FWH_DEVICE_CODE_4M		0xad
static const struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static __initdata int no_fwh_detect;
module_param(no_fwh_detect, int, 0);
MODULE_PARM_DESC(no_fwh_detect, "Skip FWH detection:\n"
" positive value - skip if FWH space locked read-only\n"
" negative value - skip always");
static inline u8 hwstatus_get(void __iomem *mem)
static inline u8 hwstatus_set(void __iomem *mem,
u8 hw_status)
static int intel_rng_data_present(struct hwrng *rng, int wait)
static int intel_rng_data_read(struct hwrng *rng, u32 *data)
static int intel_rng_init(struct hwrng *rng)
static void intel_rng_cleanup(struct hwrng *rng)
static struct hwrng intel_rng = ;
struct intel_rng_hw ;
static int __init intel_rng_hw_init(void *_intel_rng_hw)
static int __init intel_init_hw_struct(struct intel_rng_hw *intel_rng_hw,
struct pci_dev *dev)
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_DESCRIPTION("H/W RNG driver for Intel chipsets");
MODULE_LICENSE("GPL");
