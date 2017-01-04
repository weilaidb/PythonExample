static void __init picotux200_init_early(void)
static void __init picotux200_init_irq(void)
static struct at91_eth_data __initdata picotux200_eth_data = ;
static struct at91_usbh_data __initdata picotux200_usbh_data = ;
static struct at91_mmc_data __initdata picotux200_mmc_data = ;
#define PICOTUX200_FLASH_BASE	AT91_CHIPSELECT_0
#define PICOTUX200_FLASH_SIZE	SZ_4M
static struct physmap_flash_data picotux200_flash_data = ;
static struct resource picotux200_flash_resource = ;
static struct platform_device picotux200_flash = ;
static void __init picotux200_board_init(void)
MACHINE_START(PICOTUX2XX, "picotux 200")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= picotux200_init_early,
.init_irq	= picotux200_init_irq,
.init_machine	= picotux200_board_init,
MACHINE_END
