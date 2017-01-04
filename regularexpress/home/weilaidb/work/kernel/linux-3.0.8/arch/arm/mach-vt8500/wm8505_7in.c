static void __iomem *pmc_hiber;
static struct platform_device *devices[] __initdata = ;
static void vt8500_power_off(void)
void __init wm8505_7in_init(void)
MACHINE_START(WM8505_7IN_NETBOOK, "WM8505 7-inch generic netbook")
.boot_params	= 0x00000100,
.reserve	= wm8505_reserve_mem,
.map_io		= wm8505_map_io,
.init_irq	= wm8505_init_irq,
.timer		= &vt8500_timer,
.init_machine	= wm8505_7in_init,
MACHINE_END
