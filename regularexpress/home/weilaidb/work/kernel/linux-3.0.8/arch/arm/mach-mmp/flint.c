#define FLINT_NR_IRQS	(IRQ_BOARD_START + 48)
static unsigned long flint_pin_config[] __initdata = ;
static struct smc91x_platdata flint_smc91x_info = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static void __init flint_init(void)
MACHINE_START(FLINT, "Flint Development Platform")
.map_io		= mmp_map_io,
.nr_irqs	= FLINT_NR_IRQS,
.init_irq       = mmp2_init_irq,
.timer          = &mmp2_timer,
.init_machine   = flint_init,
MACHINE_END
