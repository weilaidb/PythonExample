#define LED0_GPIO13		13
#define LED1_GPIO14		14
#define LED2_GPIO15		15
#define SW_ENTER_GPIO16		16
#define SW_UP_GPIO17		17
#define SW_DOWN_GPIO58		58
#define APOLLON_FLASH_CS	0
#define APOLLON_ETH_CS		1
#define APOLLON_ETHR_GPIO_IRQ	74
static struct mtd_partition apollon_partitions[] = ;
static struct onenand_platform_data apollon_flash_data = ;
static struct resource apollon_flash_resource[] = ;
static struct platform_device apollon_onenand_device = ;
static void __init apollon_flash_init(void)
static struct smc91x_platdata appolon_smc91x_info = ;
static struct resource apollon_smc91x_resources[] = ;
static struct platform_device apollon_smc91x_device = ;
static struct platform_device apollon_lcd_device = ;
static struct omap_led_config apollon_led_config[] = ;
static struct omap_led_platform_data apollon_led_data = ;
static struct platform_device apollon_led_device = ;
static struct platform_device *apollon_devices[] __initdata = ;
static inline void __init apollon_init_smc91x(void)
static struct omap_usb_config apollon_usb_config __initdata = ;
static struct omap_lcd_config apollon_lcd_config __initdata = ;
static struct omap_board_config_kernel apollon_config[] __initdata = ;
static void __init omap_apollon_init_early(void)
static struct gpio apollon_gpio_leds[] __initdata = ;
static void __init apollon_led_init(void)
static void __init apollon_usb_init(void)
static struct omap_board_mux board_mux[] __initdata = ;
static void __init omap_apollon_init(void)
static void __init omap_apollon_map_io(void)
MACHINE_START(OMAP_APOLLON, "OMAP24xx Apollon")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap_apollon_map_io,
.init_early	= omap_apollon_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_apollon_init,
.timer		= &omap_timer,
MACHINE_END
