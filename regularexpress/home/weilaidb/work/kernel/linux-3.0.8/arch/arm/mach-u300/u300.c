static void __init u300_reserve(void)
static void __init u300_init_machine(void)
#define MACH_U300_STRING "Ericsson AB U300 S25/S26/B25/B26 Prototype Board"
#define MACH_U300_STRING "Ericsson AB U330 S330/B330 Prototype Board"
#define MACH_U300_STRING "Ericsson AB U335 S335/B335 Prototype Board"
#define MACH_U300_STRING "Ericsson AB U365 S365/B365 Prototype Board"
MACHINE_START(U300, MACH_U300_STRING)
.boot_params	= BOOT_PARAMS_OFFSET,
.map_io		= u300_map_io,
.reserve	= u300_reserve,
.init_irq	= u300_init_irq,
.timer		= &u300_timer,
.init_machine	= u300_init_machine,
MACHINE_END
