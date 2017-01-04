MACHINE_START(H7201, "Hynix GMS30C7201")
.boot_params	= 0xc0001000,
.map_io		= h720x_map_io,
.init_irq	= h720x_init_irq,
.timer		= &h7201_timer,
MACHINE_END
