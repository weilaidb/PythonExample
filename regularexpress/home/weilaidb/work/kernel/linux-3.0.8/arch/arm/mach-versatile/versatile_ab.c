MACHINE_START(VERSATILE_AB, "ARM-Versatile AB")
.boot_params	= 0x00000100,
.map_io		= versatile_map_io,
.init_early	= versatile_init_early,
.init_irq	= versatile_init_irq,
.timer		= &versatile_timer,
.init_machine	= versatile_init,
MACHINE_END
