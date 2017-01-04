static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct platform_device *devices[] __initdata = ;
extern struct sys_timer msm_timer;
static void __init msm7x2x_init_irq(void)
static void __init msm7x2x_init(void)
static void __init msm7x2x_map_io(void)
MACHINE_START(MSM7X27_SURF, "QCT MSM7x27 SURF")
.boot_params	= PLAT_PHYS_OFFSET + 0x100,
.map_io		= msm7x2x_map_io,
.init_irq	= msm7x2x_init_irq,
.init_machine	= msm7x2x_init,
.timer		= &msm_timer,
MACHINE_END
MACHINE_START(MSM7X27_FFA, "QCT MSM7x27 FFA")
.boot_params	= PLAT_PHYS_OFFSET + 0x100,
.map_io		= msm7x2x_map_io,
.init_irq	= msm7x2x_init_irq,
.init_machine	= msm7x2x_init,
.timer		= &msm_timer,
MACHINE_END
MACHINE_START(MSM7X25_SURF, "QCT MSM7x25 SURF")
.boot_params	= PLAT_PHYS_OFFSET + 0x100,
.map_io		= msm7x2x_map_io,
.init_irq	= msm7x2x_init_irq,
.init_machine	= msm7x2x_init,
.timer		= &msm_timer,
MACHINE_END
MACHINE_START(MSM7X25_FFA, "QCT MSM7x25 FFA")
.boot_params	= PLAT_PHYS_OFFSET + 0x100,
.map_io		= msm7x2x_map_io,
.init_irq	= msm7x2x_init_irq,
.init_machine	= msm7x2x_init,
.timer		= &msm_timer,
MACHINE_END
