#define __MTD_CFI_H__
#define cfi_interleave(cfi) 1
#define cfi_interleave_is_1(cfi) (cfi_interleave(cfi) == 1)
#define cfi_interleave_is_1(cfi) (0)
# ifdef cfi_interleave
#  undef cfi_interleave
#  define cfi_interleave(cfi) ((cfi)->interleave)
# else
#  define cfi_interleave(cfi) 2
# endif
#define cfi_interleave_is_2(cfi) (cfi_interleave(cfi) == 2)
#define cfi_interleave_is_2(cfi) (0)
# ifdef cfi_interleave
#  undef cfi_interleave
#  define cfi_interleave(cfi) ((cfi)->interleave)
# else
#  define cfi_interleave(cfi) 4
# endif
#define cfi_interleave_is_4(cfi) (cfi_interleave(cfi) == 4)
#define cfi_interleave_is_4(cfi) (0)
# ifdef cfi_interleave
#  undef cfi_interleave
#  define cfi_interleave(cfi) ((cfi)->interleave)
# else
#  define cfi_interleave(cfi) 8
# endif
#define cfi_interleave_is_8(cfi) (cfi_interleave(cfi) == 8)
#define cfi_interleave_is_8(cfi) (0)
#warning No CONFIG_MTD_CFI_Ix selected. No NOR chip support can work.
static inline int cfi_interleave(void *cfi)
static inline int cfi_interleave_supported(int i)
#define CFI_DEVICETYPE_X8  (8 / 8)
#define CFI_DEVICETYPE_X16 (16 / 8)
#define CFI_DEVICETYPE_X32 (32 / 8)
#define CFI_DEVICETYPE_X64 (64 / 8)
#define CFI_INTERFACE_X8_ASYNC		0x0000
#define CFI_INTERFACE_X16_ASYNC		0x0001
#define CFI_INTERFACE_X8_BY_X16_ASYNC	0x0002
#define CFI_INTERFACE_X32_ASYNC		0x0003
#define CFI_INTERFACE_X16_BY_X32_ASYNC	0x0005
#define CFI_INTERFACE_NOT_ALLOWED	0xffff
struct cfi_ident  __attribute__((packed));
struct cfi_extquery  __attribute__((packed));
struct cfi_pri_intelext  __attribute__((packed));
struct cfi_intelext_otpinfo  __attribute__((packed));
struct cfi_intelext_blockinfo  __attribute__((packed));
struct cfi_intelext_regioninfo  __attribute__((packed));
struct cfi_intelext_programming_regioninfo  __attribute__((packed));
struct cfi_pri_amdstd  __attribute__((packed));
struct cfi_pri_atmel  __attribute__((packed));
struct cfi_pri_query  __attribute__((packed));
struct cfi_bri_query  __attribute__((packed));
#define P_ID_NONE               0x0000
#define P_ID_INTEL_EXT          0x0001
#define P_ID_AMD_STD            0x0002
#define P_ID_INTEL_STD          0x0003
#define P_ID_AMD_EXT            0x0004
#define P_ID_WINBOND            0x0006
#define P_ID_ST_ADV             0x0020
#define P_ID_MITSUBISHI_STD     0x0100
#define P_ID_MITSUBISHI_EXT     0x0101
#define P_ID_SST_PAGE           0x0102
#define P_ID_SST_OLD            0x0701
#define P_ID_INTEL_PERFORMANCE  0x0200
#define P_ID_INTEL_DATA         0x0210
#define P_ID_RESERVED           0xffff
#define CFI_MODE_CFI	1
#define CFI_MODE_JEDEC	0
struct cfi_private ;
static inline uint32_t cfi_build_cmd_addr(uint32_t cmd_ofs,
struct map_info *map, struct cfi_private *cfi)
static inline map_word cfi_build_cmd(u_long cmd, struct map_info *map, struct cfi_private *cfi)
#define CMD(x)  cfi_build_cmd((x), map, cfi)
static inline unsigned long cfi_merge_status(map_word val, struct map_info *map,
struct cfi_private *cfi)
#define MERGESTATUS(x) cfi_merge_status((x), map, cfi)
static inline uint32_t cfi_send_gen_cmd(u_char cmd, uint32_t cmd_addr, uint32_t base,
struct map_info *map, struct cfi_private *cfi,
int type, map_word *prev_val)
static inline uint8_t cfi_read_query(struct map_info *map, uint32_t addr)
static inline uint16_t cfi_read_query16(struct map_info *map, uint32_t addr)
static inline void cfi_udelay(int us)
int __xipram cfi_qry_present(struct map_info *map, __u32 base,
struct cfi_private *cfi);
int __xipram cfi_qry_mode_on(uint32_t base, struct map_info *map,
struct cfi_private *cfi);
void __xipram cfi_qry_mode_off(uint32_t base, struct map_info *map,
struct cfi_private *cfi);
struct cfi_extquery *cfi_read_pri(struct map_info *map, uint16_t adr, uint16_t size,
const char* name);
struct cfi_fixup ;
#define CFI_MFR_ANY		0xFFFF
#define CFI_ID_ANY		0xFFFF
#define CFI_MFR_CONTINUATION	0x007F
#define CFI_MFR_AMD		0x0001
#define CFI_MFR_AMIC		0x0037
#define CFI_MFR_ATMEL		0x001F
#define CFI_MFR_EON		0x001C
#define CFI_MFR_FUJITSU		0x0004
#define CFI_MFR_HYUNDAI		0x00AD
#define CFI_MFR_INTEL		0x0089
#define CFI_MFR_MACRONIX	0x00C2
#define CFI_MFR_NEC		0x0010
#define CFI_MFR_PMC		0x009D
#define CFI_MFR_SAMSUNG		0x00EC
#define CFI_MFR_SHARP		0x00B0
#define CFI_MFR_SST		0x00BF
#define CFI_MFR_ST		0x0020
#define CFI_MFR_TOSHIBA		0x0098
#define CFI_MFR_WINBOND		0x00DA
void cfi_fixup(struct mtd_info *mtd, struct cfi_fixup* fixups);
typedef int (*varsize_frob_t)(struct map_info *map, struct flchip *chip,
unsigned long adr, int len, void *thunk);
int cfi_varsize_frob(struct mtd_info *mtd, varsize_frob_t frob,
loff_t ofs, size_t len, void *thunk);
