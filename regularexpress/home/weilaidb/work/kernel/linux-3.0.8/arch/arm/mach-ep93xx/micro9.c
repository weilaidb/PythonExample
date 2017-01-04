static unsigned int __init micro9_detect_bootwidth(void)
static void __init micro9_register_flash(void)
static struct ep93xx_eth_data __initdata micro9_eth_data = ;
static void __init micro9_init_machine(void)
MACHINE_START(MICRO9, "Contec Micro9-High")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= micro9_init_machine,
MACHINE_END
MACHINE_START(MICRO9M, "Contec Micro9-Mid")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_ASYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= micro9_init_machine,
MACHINE_END
MACHINE_START(MICRO9L, "Contec Micro9-Lite")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_SYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= micro9_init_machine,
MACHINE_END
MACHINE_START(MICRO9S, "Contec Micro9-Slim")
.boot_params	= EP93XX_SDCE3_PHYS_BASE_ASYNC + 0x100,
.map_io		= ep93xx_map_io,
.init_irq	= ep93xx_init_irq,
.timer		= &ep93xx_timer,
.init_machine	= micro9_init_machine,
MACHINE_END
