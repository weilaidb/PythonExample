#define UCON S3C2410_UCON_DEFAULT
#define ULCON (S3C2410_LCON_CS8 | S3C2410_LCON_PNONE)
#define UFCON (S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE)
static struct s3c2410_uartcfg smartq_uartcfgs[] __initdata = ;
static void smartq_usb_host_powercontrol(int port, int to)
static irqreturn_t smartq_usb_host_ocirq(int irq, void *pw)
static void smartq_usb_host_enableoc(struct s3c2410_hcd_info *info, int on)
static struct s3c2410_hcd_info smartq_usb_host_info = ;
static struct gpio_vbus_mach_info smartq_usb_otg_vbus_pdata = ;
static struct platform_device smartq_usb_otg_vbus_dev = ;
static int smartq_bl_init(struct device *dev)
static struct platform_pwm_backlight_data smartq_backlight_data = ;
static struct platform_device smartq_backlight_device = ;
static struct s3c2410_ts_mach_info smartq_touchscreen_pdata __initdata = ;
static struct s3c_sdhci_platdata smartq_internal_hsmmc_pdata = ;
static struct s3c_hwmon_pdata smartq_hwmon_pdata __initdata = ;
static int __init smartq_lcd_setup_gpio(void)
static struct spi_gpio_platform_data smartq_lcd_control = ;
static struct platform_device smartq_lcd_control_device = ;
static void smartq_lcd_power_set(struct plat_lcd_data *pd, unsigned int power)
static struct plat_lcd_data smartq_lcd_power_data = ;
static struct platform_device smartq_lcd_power_device = ;
static struct i2c_board_info smartq_i2c_devs[] __initdata = ;
static struct platform_device *smartq_devices[] __initdata = ;
static void __init smartq_lcd_mode_set(void)
static void smartq_power_off(void)
static int __init smartq_power_off_init(void)
static int __init smartq_usb_host_init(void)
static int __init smartq_usb_otg_init(void)
static int __init smartq_wifi_init(void)
static struct map_desc smartq_iodesc[] __initdata = ;
void __init smartq_map_io(void)
void __init smartq_machine_init(void)
