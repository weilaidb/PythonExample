#define LSCHL_NOR_BOOT_BASE	0xf4000000
#define LSCHL_NOR_BOOT_SIZE	SZ_256K
static struct physmap_flash_data lschl_nor_flash_data = ;
static struct resource lschl_nor_flash_resource = ;
static struct platform_device lschl_nor_flash = ;
static struct mv643xx_eth_platform_data lschl_eth_data = ;
static struct i2c_board_info __initdata lschl_i2c_rtc = ;
#define LSCHL_GPIO_LED_ALARM	2
#define LSCHL_GPIO_LED_INFO	3
#define LSCHL_GPIO_LED_FUNC	17
#define LSCHL_GPIO_LED_PWR	0
static struct gpio_led lschl_led_pins[] = ;
static struct gpio_led_platform_data lschl_led_data = ;
static struct platform_device lschl_leds = ;
static struct mv_sata_platform_data lschl_sata_data = ;
static void lschl_power_off(void)
#define LSCHL_GPIO_USB_POWER	9
#define LSCHL_GPIO_AUTO_POWER	17
#define LSCHL_GPIO_POWER	18
#define LSCHL_GPIO_KEY_FUNC		15
#define LSCHL_GPIO_KEY_POWER		8
#define LSCHL_GPIO_KEY_AUTOPOWER	10
#define LSCHL_SW_POWER		0x00
#define LSCHL_SW_AUTOPOWER	0x01
#define LSCHL_SW_FUNC		0x02
static struct gpio_keys_button lschl_buttons[] = ;
static struct gpio_keys_platform_data lschl_button_data = ;
static struct platform_device lschl_button_device = ;
#define LSCHL_GPIO_HDD_POWER	1
#define LSCHL_GPIO_FAN_LOW	16
#define LSCHL_GPIO_FAN_HIGH	14
#define LSCHL_GPIO_FAN_LOCK	6
static struct gpio_fan_alarm lschl_alarm = ;
static struct gpio_fan_speed lschl_speeds[] = ;
static int lschl_gpio_list[] = ;
static struct gpio_fan_platform_data lschl_fan_data = ;
static struct platform_device lschl_fan_device = ;
static unsigned int lschl_mpp_modes[] __initdata = ;
static void __init lschl_init(void)
MACHINE_START(LINKSTATION_LSCHL, "Buffalo Linkstation LiveV3 (LS-CHL)")
.boot_params	= 0x00000100,
.init_machine	= lschl_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
