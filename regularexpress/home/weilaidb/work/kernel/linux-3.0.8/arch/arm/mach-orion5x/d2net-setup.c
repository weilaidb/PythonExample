#define D2NET_NOR_BOOT_BASE		0xfff80000
#define D2NET_NOR_BOOT_SIZE		SZ_512K
static struct mtd_partition d2net_partitions[] = ;
static struct physmap_flash_data d2net_nor_flash_data = ;
static struct resource d2net_nor_flash_resource = ;
static struct platform_device d2net_nor_flash = ;
static struct mv643xx_eth_platform_data d2net_eth_data = ;
static struct i2c_board_info __initdata d2net_i2c_devices[] = ;
static struct mv_sata_platform_data d2net_sata_data = ;
#define D2NET_GPIO_SATA0_POWER	3
#define D2NET_GPIO_SATA1_POWER	12
static void __init d2net_sata_power_init(void)
#define D2NET_GPIO_RED_LED		6
#define D2NET_GPIO_BLUE_LED_BLINK_CTRL	16
#define D2NET_GPIO_BLUE_LED_OFF		23
static struct gpio_led d2net_leds[] = ;
static struct gpio_led_platform_data d2net_led_data = ;
static struct platform_device d2net_gpio_leds = ;
static void __init d2net_gpio_leds_init(void)
#define D2NET_GPIO_PUSH_BUTTON		18
#define D2NET_GPIO_POWER_SWITCH_ON	8
#define D2NET_GPIO_POWER_SWITCH_OFF	9
#define D2NET_SWITCH_POWER_ON		0x1
#define D2NET_SWITCH_POWER_OFF		0x2
static struct gpio_keys_button d2net_buttons[] = ;
static struct gpio_keys_platform_data d2net_button_data = ;
static struct platform_device d2net_gpio_buttons = ;
static unsigned int d2net_mpp_modes[] __initdata = ;
#define D2NET_GPIO_INHIBIT_POWER_OFF    24
static void __init d2net_init(void)
MACHINE_START(D2NET, "LaCie d2 Network")
.boot_params	= 0x00000100,
.init_machine	= d2net_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
MACHINE_START(BIGDISK, "LaCie Big Disk Network")
.boot_params	= 0x00000100,
.init_machine	= d2net_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
