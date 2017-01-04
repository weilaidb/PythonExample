#define MV2120_NOR_BOOT_BASE	0xf4000000
#define MV2120_NOR_BOOT_SIZE	SZ_512K
#define MV2120_GPIO_RTC_IRQ	3
#define MV2120_GPIO_KEY_RESET	17
#define MV2120_GPIO_KEY_POWER	18
#define MV2120_GPIO_POWER_OFF	19
static struct mv643xx_eth_platform_data mv2120_eth_data = ;
static struct mv_sata_platform_data mv2120_sata_data = ;
static struct mtd_partition mv2120_partitions[] = ;
static struct physmap_flash_data mv2120_nor_flash_data = ;
static struct resource mv2120_nor_flash_resource = ;
static struct platform_device mv2120_nor_flash = ;
static struct gpio_keys_button mv2120_buttons[] = ;
static struct gpio_keys_platform_data mv2120_button_data = ;
static struct platform_device mv2120_button_device = ;
static unsigned int mv2120_mpp_modes[] __initdata = ;
static struct i2c_board_info __initdata mv2120_i2c_rtc = ;
static struct gpio_led mv2120_led_pins[] = ;
static struct gpio_led_platform_data mv2120_led_data = ;
static struct platform_device mv2120_leds = ;
static void mv2120_power_off(void)
static void __init mv2120_init(void)
MACHINE_START(MV2120, "HP Media Vault mv2120")
.boot_params	= 0x00000100,
.init_machine	= mv2120_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32
MACHINE_END
