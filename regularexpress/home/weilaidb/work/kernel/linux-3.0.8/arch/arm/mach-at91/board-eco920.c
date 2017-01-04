static void __init eco920_init_early(void)
static void __init eco920_init_irq(void)
static struct at91_eth_data __initdata eco920_eth_data = ;
static struct at91_usbh_data __initdata eco920_usbh_data = ;
static struct at91_udc_data __initdata eco920_udc_data = ;
static struct at91_mmc_data __initdata eco920_mmc_data = ;
static struct physmap_flash_data eco920_flash_data = ;
static struct resource eco920_flash_resource = ;
static struct platform_device eco920_flash = ;
static struct spi_board_info eco920_spi_devices[] = ;
static void __init eco920_board_init(void)
MACHINE_START(ECO920, "eco920")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= eco920_init_early,
.init_irq	= eco920_init_irq,
.init_machine	= eco920_board_init,
MACHINE_END
