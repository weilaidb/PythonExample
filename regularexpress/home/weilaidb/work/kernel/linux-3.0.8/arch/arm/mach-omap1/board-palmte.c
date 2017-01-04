#define PALMTE_USBDETECT_GPIO	0
#define PALMTE_USB_OR_DC_GPIO	1
#define PALMTE_TSC_GPIO		4
#define PALMTE_PINTDAV_GPIO	6
#define PALMTE_MMC_WP_GPIO	8
#define PALMTE_MMC_POWER_GPIO	9
#define PALMTE_HDQ_GPIO		11
#define PALMTE_HEADPHONES_GPIO	14
#define PALMTE_SPEAKER_GPIO	15
#define PALMTE_DC_GPIO		OMAP_MPUIO(2)
#define PALMTE_MMC_SWITCH_GPIO	OMAP_MPUIO(4)
#define PALMTE_MMC1_GPIO	OMAP_MPUIO(6)
#define PALMTE_MMC2_GPIO	OMAP_MPUIO(7)
#define PALMTE_MMC3_GPIO	OMAP_MPUIO(11)
static void __init omap_palmte_init_irq(void)
static const unsigned int palmte_keymap[] = ;
static const struct matrix_keymap_data palmte_keymap_data = ;
static struct omap_kp_platform_data palmte_kp_data = ;
static struct resource palmte_kp_resources[] = ;
static struct platform_device palmte_kp_device = ;
static struct mtd_partition palmte_rom_partitions[] = ;
static struct physmap_flash_data palmte_rom_data = ;
static struct resource palmte_rom_resource = ;
static struct platform_device palmte_rom_device = ;
static struct platform_device palmte_lcd_device = ;
static struct omap_backlight_config palmte_backlight_config = ;
static struct platform_device palmte_backlight_device = ;
static struct omap_irda_config palmte_irda_config = ;
static struct resource palmte_irda_resources[] = ;
static struct platform_device palmte_irda_device = ;
static struct platform_device *palmte_devices[] __initdata = ;
static struct omap_usb_config palmte_usb_config __initdata = ;
static struct omap_lcd_config palmte_lcd_config __initdata = ;
static struct omap_board_config_kernel palmte_config[] __initdata = ;
static struct spi_board_info palmte_spi_info[] __initdata = ;
static void __init palmte_misc_gpio_setup(void)
static void __init omap_palmte_init(void)
static void __init omap_palmte_map_io(void)
MACHINE_START(OMAP_PALMTE, "OMAP310 based Palm Tungsten E")
.boot_params	= 0x10000100,
.map_io		= omap_palmte_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_palmte_init_irq,
.init_machine	= omap_palmte_init,
.timer		= &omap_timer,
MACHINE_END
