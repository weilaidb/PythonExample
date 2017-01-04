#define AQUILA_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define AQUILA_ULCON_DEFAULT	S3C2410_LCON_CS8
#define AQUILA_UFCON_DEFAULT	S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg aquila_uartcfgs[] __initdata = ;
static struct s3c_fb_pd_win aquila_fb_win0 = ;
static struct s3c_fb_pd_win aquila_fb_win1 = ;
static struct s3c_fb_platdata aquila_lcd_pdata __initdata = ;
#if defined(CONFIG_REGULATOR_MAX8998) || defined(CONFIG_REGULATOR_MAX8998_MODULE)
static struct regulator_init_data aquila_ldo2_data = ;
static struct regulator_init_data aquila_ldo3_data = ;
static struct regulator_init_data aquila_ldo4_data = ;
static struct regulator_init_data aquila_ldo5_data = ;
static struct regulator_init_data aquila_ldo6_data = ;
static struct regulator_init_data aquila_ldo7_data = ;
static struct regulator_init_data aquila_ldo8_data = ;
static struct regulator_init_data aquila_ldo9_data = ;
static struct regulator_init_data aquila_ldo10_data = ;
static struct regulator_init_data aquila_ldo11_data = ;
static struct regulator_init_data aquila_ldo12_data = ;
static struct regulator_init_data aquila_ldo13_data = ;
static struct regulator_init_data aquila_ldo14_data = ;
static struct regulator_init_data aquila_ldo15_data = ;
static struct regulator_init_data aquila_ldo16_data = ;
static struct regulator_init_data aquila_ldo17_data = ;
static struct regulator_consumer_supply buck1_consumer =
REGULATOR_SUPPLY("vddarm", NULL);
static struct regulator_consumer_supply buck2_consumer =
REGULATOR_SUPPLY("vddint", NULL);
static struct regulator_init_data aquila_buck1_data = ;
static struct regulator_init_data aquila_buck2_data = ;
static struct regulator_init_data aquila_buck3_data = ;
static struct regulator_init_data aquila_buck4_data = ;
static struct max8998_regulator_data aquila_regulators[] = ;
static struct max8998_platform_data aquila_max8998_pdata = ;
static struct regulator_consumer_supply wm8994_fixed_voltage0_supplies[] = ;
static struct regulator_consumer_supply wm8994_fixed_voltage1_supplies[] = ;
static struct regulator_init_data wm8994_fixed_voltage0_init_data = ;
static struct regulator_init_data wm8994_fixed_voltage1_init_data = ;
static struct fixed_voltage_config wm8994_fixed_voltage0_config = ;
static struct fixed_voltage_config wm8994_fixed_voltage1_config = ;
static struct platform_device wm8994_fixed_voltage0 = ;
static struct platform_device wm8994_fixed_voltage1 = ;
static struct regulator_consumer_supply wm8994_avdd1_supply =
REGULATOR_SUPPLY("AVDD1", "5-001a");
static struct regulator_consumer_supply wm8994_dcvdd_supply =
REGULATOR_SUPPLY("DCVDD", "5-001a");
static struct regulator_init_data wm8994_ldo1_data = ;
static struct regulator_init_data wm8994_ldo2_data = ;
static struct wm8994_pdata wm8994_platform_data = ;
#define AP_I2C_GPIO_PMIC_BUS_4	4
static struct i2c_gpio_platform_data aquila_i2c_gpio_pmic_data = ;
static struct platform_device aquila_i2c_gpio_pmic = ;
static struct i2c_board_info i2c_gpio_pmic_devs[] __initdata = ;
#define AP_I2C_GPIO_BUS_5	5
static struct i2c_gpio_platform_data aquila_i2c_gpio5_data = ;
static struct platform_device aquila_i2c_gpio5 = ;
static struct i2c_board_info i2c_gpio5_devs[] __initdata = ;
static struct gpio_keys_button aquila_gpio_keys_table[] = ;
static struct gpio_keys_platform_data aquila_gpio_keys_data = ;
static struct platform_device aquila_device_gpiokeys = ;
static void __init aquila_pmic_init(void)
static struct s3c_sdhci_platdata aquila_hsmmc0_data __initdata = ;
static struct s3c_sdhci_platdata aquila_hsmmc1_data __initdata = ;
#define AQUILA_EXT_FLASH_EN	S5PV210_MP05(4)
#define AQUILA_EXT_FLASH_CD	S5PV210_GPH3(4)
static struct s3c_sdhci_platdata aquila_hsmmc2_data __initdata = ;
static void aquila_setup_sdhci(void)
;
static struct platform_device *aquila_devices[] __initdata = ;
static void __init aquila_sound_init(void)
static void __init aquila_map_io(void)
static void __init aquila_machine_init(void)
MACHINE_START(AQUILA, "Aquila")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= s5pv210_init_irq,
.map_io		= aquila_map_io,
.init_machine	= aquila_machine_init,
.timer		= &s5p_timer,
MACHINE_END
