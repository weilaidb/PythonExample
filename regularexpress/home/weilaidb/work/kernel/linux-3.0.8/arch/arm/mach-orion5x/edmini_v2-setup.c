#define EDMINI_V2_NOR_BOOT_BASE		0xfff80000
#define EDMINI_V2_NOR_BOOT_SIZE		SZ_512K
static struct mtd_partition edmini_v2_partitions[] = ;
static struct physmap_flash_data edmini_v2_nor_flash_data = ;
static struct resource edmini_v2_nor_flash_resource = ;
static struct platform_device edmini_v2_nor_flash = ;
static struct mv643xx_eth_platform_data edmini_v2_eth_data = ;
#define EDMINIV2_RTC_GPIO	3
static struct i2c_board_info __initdata edmini_v2_i2c_rtc = ;
static struct mv_sata_platform_data edmini_v2_sata_data = ;
#define EDMINI_V2_GPIO_LED_POWER	16
static struct gpio_led edmini_v2_leds[] = ;
static struct gpio_led_platform_data edmini_v2_led_data = ;
static struct platform_device edmini_v2_gpio_leds = ;
#define EDMINI_V2_GPIO_KEY_POWER	18
static struct gpio_keys_button edmini_v2_buttons[] = ;
static struct gpio_keys_platform_data edmini_v2_button_data = ;
static struct platform_device edmini_v2_gpio_buttons = ;
static unsigned int edminiv2_mpp_modes[] __initdata = ;
static void __init edmini_v2_init(void)
MACHINE_START(EDMINI_V2, "LaCie Ethernet Disk mini V2")
.boot_params	= 0x00000100,
.init_machine	= edmini_v2_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
