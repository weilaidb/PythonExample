#define OMAP_OSK_ETHR_START		0x04800300
#define OSK_TPS_GPIO_BASE		(OMAP_MAX_GPIO_LINES + 16)
#	define OSK_TPS_GPIO_USB_PWR_EN	(OSK_TPS_GPIO_BASE + 0)
#	define OSK_TPS_GPIO_LED_D3	(OSK_TPS_GPIO_BASE + 1)
#	define OSK_TPS_GPIO_LAN_RESET	(OSK_TPS_GPIO_BASE + 2)
#	define OSK_TPS_GPIO_DSP_PWR_EN	(OSK_TPS_GPIO_BASE + 3)
#	define OSK_TPS_GPIO_LED_D9	(OSK_TPS_GPIO_BASE + 4)
#	define OSK_TPS_GPIO_LED_D2	(OSK_TPS_GPIO_BASE + 5)
static struct mtd_partition osk_partitions[] = ;
static struct physmap_flash_data osk_flash_data = ;
static struct resource osk_flash_resource = ;
static struct platform_device osk5912_flash_device = ;
static struct smc91x_platdata osk5912_smc91x_info = ;
static struct resource osk5912_smc91x_resources[] = ;
static struct platform_device osk5912_smc91x_device = ;
static struct resource osk5912_cf_resources[] = ;
static struct platform_device osk5912_cf_device = ;
static struct platform_device *osk5912_devices[] __initdata = ;
static struct gpio_led tps_leds[] = ;
static struct gpio_led_platform_data tps_leds_data = ;
static struct platform_device osk5912_tps_leds = ;
static int osk_tps_setup(struct i2c_client *client, void *context)
static struct tps65010_board tps_board = ;
static struct i2c_board_info __initdata osk_i2c_board_info[] = ;
static void __init osk_init_smc91x(void)
static void __init osk_init_cf(void)
static void __init osk_init_irq(void)
static struct omap_usb_config osk_usb_config __initdata = ;
static struct omap_lcd_config osk_lcd_config __initdata = ;
static struct omap_board_config_kernel osk_config[] __initdata = ;
static struct at24_platform_data at24c04 = ;
static struct i2c_board_info __initdata mistral_i2c_board_info[] = ;
static const unsigned int osk_keymap[] = ;
static const struct matrix_keymap_data osk_keymap_data = ;
static struct omap_kp_platform_data osk_kp_data = ;
static struct resource osk5912_kp_resources[] = ;
static struct platform_device osk5912_kp_device = ;
static struct omap_backlight_config mistral_bl_data = ;
static struct platform_device mistral_bl_device = ;
static struct platform_device osk5912_lcd_device = ;
static struct platform_device *mistral_devices[] __initdata = ;
static int mistral_get_pendown_state(void)
static const struct ads7846_platform_data mistral_ts_info = ;
static struct spi_board_info __initdata mistral_boardinfo[] = ;
static irqreturn_t
osk_mistral_wake_interrupt(int irq, void *ignored)
static void __init osk_mistral_init(void)
static void __init osk_mistral_init(void)
#define EMIFS_CS3_VAL	(0x88013141)
static void __init osk_init(void)
static void __init osk_map_io(void)
MACHINE_START(OMAP_OSK, "TI-OSK")
.boot_params	= 0x10000100,
.map_io		= osk_map_io,
.reserve	= omap_reserve,
.init_irq	= osk_init_irq,
.init_machine	= osk_init,
.timer		= &omap_timer,
MACHINE_END
