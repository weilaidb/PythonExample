static void __init nuc950evb_map_io(void)
static void __init nuc950evb_init(void)
MACHINE_START(W90P950EVB, "W90P950EVB")
.boot_params	= 0,
.map_io		= nuc950evb_map_io,
.init_irq	= nuc900_init_irq,
.init_machine	= nuc950evb_init,
.timer		= &nuc900_timer,
MACHINE_END
