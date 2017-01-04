static void __init nuc932evb_map_io(void)
static void __init nuc932evb_init(void)
MACHINE_START(NUC932EVB, "NUC932EVB")
.boot_params	= 0,
.map_io		= nuc932evb_map_io,
.init_irq	= nuc93x_init_irq,
.init_machine	= nuc932evb_init,
.timer		= &nuc93x_timer,
MACHINE_END
