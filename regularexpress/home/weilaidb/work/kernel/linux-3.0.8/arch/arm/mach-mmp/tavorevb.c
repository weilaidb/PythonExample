static unsigned long tavorevb_pin_config[] __initdata = ;
static struct smc91x_platdata tavorevb_smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static void __init tavorevb_init(void)
MACHINE_START(TAVOREVB, "PXA910 Evaluation Board (aka TavorEVB)")
.map_io		= mmp_map_io,
.init_irq       = pxa910_init_irq,
.timer          = &pxa910_timer,
.init_machine   = tavorevb_init,
MACHINE_END
