#define PALMTT_USBDETECT_GPIO	0
#define PALMTT_CABLE_GPIO	1
#define PALMTT_LED_GPIO		3
#define PALMTT_PENIRQ_GPIO	6
#define PALMTT_MMC_WP_GPIO	8
#define PALMTT_HDQ_GPIO		11
static const unsigned int palmtt_keymap[] = ;
static struct mtd_partition palmtt_partitions[] = ;
static struct physmap_flash_data palmtt_flash_data = ;
static struct resource palmtt_flash_resource = ;
static struct platform_device palmtt_flash_device = ;
static struct resource palmtt_kp_resources[] = ;
static const struct matrix_keymap_data palmtt_keymap_data = ;
static struct omap_kp_platform_data palmtt_kp_data = ;
static struct platform_device palmtt_kp_device = ;
static struct platform_device palmtt_lcd_device = ;
static struct omap_irda_config palmtt_irda_config = ;
static struct resource palmtt_irda_resources[] = ;
static struct platform_device palmtt_irda_device = ;
static struct platform_device palmtt_spi_device = ;
static struct omap_backlight_config palmtt_backlight_config = ;
static struct platform_device palmtt_backlight_device = ;
static struct omap_led_config palmtt_led_config[] = ;
static struct omap_led_platform_data palmtt_led_data = ;
static struct platform_device palmtt_led_device = ;
static struct platform_device *palmtt_devices[] __initdata = ;
static int palmtt_get_pendown_state(void)
static const struct ads7846_platform_data palmtt_ts_info = ;
static struct spi_board_info __initdata palmtt_boardinfo[] = ;
static void __init omap_palmtt_init_irq(void)
static struct omap_usb_config palmtt_usb_config __initdata = ;
static struct omap_lcd_config palmtt_lcd_config __initdata = ;
static struct omap_board_config_kernel palmtt_config[] __initdata = ;
static void __init omap_mpu_wdt_mode(int mode)
static void __init omap_palmtt_init(void)
static void __init omap_palmtt_map_io(void)
MACHINE_START(OMAP_PALMTT, "OMAP1510 based Palm Tungsten|T")
.boot_params	= 0x10000100,
.map_io		= omap_palmtt_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_palmtt_init_irq,
.init_machine	= omap_palmtt_init,
.timer		= &omap_timer,
MACHINE_END
