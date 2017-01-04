static struct map_desc autcpu12_io_desc[] __initdata = ;
void __init autcpu12_map_io(void)
MACHINE_START(AUTCPU12, "autronix autcpu12")
.boot_params	= 0xc0020000,
.map_io		= autcpu12_map_io,
.init_irq	= clps711x_init_irq,
.timer		= &clps711x_timer,
MACHINE_END
