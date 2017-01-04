static struct flash_platform_data vulcan_flash_data = ;
static struct resource vulcan_flash_resource = ;
static struct platform_device vulcan_flash = ;
static struct platdata_mtd_ram vulcan_sram_data = ;
static struct resource vulcan_sram_resource = ;
static struct platform_device vulcan_sram = ;
static struct resource vulcan_uart_resources[] = ;
static struct plat_serial8250_port vulcan_uart_data[] = ;
static struct platform_device vulcan_uart = ;
static struct eth_plat_info vulcan_plat_eth[] = ;
static struct platform_device vulcan_eth[] = ;
static struct resource vulcan_max6369_resource = ;
static struct platform_device vulcan_max6369 = ;
static struct w1_gpio_platform_data vulcan_w1_gpio_pdata = ;
static struct platform_device vulcan_w1_gpio = ;
static struct platform_device *vulcan_devices[] __initdata = ;
static void __init vulcan_init(void)
MACHINE_START(ARCOM_VULCAN, "Arcom/Eurotech Vulcan")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= vulcan_init,
MACHINE_END
