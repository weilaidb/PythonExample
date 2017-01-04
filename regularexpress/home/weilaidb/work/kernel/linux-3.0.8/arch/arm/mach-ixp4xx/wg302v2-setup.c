static struct flash_platform_data wg302v2_flash_data = ;
static struct resource wg302v2_flash_resource = ;
static struct platform_device wg302v2_flash = ;
static struct resource wg302v2_uart_resource = ;
static struct plat_serial8250_port wg302v2_uart_data[] = ;
static struct platform_device wg302v2_uart = ;
static struct platform_device *wg302v2_devices[] __initdata = ;
static void __init wg302v2_init(void)
MACHINE_START(WG302V2, "Netgear WG302 v2 / WAG302 v2")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= wg302v2_init,
MACHINE_END
