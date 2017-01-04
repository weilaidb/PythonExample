static struct gpio_keys_button rut1xx_keys[] = ;
static struct gpio_keys_platform_data rut1xx_keys_data = ;
static struct platform_device rut1xx_keys_device = ;
static struct gpio_led rut100_leds[] = ;
static struct gpio_led_platform_data rut100_leds_data = ;
static struct platform_device rut1xx_leds = ;
static struct sys_timer rut1xx_timer = ;
static void __init rut1xx_init(void)
MACHINE_START(RUT100, "Teltonika RUT100")
.boot_params	= 0x100,
.map_io		= gemini_map_io,
.init_irq	= gemini_init_irq,
.timer		= &rut1xx_timer,
.init_machine	= rut1xx_init,
MACHINE_END
