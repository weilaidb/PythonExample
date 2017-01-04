static const int apf9328_pins[] __initconst = ;
static struct resource flash_resource = ;
static struct physmap_flash_data apf9328_flash_data = ;
static struct platform_device apf9328_flash_device = ;
static struct dm9000_plat_data dm9000_setup = ;
static struct resource dm9000_resources[] = ;
static struct platform_device dm9000x_device = ;
static const struct imxuart_platform_data uart0_pdata __initconst = ;
static const struct imxuart_platform_data uart1_pdata __initconst = ;
static struct platform_device *devices[] __initdata = ;
static void __init apf9328_init(void)
static void __init apf9328_timer_init(void)
static struct sys_timer apf9328_timer = ;
MACHINE_START(APF9328, "Armadeus APF9328")
.map_io       = mx1_map_io,
.init_early   = imx1_init_early,
.init_irq     = mx1_init_irq,
.timer        = &apf9328_timer,
.init_machine = apf9328_init,
MACHINE_END
