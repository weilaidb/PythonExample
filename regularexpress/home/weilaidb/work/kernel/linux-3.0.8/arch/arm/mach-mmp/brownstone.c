#define BROWNSTONE_NR_IRQS	(IRQ_BOARD_START + 40)
#define GPIO_5V_ENABLE		(89)
static unsigned long brownstone_pin_config[] __initdata = ;
static struct regulator_consumer_supply max8649_supply[] = ;
static struct regulator_init_data max8649_init_data = ;
static struct max8649_platform_data brownstone_max8649_info = ;
static struct regulator_consumer_supply brownstone_v_5vp_supplies[] = ;
static struct regulator_init_data brownstone_v_5vp_data = ;
static struct fixed_voltage_config brownstone_v_5vp = ;
static struct platform_device brownstone_v_5vp_device = ;
static struct max8925_platform_data brownstone_max8925_info = ;
static struct i2c_board_info brownstone_twsi1_info[] = ;
static struct sdhci_pxa_platdata mmp2_sdh_platdata_mmc0 = ;
static void __init brownstone_init(void)
MACHINE_START(BROWNSTONE, "Brownstone Development Platform")
.map_io		= mmp_map_io,
.nr_irqs	= BROWNSTONE_NR_IRQS,
.init_irq	= mmp2_init_irq,
.timer		= &mmp2_timer,
.init_machine	= brownstone_init,
MACHINE_END
