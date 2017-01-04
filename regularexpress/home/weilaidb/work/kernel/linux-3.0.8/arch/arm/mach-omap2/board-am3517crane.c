#define GPIO_USB_POWER		35
#define GPIO_USB_NRESET		38
static struct omap_board_config_kernel am3517_crane_config[] __initdata = ;
static struct omap_board_mux board_mux[] __initdata = ;
#define board_mux	NULL
static void __init am3517_crane_init_early(void)
static struct usbhs_omap_board_data usbhs_bdata __initdata = ;
static void __init am3517_crane_init(void)
MACHINE_START(CRANEBOARD, "AM3517/05 CRANEBOARD")
.boot_params	= 0x80000100,
.reserve	= omap_reserve,
.map_io		= omap3_map_io,
.init_early	= am3517_crane_init_early,
.init_irq	= omap_init_irq,
.init_machine	= am3517_crane_init,
.timer		= &omap_timer,
MACHINE_END
