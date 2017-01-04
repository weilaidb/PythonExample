static void __init ek_init_early(void)
static void __init ek_init_irq(void)
static struct at91_usbh_data __initdata ek_usbh_data = ;
static struct at91_udc_data __initdata ek_udc_data = ;
static struct spi_board_info ek_spi_devices[] = ;
static struct at91_eth_data __initdata ek_macb_data = ;
static struct mtd_partition __initdata ek_nand_partition[] = ;
static struct mtd_partition * __init nand_partitions(int size, int *num_partitions)
static struct atmel_nand_data __initdata ek_nand_data = ;
static struct sam9_smc_config __initdata ek_nand_smc_config = ;
static void __init ek_add_device_nand(void)
static struct at91_mmc_data __initdata ek_mmc_data = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button ek_buttons[] = ;
static struct gpio_keys_platform_data ek_button_data = ;
static struct platform_device ek_button_device = ;
static void __init ek_add_device_buttons(void)
static void __init ek_add_device_buttons(void)
static struct gpio_led ek_leds[] = ;
static void __init ek_board_init(void)
MACHINE_START(QIL_A9260, "CALAO QIL_A9260")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= ek_init_early,
.init_irq	= ek_init_irq,
.init_machine	= ek_board_init,
MACHINE_END
