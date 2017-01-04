static void __init nuc910evb_map_io(void)
static void __init nuc910evb_init(void)
MACHINE_START(W90P910EVB, "W90P910EVB")
.boot_params	= 0,
.map_io		= nuc910evb_map_io,
.init_irq	= nuc900_init_irq,
.init_machine	= nuc910evb_init,
.timer		= &nuc900_timer,
MACHINE_END
