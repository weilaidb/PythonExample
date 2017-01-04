static void __init nuc960evb_map_io(void)
static void __init nuc960evb_init(void)
MACHINE_START(W90N960EVB, "W90N960EVB")
.boot_params	= 0,
.map_io		= nuc960evb_map_io,
.init_irq	= nuc900_init_irq,
.init_machine	= nuc960evb_init,
.timer		= &nuc900_timer,
MACHINE_END
