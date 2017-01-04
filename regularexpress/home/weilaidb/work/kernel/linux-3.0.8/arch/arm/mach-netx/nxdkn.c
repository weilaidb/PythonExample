static struct netxeth_platform_data eth0_platform_data = ;
static struct platform_device nxdkn_eth0_device = ;
static struct netxeth_platform_data eth1_platform_data = ;
static struct platform_device nxdkn_eth1_device = ;
static struct resource netx_uart0_resources[] = ;
static struct platform_device netx_uart0_device = ;
static struct platform_device *devices[] __initdata = ;
static void __init nxdkn_init(void)
MACHINE_START(NXDKN, "Hilscher nxdkn")
.boot_params	= 0x80000100,
.map_io		= netx_map_io,
.init_irq	= netx_init_irq,
.timer		= &netx_timer,
.init_machine	= nxdkn_init,
MACHINE_END
