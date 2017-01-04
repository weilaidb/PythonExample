static struct map_desc ceiva_io_desc[] __initdata = ;
static void __init ceiva_map_io(void)
MACHINE_START(CEIVA, "CEIVA/Polaroid Photo MAX Digital Picture Frame")
.boot_params	= 0xc0000100,
.map_io		= ceiva_map_io,
.init_irq	= clps711x_init_irq,
.timer		= &clps711x_timer,
MACHINE_END
