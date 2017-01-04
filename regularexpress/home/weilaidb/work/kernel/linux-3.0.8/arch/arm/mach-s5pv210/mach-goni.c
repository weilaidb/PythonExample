#define GONI_UCON_DEFAULT	(S3C2410_UCON_TXILEVEL |	\
S3C2410_UCON_RXILEVEL |	\
S3C2410_UCON_TXIRQMODE |	\
S3C2410_UCON_RXIRQMODE |	\
S3C2410_UCON_RXFIFO_TOI |	\
S3C2443_UCON_RXERR_IRQEN)
#define GONI_ULCON_DEFAULT	S3C2410_LCON_CS8
#define GONI_UFCON_DEFAULT	S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg goni_uartcfgs[] __initdata = ;
static struct s3c_fb_pd_win goni_fb_win0 = ;
static struct s3c_fb_platdata goni_lcd_pdata __initdata = ;
static int lcd_power_on(struct lcd_device *ld, int enable)
static int reset_lcd(struct lcd_device *ld)
static struct lcd_platform_data goni_lcd_platform_data = ;
#define LCD_BUS_NUM	3
static struct spi_board_info spi_board_info[] __initdata = ;
static struct spi_gpio_platform_data lcd_spi_gpio_data = ;
static struct platform_device goni_spi_gpio = ;
static uint32_t keymap[] __initdata = ;
static struct matrix_keymap_data keymap_data __initdata = ;
static struct samsung_keypad_platdata keypad_data __initdata = ;
static struct i2c_board_info i2c1_devs[] __initdata = ;
static void __init goni_radio_init(void)
static struct mxt_platform_data qt602240_platform_data = ;
static struct s3c2410_platform_i2c i2c2_data __initdata = ;
static struct i2c_board_info i2c2_devs[] __initdata = ;
static void __init goni_tsp_init(void)
#if defined(CONFIG_REGULATOR_MAX8998) || defined(CONFIG_REGULATOR_MAX8998_MODULE)
static struct regulator_consumer_supply goni_ldo3_consumers[] = ;
static struct regulator_consumer_supply goni_ldo5_consumers[] = ;
static struct regulator_consumer_supply goni_ldo8_consumers[] = ;
static struct regulator_consumer_supply goni_ldo11_consumers[] = ;
static struct regulator_consumer_supply goni_ldo13_consumers[] = ;
static struct regulator_consumer_supply goni_ldo14_consumers[] = ;
static struct regulator_init_data goni_ldo2_data = ;
static struct regulator_init_data goni_ldo3_data = ;
static struct regulator_init_data goni_ldo4_data = ;
static struct regulator_init_data goni_ldo5_data = ;
static struct regulator_init_data goni_ldo6_data = ;
static struct regulator_init_data goni_ldo7_data = ;
static struct regulator_init_data goni_ldo8_data = ;
static struct regulator_init_data goni_ldo9_data = ;
static struct regulator_init_data goni_ldo10_data = ;
static struct regulator_init_data goni_ldo11_data = ;
static struct regulator_init_data goni_ldo12_data = ;
static struct regulator_init_data goni_ldo13_data = ;
static struct regulator_init_data goni_ldo14_data = ;
static struct regulator_init_data goni_ldo15_data = ;
static struct regulator_init_data goni_ldo16_data = ;
static struct regulator_init_data goni_ldo17_data = ;
static struct regulator_consumer_supply buck1_consumer =
REGULATOR_SUPPLY("vddarm", NULL);
static struct regulator_consumer_supply buck2_consumer =
REGULATOR_SUPPLY("vddint", NULL);
static struct regulator_init_data goni_buck1_data = ;
static struct regulator_init_data goni_buck2_data = ;
static struct regulator_init_data goni_buck3_data = ;
static struct regulator_init_data goni_buck4_data = ;
static struct max8998_regulator_data goni_regulators[] = ;
static struct max8998_platform_data goni_max8998_pdata = ;
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
static struct i2c_gpio_platform_data goni_i2c_gpio_pmic_data = ;
static struct platform_device goni_i2c_gpio_pmic = ;
static struct i2c_board_info i2c_gpio_pmic_devs[] __initdata = ;
#define AP_I2C_GPIO_BUS_5	5
static struct i2c_gpio_platform_data goni_i2c_gpio5_data = ;
static struct platform_device goni_i2c_gpio5 = ;
static struct i2c_board_info i2c_gpio5_devs[] __initdata = ;
static struct gpio_keys_button goni_gpio_keys_table[] = ;
static struct gpio_keys_platform_data goni_gpio_keys_data = ;
static struct platform_device goni_device_gpiokeys = ;
static void __init goni_pmic_init(void)
static struct s3c_sdhci_platdata goni_hsmmc0_data __initdata = ;
static struct s3c_sdhci_platdata goni_hsmmc1_data __initdata = ;
#define GONI_EXT_FLASH_EN	S5PV210_MP05(4)
#define GONI_EXT_FLASH_CD	S5PV210_GPH3(4)
static struct s3c_sdhci_platdata goni_hsmmc2_data __initdata = ;
static struct regulator_consumer_supply mmc2_supplies[] = ;
static struct regulator_init_data mmc2_fixed_voltage_init_data = ;
static struct fixed_voltage_config mmc2_fixed_voltage_config = ;
static struct platform_device mmc2_fixed_voltage = ;
static void goni_setup_sdhci(void)
;
static struct platform_device *goni_devices[] __initdata = ;
static void __init goni_sound_init(void)
static void __init goni_map_io(void)
static void __init goni_machine_init(void)
MACHINE_START(GONI, "GONI")
.boot_params	= S5P_PA_SDRAM + 0x100,
.init_irq	= s5pv210_init_irq,
.map_io		= goni_map_io,
.init_machine	= goni_machine_init,
.timer		= &s5p_timer,
MACHINE_END
