#define UNIVERSAL_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define UNIVERSAL_ULCON_DEFAULT	S3C2410_LCON_CS8
#define UNIVERSAL_UFCON_DEFAULT	(S3C2410_UFCON_FIFOMODE |	\
S5PV210_UFCON_TXTRIG256 |	\
S5PV210_UFCON_RXTRIG256)
static struct s3c2410_uartcfg universal_uartcfgs[] __initdata = ;
static struct regulator_consumer_supply max8952_consumer =
REGULATOR_SUPPLY("vddarm", NULL);
static struct max8952_platform_data universal_max8952_pdata __initdata = ;
static struct regulator_consumer_supply lp3974_buck1_consumer =
REGULATOR_SUPPLY("vddint", NULL);
static struct regulator_consumer_supply lp3974_buck2_consumer =
REGULATOR_SUPPLY("vddg3d", NULL);
static struct regulator_init_data lp3974_buck1_data = ;
static struct regulator_init_data lp3974_buck2_data = ;
static struct regulator_init_data lp3974_buck3_data = ;
static struct regulator_init_data lp3974_buck4_data = ;
static struct regulator_init_data lp3974_ldo2_data = ;
static struct regulator_init_data lp3974_ldo3_data = ;
static struct regulator_init_data lp3974_ldo4_data = ;
static struct regulator_init_data lp3974_ldo5_data = ;
static struct regulator_init_data lp3974_ldo6_data = ;
static struct regulator_init_data lp3974_ldo7_data = ;
static struct regulator_init_data lp3974_ldo8_data = ;
static struct regulator_init_data lp3974_ldo9_data = ;
static struct regulator_init_data lp3974_ldo10_data = ;
static struct regulator_init_data lp3974_ldo11_data = ;
static struct regulator_init_data lp3974_ldo12_data = ;
static struct regulator_init_data lp3974_ldo13_data = ;
static struct regulator_init_data lp3974_ldo14_data = ;
static struct regulator_init_data lp3974_ldo15_data = ;
static struct regulator_init_data lp3974_ldo16_data = ;
static struct regulator_init_data lp3974_ldo17_data = ;
static struct regulator_init_data lp3974_32khz_ap_data = ;
static struct regulator_init_data lp3974_32khz_cp_data = ;
static struct regulator_init_data lp3974_vichg_data = ;
static struct regulator_init_data lp3974_esafeout1_data = ;
static struct regulator_init_data lp3974_esafeout2_data = ;
static struct max8998_regulator_data lp3974_regulators[] = ;
static struct max8998_platform_data universal_lp3974_pdata = ;
static struct i2c_board_info i2c5_devs[] __initdata = ;
static struct gpio_keys_button universal_gpio_keys_tables[] = ;
static struct gpio_keys_platform_data universal_gpio_keys_data = ;
static struct platform_device universal_gpio_keys = ;
static struct s3c_sdhci_platdata universal_hsmmc0_data __initdata = ;
static struct regulator_consumer_supply mmc0_supplies[] = ;
static struct regulator_init_data mmc0_fixed_voltage_init_data = ;
static struct fixed_voltage_config mmc0_fixed_voltage_config = ;
static struct platform_device mmc0_fixed_voltage = ;
static struct s3c_sdhci_platdata universal_hsmmc2_data __initdata = ;
static struct s3c_sdhci_platdata universal_hsmmc3_data __initdata = ;
static void __init universal_sdhci_init(void)
static struct i2c_board_info i2c0_devs[] __initdata = ;
static struct i2c_board_info i2c1_devs[] __initdata = ;
static struct platform_device *universal_devices[] __initdata = ;
static void __init universal_map_io(void)
static void __init universal_machine_init(void)
MACHINE_START(UNIVERSAL_C210, "UNIVERSAL_C210")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= exynos4_init_irq,
.map_io		= universal_map_io,
.init_machine	= universal_machine_init,
.timer		= &exynos4_timer,
MACHINE_END
