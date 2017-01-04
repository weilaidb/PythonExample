#define LCD_PWM_PERIOD 192960
#define LCD_PWM_DUTY 127353
static struct map_desc rx1950_iodesc[] __initdata = ;
static struct s3c24xx_uart_clksrc rx1950_serial_clocks[] = ;
static struct s3c2410_uartcfg rx1950_uartcfgs[] __initdata = ;
static struct s3c2410fb_display rx1950_display = ;
static int power_supply_init(struct device *dev)
static int rx1950_is_ac_online(void)
static void power_supply_exit(struct device *dev)
static char *rx1950_supplicants[] = ;
static struct pda_power_pdata power_supply_info = ;
static struct resource power_supply_resources[] = ;
static struct platform_device power_supply = ;
static const struct s3c_adc_bat_thresh bat_lut_noac[] = ;
static const struct s3c_adc_bat_thresh bat_lut_acin[] = ;
int rx1950_bat_init(void)
void rx1950_bat_exit(void)
void rx1950_enable_charger(void)
void rx1950_disable_charger(void)
DEFINE_SPINLOCK(rx1950_blink_spin);
static int rx1950_led_blink_set(unsigned gpio, int state,
unsigned long *delay_on, unsigned long *delay_off)
static struct gpio_led rx1950_leds_desc[] = ;
static struct gpio_led_platform_data rx1950_leds_pdata = ;
static struct platform_device rx1950_leds = ;
static struct s3c_adc_bat_pdata rx1950_bat_cfg = ;
static struct platform_device rx1950_battery = ;
static struct s3c2410fb_mach_info rx1950_lcd_cfg = ;
static struct pwm_device *lcd_pwm;
void rx1950_lcd_power(int enable)
static void rx1950_bl_power(int enable)
static int rx1950_backlight_init(struct device *dev)
static void rx1950_backlight_exit(struct device *dev)
static int rx1950_backlight_notify(struct device *dev, int brightness)
static struct platform_pwm_backlight_data rx1950_backlight_data = ;
static struct platform_device rx1950_backlight = ;
static void rx1950_set_mmc_power(unsigned char power_mode, unsigned short vdd)
static struct s3c24xx_mci_pdata rx1950_mmc_cfg __initdata = ;
static struct mtd_partition rx1950_nand_part[] = ;
static struct s3c2410_nand_set rx1950_nand_sets[] = ;
static struct s3c2410_platform_nand rx1950_nand_info = ;
static struct s3c2410_udc_mach_info rx1950_udc_cfg __initdata = ;
static struct s3c2410_ts_mach_info rx1950_ts_cfg __initdata = ;
static struct gpio_keys_button rx1950_gpio_keys_table[] = ;
static struct gpio_keys_platform_data rx1950_gpio_keys_data = ;
static struct platform_device rx1950_device_gpiokeys = ;
static struct uda1380_platform_data uda1380_info = ;
static struct i2c_board_info rx1950_i2c_devices[] = ;
static struct platform_device *rx1950_devices[] __initdata = ;
static struct clk *rx1950_clocks[] __initdata = ;
static void __init rx1950_map_io(void)
static void __init rx1950_init_machine(void)
static void __init rx1950_reserve(void)
MACHINE_START(RX1950, "HP iPAQ RX1950")
.boot_params = S3C2410_SDRAM_PA + 0x100,
.map_io = rx1950_map_io,
.reserve	= rx1950_reserve,
.init_irq = s3c24xx_init_irq,
.init_machine = rx1950_init_machine,
.timer = &s3c24xx_timer,
MACHINE_END
