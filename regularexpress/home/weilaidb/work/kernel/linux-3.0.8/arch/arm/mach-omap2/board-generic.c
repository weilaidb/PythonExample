static struct omap_board_config_kernel generic_config[] = ;
static void __init omap_generic_init_early(void)
static void __init omap_generic_init(void)
static void __init omap_generic_map_io(void)
MACHINE_START(OMAP_GENERIC, "Generic OMAP24xx")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap_generic_map_io,
.init_early	= omap_generic_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_generic_init,
.timer		= &omap_timer,
MACHINE_END
