#define DNS323_GPIO_LED_RIGHT_AMBER	1
#define DNS323_GPIO_LED_LEFT_AMBER	2
#define DNS323_GPIO_SYSTEM_UP		3
#define DNS323_GPIO_LED_POWER1		4
#define DNS323_GPIO_LED_POWER2		5
#define DNS323_GPIO_OVERTEMP		6
#define DNS323_GPIO_RTC			7
#define DNS323_GPIO_POWER_OFF		8
#define DNS323_GPIO_KEY_POWER		9
#define DNS323_GPIO_KEY_RESET		10
#define DNS323C_GPIO_KEY_POWER		1
#define DNS323C_GPIO_POWER_OFF		2
#define DNS323C_GPIO_LED_RIGHT_AMBER	8
#define DNS323C_GPIO_LED_LEFT_AMBER	9
#define DNS323C_GPIO_LED_POWER		17
#define DNS323C_GPIO_FAN_BIT1		18
#define DNS323C_GPIO_FAN_BIT0		19
enum ;
static int __init dns323_pci_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci dns323_pci __initdata = ;
static int __init dns323_pci_init(void)
subsys_initcall(dns323_pci_init);
#define DNS323_NOR_BOOT_BASE 0xf4000000
#define DNS323_NOR_BOOT_SIZE SZ_8M
static struct mtd_partition dns323_partitions[] = ;
static struct physmap_flash_data dns323_nor_flash_data = ;
static struct resource dns323_nor_flash_resource = ;
static struct platform_device dns323_nor_flash = ;
static struct mv643xx_eth_platform_data dns323_eth_data = ;
static int __init dns323_parse_hex_nibble(char n)
static int __init dns323_parse_hex_byte(const char *b)
static int __init dns323_read_mac_addr(void)
#define ORION_BLINK_HALF_PERIOD 100
static int dns323_gpio_blink_set(unsigned gpio, int state,
unsigned long *delay_on, unsigned long *delay_off)
static struct gpio_led dns323ab_leds[] = ;
static struct gpio_led dns323c_leds[] = ;
static struct gpio_led_platform_data dns323ab_led_data = ;
static struct gpio_led_platform_data dns323c_led_data = ;
static struct platform_device dns323_gpio_leds = ;
static struct gpio_keys_button dns323ab_buttons[] = ;
static struct gpio_keys_platform_data dns323ab_button_data = ;
static struct gpio_keys_button dns323c_buttons[] = ;
static struct gpio_keys_platform_data dns323c_button_data = ;
static struct platform_device dns323_button_device = ;
static struct mv_sata_platform_data dns323_sata_data = ;
static unsigned int dns323a_mpp_modes[] __initdata = ;
static unsigned int dns323b_mpp_modes[] __initdata = ;
static unsigned int dns323c_mpp_modes[] __initdata = ;
static struct i2c_board_info __initdata dns323ab_i2c_devices[] = ;
static struct i2c_board_info __initdata dns323c_i2c_devices[] = ;
static void dns323a_power_off(void)
static void dns323b_power_off(void)
static void dns323c_power_off(void)
static int dns323c_phy_fixup(struct phy_device *phy)
static int __init dns323_identify_rev(void)
static void __init dns323_init(void)
MACHINE_START(DNS323, "D-Link DNS-323")
.boot_params	= 0x00000100,
.init_machine	= dns323_init,
.map_io		= orion5x_map_io,
.init_early	= orion5x_init_early,
.init_irq	= orion5x_init_irq,
.timer		= &orion5x_timer,
.fixup		= tag_fixup_mem32,
MACHINE_END
