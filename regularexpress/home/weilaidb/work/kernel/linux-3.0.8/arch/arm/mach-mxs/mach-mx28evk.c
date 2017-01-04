#define MX28EVK_FLEXCAN_SWITCH	MXS_GPIO_NR(2, 13)
#define MX28EVK_FEC_PHY_POWER	MXS_GPIO_NR(2, 15)
#define MX28EVK_BL_ENABLE	MXS_GPIO_NR(3, 18)
#define MX28EVK_LCD_ENABLE	MXS_GPIO_NR(3, 30)
#define MX28EVK_FEC_PHY_RESET	MXS_GPIO_NR(4, 13)
#define MX28EVK_MMC0_WRITE_PROTECT	MXS_GPIO_NR(2, 12)
#define MX28EVK_MMC1_WRITE_PROTECT	MXS_GPIO_NR(0, 28)
#define MX28EVK_MMC0_SLOT_POWER		MXS_GPIO_NR(3, 28)
#define MX28EVK_MMC1_SLOT_POWER		MXS_GPIO_NR(3, 29)
static const iomux_cfg_t mx28evk_pads[] __initconst = ;
static void __init mx28evk_fec_reset(void)
static struct fec_platform_data mx28_fec_pdata[] __initdata = ;
static int __init mx28evk_fec_get_mac(void)
static int flexcan0_en, flexcan1_en;
static void mx28evk_flexcan_switch(void)
static void mx28evk_flexcan0_switch(int enable)
static void mx28evk_flexcan1_switch(int enable)
static const struct flexcan_platform_data
mx28evk_flexcan_pdata[] __initconst = ;
static struct fb_videomode mx28evk_video_modes[] = ;
static const struct mxsfb_platform_data mx28evk_mxsfb_pdata __initconst = ;
static struct mxs_mmc_platform_data mx28evk_mmc_pdata[] __initdata = ;
static void __init mx28evk_init(void)
static void __init mx28evk_timer_init(void)
static struct sys_timer mx28evk_timer = ;
MACHINE_START(MX28EVK, "Freescale MX28 EVK")
.map_io		= mx28_map_io,
.init_irq	= mx28_init_irq,
.init_machine	= mx28evk_init,
.timer		= &mx28evk_timer,
MACHINE_END
