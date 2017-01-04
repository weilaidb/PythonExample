#define H1940_LATCH		((void __force __iomem *)0xF8000000)
#define H1940_PA_LATCH		S3C2410_CS2
#define H1940_LATCH_BIT(x)	(1 << ((x) + 16 - S3C_GPIO_END))
static struct map_desc h1940_iodesc[] __initdata = ;
#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg h1940_uartcfgs[] __initdata = ;
static unsigned int latch_state;
static void h1940_latch_control(unsigned int clear, unsigned int set)
static inline int h1940_gpiolib_to_latch(int offset)
static void h1940_gpiolib_latch_set(struct gpio_chip *chip,
unsigned offset, int value)
static int h1940_gpiolib_latch_output(struct gpio_chip *chip,
unsigned offset, int value)
static int h1940_gpiolib_latch_get(struct gpio_chip *chip,
unsigned offset)
struct gpio_chip h1940_latch_gpiochip = ;
static struct s3c2410_udc_mach_info h1940_udc_cfg __initdata = ;
static struct s3c2410_ts_mach_info h1940_ts_cfg __initdata = ;
static struct s3c2410fb_display h1940_lcd __initdata = ;
static struct s3c2410fb_mach_info h1940_fb_info __initdata = ;
static int power_supply_init(struct device *dev)
static int h1940_is_ac_online(void)
static void power_supply_exit(struct device *dev)
static char *h1940_supplicants[] = ;
static struct pda_power_pdata power_supply_info = ;
static struct resource power_supply_resources[] = ;
static struct platform_device power_supply = ;
static const struct s3c_adc_bat_thresh bat_lut_noac[] = ;
static const struct s3c_adc_bat_thresh bat_lut_acin[] = ;
int h1940_bat_init(void)
void h1940_bat_exit(void)
void h1940_enable_charger(void)
void h1940_disable_charger(void)
static struct s3c_adc_bat_pdata h1940_bat_cfg = ;
static struct platform_device h1940_battery = ;
DEFINE_SPINLOCK(h1940_blink_spin);
int h1940_led_blink_set(unsigned gpio, int state,
unsigned long *delay_on, unsigned long *delay_off)
EXPORT_SYMBOL(h1940_led_blink_set);
static struct gpio_led h1940_leds_desc[] = ;
static struct gpio_led_platform_data h1940_leds_pdata = ;
static struct platform_device h1940_device_leds = ;
static struct platform_device h1940_device_bluetooth = ;
static void h1940_set_mmc_power(unsigned char power_mode, unsigned short vdd)
static struct s3c24xx_mci_pdata h1940_mmc_cfg __initdata = ;
static int h1940_backlight_init(struct device *dev)
static int h1940_backlight_notify(struct device *dev, int brightness)
static void h1940_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data backlight_data = ;
static struct platform_device h1940_backlight = ;
static void h1940_lcd_power_set(struct plat_lcd_data *pd,
unsigned int power)
static struct plat_lcd_data h1940_lcd_power_data = ;
static struct platform_device h1940_lcd_powerdev = ;
static struct uda1380_platform_data uda1380_info = ;
static struct i2c_board_info h1940_i2c_devices[] = ;
#define DECLARE_BUTTON(p, k, n, w)	\
static struct gpio_keys_button h1940_buttons[] = ;
static struct gpio_keys_platform_data h1940_buttons_data = ;
static struct platform_device h1940_dev_buttons = ;
static struct platform_device *h1940_devices[] __initdata = ;
static void __init h1940_map_io(void)
static void __init h1940_reserve(void)
static void __init h1940_init_irq(void)
static void __init h1940_init(void)
MACHINE_START(H1940, "IPAQ-H1940")
.boot_params	= S3C2410_SDRAM_PA + 0x100,
.map_io		= h1940_map_io,
.reserve	= h1940_reserve,
.init_irq	= h1940_init_irq,
.init_machine	= h1940_init,
.timer		= &s3c24xx_timer,
MACHINE_END
