static void __init flexibity_init_early(void)
static void __init flexibity_init_irq(void)
static struct at91_usbh_data __initdata flexibity_usbh_data = ;
static struct at91_udc_data __initdata flexibity_udc_data = ;
static struct spi_board_info flexibity_spi_devices[] = ;
static struct at91_mmc_data __initdata flexibity_mmc_data = ;
static struct gpio_led flexibity_leds[] = ;
static void __init flexibity_board_init(void)
MACHINE_START(FLEXIBITY, "Flexibity Connect")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= flexibity_init_early,
.init_irq	= flexibity_init_irq,
.init_machine	= flexibity_board_init,
MACHINE_END
