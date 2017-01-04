static unsigned long magician_pin_config[] __initdata = ;
static struct pxaficp_platform_data magician_ficp_info = ;
#define INIT_KEY(_code, _gpio, _desc)	\
static struct gpio_keys_button magician_button_table[] = ;
static struct gpio_keys_platform_data gpio_keys_data = ;
static struct platform_device gpio_keys = ;
static struct resource egpio_resources[] = ;
static struct htc_egpio_chip egpio_chips[] = ;
static struct htc_egpio_platform_data egpio_info = ;
static struct platform_device egpio = ;
static struct pxafb_mode_info toppoly_modes[] = ;
static struct pxafb_mode_info samsung_modes[] = ;
static void toppoly_lcd_power(int on, struct fb_var_screeninfo *si)
static void samsung_lcd_power(int on, struct fb_var_screeninfo *si)
static struct pxafb_mach_info toppoly_info = ;
static struct pxafb_mach_info samsung_info = ;
static int magician_backlight_init(struct device *dev)
static int magician_backlight_notify(struct device *dev, int brightness)
static void magician_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data backlight_data = ;
static struct platform_device backlight = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds_gpio = ;
static struct pasic3_led pasic3_leds[] = ;
static struct pasic3_leds_machinfo pasic3_leds_info = ;
static struct resource pasic3_resources[] = ;
static struct pasic3_platform_data pasic3_platform_data = ;
static struct platform_device pasic3 = ;
static struct resource gpio_vbus_resource = ;
static struct gpio_vbus_mach_info gpio_vbus_info = ;
static struct platform_device gpio_vbus = ;
static int power_supply_init(struct device *dev)
static int magician_is_ac_online(void)
static void power_supply_exit(struct device *dev)
static char *magician_supplicants[] = ;
static struct pda_power_pdata power_supply_info = ;
static struct resource power_supply_resources[] = ;
static struct platform_device power_supply = ;
static struct regulator_consumer_supply bq24022_consumers[] = ;
static struct regulator_init_data bq24022_init_data = ;
static struct bq24022_mach_info bq24022_info = ;
static struct platform_device bq24022 = ;
static int magician_mci_init(struct device *dev,
irq_handler_t detect_irq, void *data)
static void magician_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data magician_mci_info = ;
static struct pxaohci_platform_data magician_ohci_info = ;
static void magician_set_vpp(struct platform_device *pdev, int vpp)
static struct resource strataflash_resource = ;
static struct physmap_flash_data strataflash_data = ;
static struct platform_device strataflash = ;
static struct i2c_pxa_platform_data i2c_info = ;
static struct platform_device *devices[] __initdata = ;
static void __init magician_init(void)
MACHINE_START(MAGICIAN, "HTC Magician")
.boot_params = 0xa0000100,
.map_io = pxa27x_map_io,
.nr_irqs = MAGICIAN_NR_IRQS,
.init_irq = pxa27x_init_irq,
.init_machine = magician_init,
.timer = &pxa_timer,
MACHINE_END
