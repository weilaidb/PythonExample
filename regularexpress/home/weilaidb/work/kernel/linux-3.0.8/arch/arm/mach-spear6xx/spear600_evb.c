static struct amba_device *amba_devs[] __initdata = ;
static struct platform_device *plat_devs[] __initdata = ;
static void __init spear600_evb_init(void)
MACHINE_START(SPEAR600, "ST-SPEAR600-EVB")
.boot_params	=	0x00000100,
.map_io		=	spear6xx_map_io,
.init_irq	=	spear6xx_init_irq,
.timer		=	&spear6xx_timer,
.init_machine	=	spear600_evb_init,
MACHINE_END
