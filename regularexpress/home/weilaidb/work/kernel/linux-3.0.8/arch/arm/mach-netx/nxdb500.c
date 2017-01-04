static struct clcd_panel qvga = ;
static inline int nxdb500_check(struct clcd_fb *fb, struct fb_var_screeninfo *var)
static int nxdb500_clcd_setup(struct clcd_fb *fb)
static struct clcd_board clcd_data = ;
static struct netxeth_platform_data eth0_platform_data = ;
static struct platform_device netx_eth0_device = ;
static struct netxeth_platform_data eth1_platform_data = ;
static struct platform_device netx_eth1_device = ;
static struct resource netx_uart0_resources[] = ;
static struct platform_device netx_uart0_device = ;
static struct resource netx_uart1_resources[] = ;
static struct platform_device netx_uart1_device = ;
static struct resource netx_uart2_resources[] = ;
static struct platform_device netx_uart2_device = ;
static struct platform_device *devices[] __initdata = ;
static void __init nxdb500_init(void)
MACHINE_START(NXDB500, "Hilscher nxdb500")
.boot_params	= 0x80000100,
.map_io		= netx_map_io,
.init_irq	= netx_init_irq,
.timer		= &netx_timer,
.init_machine	= nxdb500_init,
MACHINE_END
