#define ZOOM3_EHCI_RESET_GPIO		64
static void __init omap_zoom_init_early(void)
static struct omap_board_mux board_mux[] __initdata = ;
static struct mtd_partition zoom_nand_partitions[] = ;
static const struct usbhs_omap_board_data usbhs_bdata __initconst = ;
static void __init omap_zoom_init(void)
MACHINE_START(OMAP_ZOOM2, "OMAP Zoom2 board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap_zoom_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_zoom_init,
.timer		= &omap_timer,
MACHINE_END
MACHINE_START(OMAP_ZOOM3, "OMAP Zoom3 board")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= omap_zoom_init_early,
.init_irq	= omap_init_irq,
.init_machine	= omap_zoom_init,
.timer		= &omap_timer,
MACHINE_END
