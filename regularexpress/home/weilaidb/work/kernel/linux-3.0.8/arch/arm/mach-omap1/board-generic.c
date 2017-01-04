static void __init omap_generic_init_irq(void)
static struct omap_usb_config generic1510_usb_config __initdata = ;
#if defined(CONFIG_ARCH_OMAP16XX)
static struct omap_usb_config generic1610_usb_config __initdata = ;
static struct omap_board_config_kernel generic_config[] __initdata = ;
static void __init omap_generic_init(void)
static void __init omap_generic_map_io(void)
MACHINE_START(OMAP_GENERIC, "Generic OMAP1510/1610/1710")
.boot_params	= 0x10000100,
.map_io		= omap_generic_map_io,
.reserve	= omap_reserve,
.init_irq	= omap_generic_init_irq,
.init_machine	= omap_generic_init,
.timer		= &omap_timer,
MACHINE_END
