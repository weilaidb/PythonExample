static void __init csb637_init_early(void)
static void __init csb637_init_irq(void)
static struct at91_eth_data __initdata csb637_eth_data = ;
static struct at91_usbh_data __initdata csb637_usbh_data = ;
static struct at91_udc_data __initdata csb637_udc_data = ;
#define CSB_FLASH_BASE	AT91_CHIPSELECT_0
#define CSB_FLASH_SIZE	SZ_16M
static struct mtd_partition csb_flash_partitions[] = ;
static struct physmap_flash_data csb_flash_data = ;
static struct resource csb_flash_resources[] = ;
static struct platform_device csb_flash = ;
static struct gpio_led csb_leds[] = ;
static void __init csb637_board_init(void)
MACHINE_START(CSB637, "Cogent CSB637")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= csb637_init_early,
.init_irq	= csb637_init_irq,
.init_machine	= csb637_board_init,
MACHINE_END
