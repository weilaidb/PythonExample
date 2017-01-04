static struct smsc911x_platform_config smsc911x_config = ;
static struct resource smsc911x_resources[] = ;
static struct platform_device smsc911x_device = ;
static struct gpio_led rsk7203_gpio_leds[] = ;
static struct gpio_led_platform_data rsk7203_gpio_leds_info = ;
static struct platform_device led_device = ;
static struct gpio_keys_button rsk7203_gpio_keys_table[] = ;
static struct gpio_keys_platform_data rsk7203_gpio_keys_info = ;
static struct platform_device keys_device = ;
static struct platform_device *rsk7203_devices[] __initdata = ;
static int __init rsk7203_devices_setup(void)
device_initcall(rsk7203_devices_setup);
