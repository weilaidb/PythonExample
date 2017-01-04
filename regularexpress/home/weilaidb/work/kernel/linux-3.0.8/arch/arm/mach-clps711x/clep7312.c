static void __init
fixup_clep7312(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
MACHINE_START(CLEP7212, "Cirrus Logic 7212/7312")
.boot_params	= 0xc0000100,
.fixup		= fixup_clep7312,
.map_io		= clps711x_map_io,
.init_irq	= clps711x_init_irq,
.timer		= &clps711x_timer,
MACHINE_END
