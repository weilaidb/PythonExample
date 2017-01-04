static struct ep93xx_eth_data __initdata adssphere_eth_data = ;
static void __init adssphere_init_machine(void)
MACHINE_START(ADSSPHERE, "ADS Sphere board")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= adssphere_init_machine,
MACHINE_END
