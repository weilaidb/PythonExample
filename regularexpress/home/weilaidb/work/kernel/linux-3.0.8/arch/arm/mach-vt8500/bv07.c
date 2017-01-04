static void __iomem *pmc_hiber;
static struct platform_device *devices[] __initdata = ;
static void vt8500_power_off(void)
void __init bv07_init(void)
MACHINE_START(BV07, "Benign BV07 Mini Netbook")
.boot_params	= 0x00000100,
.reserve	= vt8500_reserve_mem,
.map_io		= vt8500_map_io,
.init_irq	= vt8500_init_irq,
.timer		= &vt8500_timer,
.init_machine	= bv07_init,
MACHINE_END
