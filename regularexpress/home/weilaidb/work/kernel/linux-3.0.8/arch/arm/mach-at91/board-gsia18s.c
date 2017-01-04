static void __init gsia18s_init_early(void)
static void __init init_irq(void)
static struct at91_usbh_data __initdata usbh_data = ;
static struct at91_udc_data __initdata udc_data = ;
static struct at91_eth_data __initdata macb_data = ;
static struct gpio_led gpio_leds[] = ;
static struct gpio_led_platform_data gpio_led_info = ;
static struct platform_device leds = ;
static void __init gsia18s_leds_init(void)
static struct gpio_led pcf_gpio_leds1[] = ;
static struct gpio_led_platform_data pcf_gpio_led_info1 = ;
static struct platform_device pcf_leds1 = ;
static struct gpio_led pcf_gpio_leds2[] = ;
static struct gpio_led_platform_data pcf_gpio_led_info2 = ;
static struct platform_device pcf_leds2 = ;
static struct gpio_led pcf_gpio_leds3[] = ;
static struct gpio_led_platform_data pcf_gpio_led_info3 = ;
static struct platform_device pcf_leds3 = ;
static void __init gsia18s_pcf_leds_init(void)
static struct spi_board_info gsia18s_spi_devices[] = ;
static struct gpio_keys_button buttons[] = ;
static struct gpio_keys_platform_data button_data = ;
static struct platform_device button_device = ;
static void __init gsia18s_add_device_buttons(void)
static int pcf8574x_0x20_setup(struct i2c_client *client, int gpio,
unsigned int ngpio, void *context)
static int pcf8574x_0x20_teardown(struct i2c_client *client, int gpio,
unsigned ngpio, void *context)
static struct pcf857x_platform_data pcf20_pdata = ;
static struct pcf857x_platform_data pcf22_pdata = ;
static struct pcf857x_platform_data pcf24_pdata = ;
static struct i2c_board_info __initdata gsia18s_i2c_devices[] = ;
static struct at91_cf_data __initdata gsia18s_cf1_data = ;
static void gsia18s_power_off(void)
static int __init gsia18s_power_off_init(void)
static void __init gsia18s_board_init(void)
MACHINE_START(GSIA18S, "GS_IA18_S")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= gsia18s_init_early,
.init_irq	= init_irq,
.init_machine	= gsia18s_board_init,
MACHINE_END
