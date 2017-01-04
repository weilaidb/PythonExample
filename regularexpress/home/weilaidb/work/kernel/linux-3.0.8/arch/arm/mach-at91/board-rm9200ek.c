static void __init ek_init_early(void)
static void __init ek_init_irq(void)
static struct at91_eth_data __initdata ek_eth_data = ;
static struct at91_usbh_data __initdata ek_usbh_data = ;
static struct at91_udc_data __initdata ek_udc_data = ;
static struct at91_mmc_data __initdata ek_mmc_data = ;
static struct spi_board_info ek_spi_devices[] = ;
static struct i2c_board_info __initdata ek_i2c_devices[] = ;
#define EK_FLASH_BASE	AT91_CHIPSELECT_0
#define EK_FLASH_SIZE	SZ_2M
static struct physmap_flash_data ek_flash_data = ;
static struct resource ek_flash_resource = ;
static struct platform_device ek_flash = ;
static struct gpio_led ek_leds[] = ;
static void __init ek_board_init(void)
MACHINE_START(AT91RM9200EK, "Atmel AT91RM9200-EK")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= ek_init_early,
.init_irq	= ek_init_irq,
.init_machine	= ek_board_init,
MACHINE_END
