static void __init ek_init_early(void)
static void __init ek_init_irq(void)
#if defined(CONFIG_DM9000)
static struct resource dm9000_resource[] = ;
static struct dm9000_plat_data dm9000_platdata = ;
static struct platform_device dm9000_device = ;
static struct sam9_smc_config __initdata dm9000_smc_config = ;
static void __init ek_add_device_dm9000(void)
static void __init ek_add_device_dm9000(void)
static struct at91_usbh_data __initdata ek_usbh_data = ;
static struct at91_udc_data __initdata ek_udc_data = ;
static struct mtd_partition __initdata ek_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata ek_nand_data = ;
static struct sam9_smc_config __initdata ek_nand_smc_config = ;
static void __init ek_add_device_nand(void)
#if defined(CONFIG_SPI_ATMEL) || defined(CONFIG_SPI_ATMEL_MODULE)
#if defined(CONFIG_TOUCHSCREEN_ADS7846) || defined(CONFIG_TOUCHSCREEN_ADS7846_MODULE)
static int ads7843_pendown_state(void)
static struct ads7846_platform_data ads_info = ;
static void __init ek_add_device_ts(void)
static void __init ek_add_device_ts(void)
static struct at73c213_board_info at73c213_data = ;
#if defined(CONFIG_SND_AT73C213) || defined(CONFIG_SND_AT73C213_MODULE)
static void __init at73c213_set_clk(struct at73c213_board_info *info)
static void __init at73c213_set_clk(struct at73c213_board_info *info)
static struct spi_board_info ek_spi_devices[] = ;
static struct at91_mmc_data __initdata ek_mmc_data = ;
#if defined(CONFIG_FB_ATMEL) || defined(CONFIG_FB_ATMEL_MODULE)
#if defined(CONFIG_FB_ATMEL_STN)
static struct fb_videomode at91_stn_modes[] = ;
static struct fb_monspecs at91fb_default_stn_monspecs = ;
#define AT91SAM9261_DEFAULT_STN_LCDCON2	(ATMEL_LCDC_MEMOR_LITTLE \
| ATMEL_LCDC_DISTYPE_STNMONO \
| ATMEL_LCDC_CLKMOD_ALWAYSACTIVE \
| ATMEL_LCDC_IFWIDTH_4 \
| ATMEL_LCDC_SCANMOD_SINGLE)
static void at91_lcdc_stn_power_control(int on)
static struct atmel_lcdfb_info __initdata ek_lcdc_data = ;
static struct fb_videomode at91_tft_vga_modes[] = ;
static struct fb_monspecs at91fb_default_tft_monspecs = ;
#define AT91SAM9261_DEFAULT_TFT_LCDCON2	(ATMEL_LCDC_MEMOR_LITTLE \
| ATMEL_LCDC_DISTYPE_TFT    \
| ATMEL_LCDC_CLKMOD_ALWAYSACTIVE)
static void at91_lcdc_tft_power_control(int on)
static struct atmel_lcdfb_info __initdata ek_lcdc_data = ;
static struct atmel_lcdfb_info __initdata ek_lcdc_data;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button ek_buttons[] = ;
static struct gpio_keys_platform_data ek_button_data = ;
static struct platform_device ek_button_device = ;
static void __init ek_add_device_buttons(void)
static void __init ek_add_device_buttons(void)
static struct gpio_led ek_leds[] = ;
static void __init ek_board_init(void)
#if defined(CONFIG_MACH_AT91SAM9261EK)
MACHINE_START(AT91SAM9261EK, "Atmel AT91SAM9261-EK")
MACHINE_START(AT91SAM9G10EK, "Atmel AT91SAM9G10-EK")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9261_map_io,
.init_early	= ek_init_early,
.init_irq	= ek_init_irq,
.init_machine	= ek_board_init,
MACHINE_END
