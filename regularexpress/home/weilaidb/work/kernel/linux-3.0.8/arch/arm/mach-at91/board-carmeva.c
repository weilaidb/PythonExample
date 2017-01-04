static void __init carmeva_init_early(void)
static void __init carmeva_init_irq(void)
static struct at91_eth_data __initdata carmeva_eth_data = ;
static struct at91_usbh_data __initdata carmeva_usbh_data = ;
static struct at91_udc_data __initdata carmeva_udc_data = ;
static struct at91_mmc_data __initdata carmeva_mmc_data = ;
static struct spi_board_info carmeva_spi_devices[] = ;
static struct gpio_led carmeva_leds[] = ;
static void __init carmeva_board_init(void)
MACHINE_START(CARMEVA, "Carmeva")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= carmeva_init_early,
.init_irq	= carmeva_init_irq,
.init_machine	= carmeva_board_init,
MACHINE_END
