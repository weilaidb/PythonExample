static void __init csb337_init_early(void)
static void __init csb337_init_irq(void)
static struct at91_eth_data __initdata csb337_eth_data = ;
static struct at91_usbh_data __initdata csb337_usbh_data = ;
static struct at91_udc_data __initdata csb337_udc_data = ;
static struct i2c_board_info __initdata csb337_i2c_devices[] = ;
static struct at91_cf_data __initdata csb337_cf_data = ;
static struct at91_mmc_data __initdata csb337_mmc_data = ;
static struct spi_board_info csb337_spi_devices[] = ;
#define CSB_FLASH_BASE	AT91_CHIPSELECT_0
#define CSB_FLASH_SIZE	SZ_8M
static struct mtd_partition csb_flash_partitions[] = ;
static struct physmap_flash_data csb_flash_data = ;
static struct resource csb_flash_resources[] = ;
static struct platform_device csb_flash = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button csb300_buttons[] = ;
static struct gpio_keys_platform_data csb300_button_data = ;
static struct platform_device csb300_button_device = ;
static void __init csb300_add_device_buttons(void)
static void __init csb300_add_device_buttons(void)
static struct gpio_led csb_leds[] = ;
static void __init csb337_board_init(void)
MACHINE_START(CSB337, "Cogent CSB337")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= csb337_init_early,
.init_irq	= csb337_init_irq,
.init_machine	= csb337_board_init,
MACHINE_END
