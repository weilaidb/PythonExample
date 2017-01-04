static void __init cap9adk_init_early(void)
static void __init cap9adk_init_irq(void)
static struct at91_usbh_data __initdata cap9adk_usbh_data = ;
static struct usba_platform_data __initdata cap9adk_usba_udc_data = ;
#if defined(CONFIG_TOUCHSCREEN_ADS7846) || defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static int ads7843_pendown_state(void)
static struct ads7846_platform_data ads_info = ;
static void __init cap9adk_add_device_ts(void)
static void __init cap9adk_add_device_ts(void)
static struct spi_board_info cap9adk_spi_devices[] = ;
static struct at91_mmc_data __initdata cap9adk_mmc_data = ;
static struct at91_eth_data __initdata cap9adk_macb_data = ;
static struct mtd_partition __initdata cap9adk_nand_partitions[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata cap9adk_nand_data = ;
static struct sam9_smc_config __initdata cap9adk_nand_smc_config = ;
static void __init cap9adk_add_device_nand(void)
static struct mtd_partition cap9adk_nor_partitions[] = ;
static struct physmap_flash_data cap9adk_nor_data = ;
#define NOR_BASE	AT91_CHIPSELECT_0
#define NOR_SIZE	SZ_8M
static struct resource nor_flash_resources[] = ;
static struct platform_device cap9adk_nor_flash = ;
static struct sam9_smc_config __initdata cap9adk_nor_smc_config = ;
static __init void cap9adk_add_device_nor(void)
#if defined(CONFIG_FB_ATMEL) || defined(CONFIG_FB_ATMEL_MODULE)
static struct fb_videomode at91_tft_vga_modes[] = ;
static struct fb_monspecs at91fb_default_monspecs = ;
#define AT91CAP9_DEFAULT_LCDCON2 	(ATMEL_LCDC_MEMOR_LITTLE \
| ATMEL_LCDC_DISTYPE_TFT    \
| ATMEL_LCDC_CLKMOD_ALWAYSACTIVE)
static void at91_lcdc_power_control(int on)
static struct atmel_lcdfb_info __initdata cap9adk_lcdc_data = ;
static struct atmel_lcdfb_info __initdata cap9adk_lcdc_data;
static struct ac97c_platform_data cap9adk_ac97_data = ;
static void __init cap9adk_board_init(void)
MACHINE_START(AT91CAP9ADK, "Atmel AT91CAP9A-DK")
.timer		= &at91sam926x_timer,
.map_io		= at91cap9_map_io,
.init_early	= cap9adk_init_early,
.init_irq	= cap9adk_init_irq,
.init_machine	= cap9adk_board_init,
MACHINE_END
