#define MX23EVK_LCD_ENABLE	MXS_GPIO_NR(1, 18)
#define MX23EVK_BL_ENABLE	MXS_GPIO_NR(1, 28)
#define MX23EVK_MMC0_WRITE_PROTECT	MXS_GPIO_NR(1, 30)
#define MX23EVK_MMC0_SLOT_POWER		MXS_GPIO_NR(1, 29)
static const iomux_cfg_t mx23evk_pads[] __initconst = ;
static struct fb_videomode mx23evk_video_modes[] = ;
static const struct mxsfb_platform_data mx23evk_mxsfb_pdata __initconst = ;
static struct mxs_mmc_platform_data mx23evk_mmc_pdata __initdata = ;
static void __init mx23evk_init(void)
static void __init mx23evk_timer_init(void)
static struct sys_timer mx23evk_timer = ;
MACHINE_START(MX23EVK, "Freescale MX23 EVK")
.map_io		= mx23_map_io,
.init_irq	= mx23_init_irq,
.init_machine	= mx23evk_init,
.timer		= &mx23evk_timer,
MACHINE_END
