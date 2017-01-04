extern int trout_init_mmc(unsigned int);
static struct platform_device *devices[] __initdata = ;
extern struct sys_timer msm_timer;
static void __init trout_init_irq(void)
static void __init trout_fixup(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
static void __init trout_init(void)
static struct map_desc trout_io_desc[] __initdata = ;
static void __init trout_map_io(void)
MACHINE_START(TROUT, "HTC Dream")
.boot_params	= 0x10000100,
.fixup		= trout_fixup,
.map_io		= trout_map_io,
.init_irq	= trout_init_irq,
.init_machine	= trout_init,
.timer		= &msm_timer,
MACHINE_END
