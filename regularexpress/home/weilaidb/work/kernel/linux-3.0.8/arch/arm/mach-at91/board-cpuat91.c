static struct gpio_led cpuat91_leds[] = ;
static void __init cpuat91_init_early(void)
static void __init cpuat91_init_irq(void)
static struct at91_eth_data __initdata cpuat91_eth_data = ;
static struct at91_usbh_data __initdata cpuat91_usbh_data = ;
static struct at91_udc_data __initdata cpuat91_udc_data = ;
static struct at91_mmc_data __initdata cpuat91_mmc_data = ;
static struct physmap_flash_data cpuat91_flash_data = ;
static struct resource cpuat91_flash_resource = ;
static struct platform_device cpuat91_norflash = ;
struct platdata_mtd_ram at91_sram_pdata = ;
static struct resource at91_sram_resource[] = ;
static struct platform_device at91_sram = ;
static struct platform_device *platform_devices[] __initdata = ;
static void __init cpuat91_board_init(void)
MACHINE_START(CPUAT91, "Eukrea")
.timer		= &at91rm9200_timer,
.map_io		= at91rm9200_map_io,
.init_early	= cpuat91_init_early,
.init_irq	= cpuat91_init_irq,
.init_machine	= cpuat91_board_init,
MACHINE_END
