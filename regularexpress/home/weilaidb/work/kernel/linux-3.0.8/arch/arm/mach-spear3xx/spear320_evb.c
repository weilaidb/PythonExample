static struct pmx_dev *pmx_devs[] = ;
static struct amba_device *amba_devs[] __initdata = ;
static struct platform_device *plat_devs[] __initdata = ;
static void __init spear320_evb_init(void)
MACHINE_START(SPEAR320, "ST-SPEAR320-EVB")
.boot_params	=	0x00000100,
.map_io		=	spear3xx_map_io,
.init_irq	=	spear3xx_init_irq,
.timer		=	&spear3xx_timer,
.init_machine	=	spear320_evb_init,
MACHINE_END
