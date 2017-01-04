#undef DEBUG
#if defined(CONFIG_ARCH_OMAP2) || defined(CONFIG_ARCH_OMAP3)
# include "../mach-omap2/prm2xxx_3xxx.h"
# include "../mach-omap2/sdrc.h"
#define OMAP1_SRAM_PA		0x20000000
#define OMAP1_SRAM_VA		VMALLOC_END
#define OMAP2_SRAM_PUB_PA	(OMAP2_SRAM_PA + 0xf800)
#define OMAP2_SRAM_VA		0xfe400000
#define OMAP2_SRAM_PUB_VA	(OMAP2_SRAM_VA + 0x800)
#define OMAP3_SRAM_VA           0xfe400000
#define OMAP3_SRAM_PUB_PA       (OMAP3_SRAM_PA + 0x8000)
#define OMAP3_SRAM_PUB_VA       (OMAP3_SRAM_VA + 0x8000)
#define OMAP4_SRAM_VA		0xfe400000
#define OMAP4_SRAM_PUB_PA	(OMAP4_SRAM_PA + 0x4000)
#define OMAP4_SRAM_PUB_VA	(OMAP4_SRAM_VA + 0x4000)
#if defined(CONFIG_ARCH_OMAP2PLUS)
#define SRAM_BOOTLOADER_SZ	0x00
#define SRAM_BOOTLOADER_SZ	0x80
#define OMAP24XX_VA_REQINFOPERM0	OMAP2_L3_IO_ADDRESS(0x68005048)
#define OMAP24XX_VA_READPERM0		OMAP2_L3_IO_ADDRESS(0x68005050)
#define OMAP24XX_VA_WRITEPERM0		OMAP2_L3_IO_ADDRESS(0x68005058)
#define OMAP34XX_VA_REQINFOPERM0	OMAP2_L3_IO_ADDRESS(0x68012848)
#define OMAP34XX_VA_READPERM0		OMAP2_L3_IO_ADDRESS(0x68012850)
#define OMAP34XX_VA_WRITEPERM0		OMAP2_L3_IO_ADDRESS(0x68012858)
#define OMAP34XX_VA_ADDR_MATCH2		OMAP2_L3_IO_ADDRESS(0x68012880)
#define OMAP34XX_VA_SMS_RG_ATT0		OMAP2_L3_IO_ADDRESS(0x6C000048)
#define GP_DEVICE		0x300
#define ROUND_DOWN(value,boundary)	((value) & (~((boundary)-1)))
static unsigned long omap_sram_start;
static unsigned long omap_sram_base;
static unsigned long omap_sram_size;
static unsigned long omap_sram_ceil;
static int is_sram_locked(void)
static void __init omap_detect_sram(void)
static struct map_desc omap_sram_io_desc[] __initdata = ;
static void __init omap_map_sram(void)
void *omap_sram_push_address(unsigned long size)
static void (*_omap_sram_reprogram_clock)(u32 dpllctl, u32 ckctl);
void omap_sram_reprogram_clock(u32 dpllctl, u32 ckctl)
static int __init omap1_sram_init(void)
#define omap1_sram_init()	do  while (0)
#if defined(CONFIG_ARCH_OMAP2)
static void (*_omap2_sram_ddr_init)(u32 *slow_dll_ctrl, u32 fast_dll_ctrl,
u32 base_cs, u32 force_unlock);
void omap2_sram_ddr_init(u32 *slow_dll_ctrl, u32 fast_dll_ctrl,
u32 base_cs, u32 force_unlock)
static void (*_omap2_sram_reprogram_sdrc)(u32 perf_level, u32 dll_val,
u32 mem_type);
void omap2_sram_reprogram_sdrc(u32 perf_level, u32 dll_val, u32 mem_type)
static u32 (*_omap2_set_prcm)(u32 dpll_ctrl_val, u32 sdrc_rfr_val, int bypass);
u32 omap2_set_prcm(u32 dpll_ctrl_val, u32 sdrc_rfr_val, int bypass)
static int __init omap242x_sram_init(void)
static inline int omap242x_sram_init(void)
static int __init omap243x_sram_init(void)
static inline int omap243x_sram_init(void)
static u32 (*_omap3_sram_configure_core_dpll)(
u32 m2, u32 unlock_dll, u32 f, u32 inc,
u32 sdrc_rfr_ctrl_0, u32 sdrc_actim_ctrl_a_0,
u32 sdrc_actim_ctrl_b_0, u32 sdrc_mr_0,
u32 sdrc_rfr_ctrl_1, u32 sdrc_actim_ctrl_a_1,
u32 sdrc_actim_ctrl_b_1, u32 sdrc_mr_1);
u32 omap3_configure_core_dpll(u32 m2, u32 unlock_dll, u32 f, u32 inc,
u32 sdrc_rfr_ctrl_0, u32 sdrc_actim_ctrl_a_0,
u32 sdrc_actim_ctrl_b_0, u32 sdrc_mr_0,
u32 sdrc_rfr_ctrl_1, u32 sdrc_actim_ctrl_a_1,
u32 sdrc_actim_ctrl_b_1, u32 sdrc_mr_1)
void omap3_sram_restore_context(void)
static int __init omap34xx_sram_init(void)
static inline int omap34xx_sram_init(void)
int __init omap_sram_init(void)
