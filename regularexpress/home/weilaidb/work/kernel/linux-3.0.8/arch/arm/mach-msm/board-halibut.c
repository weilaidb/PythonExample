static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct platform_device *devices[] __initdata = ;
extern struct sys_timer msm_timer;
static void __init halibut_init_irq(void)
static void __init halibut_init(void)
static void __init halibut_fixup(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
static void __init halibut_map_io(void)
MACHINE_START(HALIBUT, "Halibut Board (QCT SURF7200A)")
.boot_params	= 0x10000100,
.fixup		= halibut_fixup,
.map_io		= halibut_map_io,
.init_irq	= halibut_init_irq,
.init_machine	= halibut_init,
.timer		= &msm_timer,
MACHINE_END
