#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg smdk6410_uartcfgs[] __initdata = ;
static void smdk6410_lcd_power_set(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data smdk6410_lcd_power_data = ;
static struct platform_device smdk6410_lcd_powerdev = ;
static struct s3c_fb_pd_win smdk6410_fb_win0 = ;
static struct s3c_fb_platdata smdk6410_lcd_pdata __initdata = ;
static struct resource smdk6410_smsc911x_resources[] = ;
static struct smsc911x_platform_config smdk6410_smsc911x_pdata = ;
static struct platform_device smdk6410_smsc911x = ;
static struct regulator_consumer_supply smdk6410_b_pwr_5v_consumers[] = ;
static struct regulator_init_data smdk6410_b_pwr_5v_data = ;
static struct fixed_voltage_config smdk6410_b_pwr_5v_pdata = ;
static struct platform_device smdk6410_b_pwr_5v = ;
static struct s3c_ide_platdata smdk6410_ide_pdata __initdata = ;
static uint32_t smdk6410_keymap[] __initdata = ;
static struct matrix_keymap_data smdk6410_keymap_data __initdata = ;
static struct samsung_keypad_platdata smdk6410_keypad_data __initdata = ;
static int smdk6410_backlight_init(struct device *dev)
static void smdk6410_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data smdk6410_backlight_data = ;
static struct platform_device smdk6410_backlight_device = ;
static struct map_desc smdk6410_iodesc[] = ;
static struct platform_device *smdk6410_devices[] __initdata = ;
static struct regulator_consumer_supply smdk6410_vddarm_consumers[] = ;
static struct regulator_init_data smdk6410_vddarm = ;
static struct regulator_init_data smdk6410_vddint = ;
static struct regulator_init_data smdk6410_vddhi = ;
static struct regulator_init_data smdk6410_vddpll = ;
static struct regulator_init_data smdk6410_vdduh_mmc = ;
static struct regulator_init_data smdk6410_vccmc3bt = ;
static struct regulator_init_data smdk6410_vccm2mtv = ;
static struct regulator_init_data smdk6410_vddlcd = ;
static struct regulator_init_data smdk6410_vddotgi = ;
static struct regulator_init_data smdk6410_vddotg = ;
static struct regulator_init_data smdk6410_vddalive = ;
static struct regulator_init_data smdk6410_vddaudio = ;
static struct regulator_init_data wm8350_dcdc1_data = ;
static struct regulator_init_data wm8350_dcdc3_data = ;
static struct regulator_consumer_supply wm8350_dcdc4_consumers[] = ;
static struct regulator_init_data wm8350_dcdc4_data = ;
static struct regulator_init_data wm8350_ldo4_data = ;
static struct  wm1190_regulators[] = ;
static int __init smdk6410_wm8350_init(struct wm8350 *wm8350)
static struct wm8350_platform_data __initdata smdk6410_wm8350_pdata = ;
static struct gpio_led wm1192_pmic_leds[] = ;
static struct gpio_led_platform_data wm1192_pmic_led = ;
static struct platform_device wm1192_pmic_led_dev = ;
static int wm1192_pre_init(struct wm831x *wm831x)
static struct wm831x_backlight_pdata wm1192_backlight_pdata = ;
static struct regulator_init_data wm1192_dcdc3 = ;
static struct regulator_consumer_supply wm1192_ldo1_consumers[] = ;
static struct regulator_init_data wm1192_ldo1 = ;
static struct wm831x_status_pdata wm1192_led7_pdata = ;
static struct wm831x_status_pdata wm1192_led8_pdata = ;
static struct wm831x_pdata smdk6410_wm1192_pdata = ;
static struct i2c_board_info i2c_devs0[] __initdata = ;
static struct i2c_board_info i2c_devs1[] __initdata = ;
static struct s3c2410_ts_mach_info s3c_ts_platform __initdata = ;
static void __init smdk6410_map_io(void)
static void __init smdk6410_machine_init(void)
MACHINE_START(SMDK6410, "SMDK6410")
.boot_params	= S3C64XX_PA_SDRAM + 0x100,
.init_irq	= s3c6410_init_irq,
.map_io		= smdk6410_map_io,
.init_machine	= smdk6410_machine_init,
.timer		= &s3c24xx_timer,
MACHINE_END
