MACHINE_START(PERSONAL_SERVER, "Compaq-PersonalServer")
.boot_params	= 0x00000100,
.map_io		= footbridge_map_io,
.init_irq	= footbridge_init_irq,
.timer		= &footbridge_timer,
MACHINE_END
