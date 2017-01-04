static struct resource flash_resource = ;
static struct physmap_flash_data scb_flash_data = ;
static struct platform_device scb_flash_device = ;
static struct dm9000_plat_data dm9000_platdata = ;
static struct resource dm9000x_resources[] = ;
static struct platform_device dm9000x_device = ;
static const int mxc_uart1_pins[] = ;
static int uart1_mxc_init(struct platform_device *pdev)
static void uart1_mxc_exit(struct platform_device *pdev)
static const struct imxuart_platform_data uart_pdata __initconst = ;
static struct platform_device *devices[] __initdata = ;
static void __init scb9328_init(void)
static void __init scb9328_timer_init(void)
static struct sys_timer scb9328_timer = ;
MACHINE_START(SCB9328, "Synertronixx scb9328")
.boot_params = 0x08000100,
.map_io = mx1_map_io,
.init_early = imx1_init_early,
.init_irq = mx1_init_irq,
.timer = &scb9328_timer,
.init_machine = scb9328_init,
MACHINE_END
