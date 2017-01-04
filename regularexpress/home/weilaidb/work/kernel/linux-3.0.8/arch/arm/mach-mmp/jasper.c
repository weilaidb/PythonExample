#define JASPER_NR_IRQS		(IRQ_BOARD_START + 48)
static unsigned long jasper_pin_config[] __initdata = ;
static struct regulator_consumer_supply max8649_supply[] = ;
static struct regulator_init_data max8649_init_data = ;
static struct max8649_platform_data jasper_max8649_info = ;
static struct max8925_backlight_pdata jasper_backlight_data = ;
static struct max8925_power_pdata jasper_power_data = ;
static struct max8925_platform_data jasper_max8925_info = ;
static struct i2c_board_info jasper_twsi1_info[] = ;
static struct sdhci_pxa_platdata mmp2_sdh_platdata_mmc0 = ;
static void __init jasper_init(void)
MACHINE_START(MARVELL_JASPER, "Jasper Development Platform")
.map_io		= mmp_map_io,
.nr_irqs	= JASPER_NR_IRQS,
.init_irq       = mmp2_init_irq,
.timer          = &mmp2_timer,
.init_machine   = jasper_init,
MACHINE_END
