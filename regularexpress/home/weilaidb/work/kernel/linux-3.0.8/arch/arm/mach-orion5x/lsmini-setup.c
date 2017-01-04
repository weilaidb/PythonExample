#define LSMINI_NOR_BOOT_BASE	0xf4000000
#define LSMINI_NOR_BOOT_SIZE	SZ_256K
static struct physmap_flash_data lsmini_nor_flash_data = ;
static struct resource lsmini_nor_flash_resource = ;
static struct platform_device lsmini_nor_flash = ;
static struct mv643xx_eth_platform_data lsmini_eth_data = ;
static struct i2c_board_info __initdata lsmini_i2c_rtc = ;
#define LSMINI_GPIO_LED_ALARM	2
#define LSMINI_GPIO_LED_INFO	3
#define LSMINI_GPIO_LED_FUNC	9
#define LSMINI_GPIO_LED_PWR	14
static struct gpio_led lsmini_led_pins[] = ;
static struct gpio_led_platform_data lsmini_led_data = ;
static struct platform_device lsmini_leds = ;
#define LSMINI_GPIO_KEY_FUNC       15
#define LSMINI_GPIO_KEY_POWER	   18
#define LSMINI_GPIO_KEY_AUTOPOWER 17
#define LSMINI_SW_POWER		0x00
#define LSMINI_SW_AUTOPOWER	0x01
static struct gpio_keys_button lsmini_buttons[] = ;
static struct gpio_keys_platform_data lsmini_button_data = ;
static struct platform_device lsmini_button_device = ;
static struct mv_sata_platform_data lsmini_sata_data = ;
static void lsmini_power_off(void)
#define LSMINI_GPIO_USB_POWER	16
#define LSMINI_GPIO_AUTO_POWER	17
#define LSMINI_GPIO_POWER	18
#define LSMINI_GPIO_HDD_POWER0	1
#define LSMINI_GPIO_HDD_POWER1	19
static unsigned int lsmini_mpp_modes[] __initdata = ;
static void __init lsmini_init(void)
MACHINE_START(LINKSTATION_MINI, "Buffalo Linkstation Mini")
.boot_params	= 0x00000100,
.init_machine	= lsmini_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
