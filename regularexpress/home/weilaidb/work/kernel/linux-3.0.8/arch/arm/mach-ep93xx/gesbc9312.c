static struct ep93xx_eth_data __initdata gesbc9312_eth_data = ;
static void __init gesbc9312_init_machine(void)
MACHINE_START(GESBC9312, "Glomation GESBC-9312-sx")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= gesbc9312_init_machine,
MACHINE_END
