#define NET2BIG_NOR_BOOT_BASE		0xfff80000
#define NET2BIG_NOR_BOOT_SIZE		SZ_512K
static struct mtd_partition net2big_partitions[] = ;
static struct physmap_flash_data net2big_nor_flash_data = ;
static struct resource net2big_nor_flash_resource = ;
static struct platform_device net2big_nor_flash = ;
static struct mv643xx_eth_platform_data net2big_eth_data = ;
static struct i2c_board_info __initdata net2big_i2c_devices[] = ;
static struct mv_sata_platform_data net2big_sata_data = ;
#define NET2BIG_GPIO_SATA_POWER_REQ	19
#define NET2BIG_GPIO_SATA0_POWER	23
#define NET2BIG_GPIO_SATA1_POWER	25
static void __init net2big_sata_power_init(void)
#define NET2BIG_GPIO_PWR_RED_LED	6
#define NET2BIG_GPIO_PWR_BLUE_LED	16
#define NET2BIG_GPIO_PWR_LED_BLINK_STOP	7
#define NET2BIG_GPIO_SATA0_RED_LED	11
#define NET2BIG_GPIO_SATA1_RED_LED	10
#define NET2BIG_GPIO_SATA0_BLUE_LED	17
#define NET2BIG_GPIO_SATA1_BLUE_LED	13
static struct gpio_led net2big_leds[] = ;
static struct gpio_led_platform_data net2big_led_data = ;
static struct platform_device net2big_gpio_leds = ;
static void __init net2big_gpio_leds_init(void)
#define NET2BIG_GPIO_PUSH_BUTTON	18
#define NET2BIG_GPIO_POWER_SWITCH_ON	8
#define NET2BIG_GPIO_POWER_SWITCH_OFF	9
#define NET2BIG_SWITCH_POWER_ON		0x1
#define NET2BIG_SWITCH_POWER_OFF	0x2
static struct gpio_keys_button net2big_buttons[] = ;
static struct gpio_keys_platform_data net2big_button_data = ;
static struct platform_device net2big_gpio_buttons = ;
static unsigned int net2big_mpp_modes[] __initdata = ;
#define NET2BIG_GPIO_POWER_OFF		24
static void net2big_power_off(void)
static void __init net2big_init(void)
MACHINE_START(NET2BIG, "LaCie 2Big Network")
.boot_params	= 0x00000100,
.init_machine	= net2big_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
