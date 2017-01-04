static struct map_desc p720t_io_desc[] __initdata = ;
static void __init
fixup_p720t(struct machine_desc *desc, struct tag *tag,
char **cmdline, struct meminfo *mi)
static void __init p720t_map_io(void)
MACHINE_START(P720T, "ARM-Prospector720T")
.boot_params	= 0xc0000100,
.fixup		= fixup_p720t,
.map_io		= p720t_map_io,
.init_irq	= clps711x_init_irq,
.timer		= &clps711x_timer,
MACHINE_END
static int p720t_hw_init(void)
__initcall(p720t_hw_init);
