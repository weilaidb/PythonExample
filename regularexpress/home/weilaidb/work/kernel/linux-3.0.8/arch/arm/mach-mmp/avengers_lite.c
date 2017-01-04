static unsigned long avengers_lite_pin_config_V16F[] __initdata = ;
static void __init avengers_lite_init(void)
MACHINE_START(AVENGERS_LITE, "PXA168 Avengers lite Development Platform")
.map_io		= mmp_map_io,
.init_irq       = pxa168_init_irq,
.timer          = &pxa168_timer,
.init_machine   = avengers_lite_init,
MACHINE_END
