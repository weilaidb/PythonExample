static struct flash_platform_data gateway7001_flash_data = ;
static struct resource gateway7001_flash_resource = ;
static struct platform_device gateway7001_flash = ;
static struct resource gateway7001_uart_resource = ;
static struct plat_serial8250_port gateway7001_uart_data[] = ;
static struct platform_device gateway7001_uart = ;
static struct platform_device *gateway7001_devices[] __initdata = ;
static void __init gateway7001_init(void)
MACHINE_START(GATEWAY7001, "Gateway 7001 AP")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= gateway7001_init,
MACHINE_END
