MACHINE_START(EBSA285, "EBSA285")
.boot_params	= 0x00000100,
.video_start	= 0x000a0000,
.video_end	= 0x000bffff,
.map_io		= footbridge_map_io,
.init_irq	= footbridge_init_irq,
.timer		= &footbridge_timer,
MACHINE_END
