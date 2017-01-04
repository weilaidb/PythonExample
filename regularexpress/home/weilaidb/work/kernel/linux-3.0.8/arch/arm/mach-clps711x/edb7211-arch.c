extern void edb7211_map_io(void);
static void __init edb7211_reserve(void)
static void __init
fixup_edb7211(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
MACHINE_START(EDB7211, "CL-EDB7211 (EP7211 eval board)")
.boot_params	= 0xc0020100,
.fixup		= fixup_edb7211,
.map_io		= edb7211_map_io,
.reserve	= edb7211_reserve,
.init_irq	= clps711x_init_irq,
.timer		= &clps711x_timer,
MACHINE_END
