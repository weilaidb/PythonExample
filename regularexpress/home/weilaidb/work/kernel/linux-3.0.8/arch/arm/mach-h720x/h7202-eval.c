static struct resource cirrus_resources[] = ;
static struct platform_device cirrus_device = ;
static struct platform_device *devices[] __initdata = ;
static void __init init_eval_h7202(void)
MACHINE_START(H7202, "Hynix HMS30C7202")
.boot_params	= 0x40000100,
.map_io		= h720x_map_io,
.init_irq	= h7202_init_irq,
.timer		= &h7202_timer,
.init_machine	= init_eval_h7202,
MACHINE_END
