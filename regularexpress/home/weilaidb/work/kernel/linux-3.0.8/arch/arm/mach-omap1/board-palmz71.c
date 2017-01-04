#define PALMZ71_USBDETECT_GPIO	0
#define PALMZ71_PENIRQ_GPIO	6
#define PALMZ71_MMC_WP_GPIO	8
#define PALMZ71_HDQ_GPIO 	11
#define PALMZ71_HOTSYNC_GPIO	OMAP_MPUIO(1)
#define PALMZ71_CABLE_GPIO	OMAP_MPUIO(2)
#define PALMZ71_SLIDER_GPIO	OMAP_MPUIO(3)
#define PALMZ71_MMC_IN_GPIO	OMAP_MPUIO(4)
static void __init
omap_palmz71_init_irq(void)
static const unsigned int palmz71_keymap[] = ;
static const struct matrix_keymap_data palmz71_keymap_data = ;
static struct omap_kp_platform_data palmz71_kp_data = ;
static struct resource palmz71_kp_resources[] = ;
static struct platform_device palmz71_kp_device = ;
static struct mtd_partition palmz71_rom_partitions[] = ;
static struct physmap_flash_data palmz71_rom_data = ;
static struct resource palmz71_rom_resource = ;
static struct platform_device palmz71_rom_device = ;
static struct platform_device palmz71_lcd_device = ;
static struct omap_irda_config palmz71_irda_config = ;
static struct resource palmz71_irda_resources[] = ;
static struct platform_device palmz71_irda_device = ;
static struct platform_device palmz71_spi_device = ;
static struct omap_backlight_config palmz71_backlight_config = ;
static struct platform_device palmz71_backlight_device = ;
static struct platform_device *devices[] __initdata = ;
static int
palmz71_get_pendown_state(void)
static const struct ads7846_platform_data palmz71_ts_info = ;
static struct spi_board_info __initdata palmz71_boardinfo[] = ;
static struct omap_usb_config palmz71_usb_config __initdata = ;
static struct omap_lcd_config palmz71_lcd_config __initdata = ;
static struct omap_board_config_kernel palmz71_config[] __initdata = ;
static irqreturn_t
palmz71_powercable(int irq, void *dev_id)
static void __init
omap_mpu_wdt_mode(int mode)
static void __init
palmz71_gpio_setup(int early)
static void __init
omap_palmz71_init(void)
static void __init
omap_palmz71_map_io(void)
MACHINE_START(OMAP_PALMZ71, "OMAP310 based Palm Zire71")
.boot_params	= 0x10000100,
.map_io		= omap_palmz71_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_palmz71_init_irq,
.init_machine	= omap_palmz71_init,
.timer		= &omap_timer,
MACHINE_END
