static struct map_desc cdb89712_io_desc[] __initdata = ;
static void __init cdb89712_map_io(void)
MACHINE_START(CDB89712, "Cirrus-CDB89712")
.boot_params	= 0xc0000100,
.map_io		= cdb89712_map_io,
.init_irq	= clps711x_init_irq,
.timer		= &clps711x_timer,
MACHINE_END
