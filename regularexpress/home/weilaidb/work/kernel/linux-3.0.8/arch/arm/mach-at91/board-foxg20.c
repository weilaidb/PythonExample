static void __init foxg20_init_early(void)
static void __init foxg20_init_irq(void)
static struct at91_usbh_data __initdata foxg20_usbh_data = ;
static struct at91_udc_data __initdata foxg20_udc_data = ;
static struct spi_board_info foxg20_spi_devices[] = ;
static struct at91_eth_data __initdata foxg20_macb_data = ;
static struct at91_mmc_data __initdata foxg20_mmc_data = ;
static struct gpio_led foxg20_leds[] = ;
#if defined(CONFIG_KEYBOARD_GPIO) || defined(CONFIG_KEYBOARD_GPIO_MODULE)
static struct gpio_keys_button foxg20_buttons[] = ;
static struct gpio_keys_platform_data foxg20_button_data = ;
static struct platform_device foxg20_button_device = ;
static void __init foxg20_add_device_buttons(void)
static void __init foxg20_add_device_buttons(void)
#if defined(CONFIG_W1_MASTER_GPIO) || defined(CONFIG_W1_MASTER_GPIO_MODULE)
static struct w1_gpio_platform_data w1_gpio_pdata = ;
static struct platform_device w1_device = ;
static void __init at91_add_device_w1(void)
static struct i2c_board_info __initdata foxg20_i2c_devices[] = ;
static void __init foxg20_board_init(void)
MACHINE_START(ACMENETUSFOXG20, "Acme Systems srl FOX Board G20")
.timer		= &at91sam926x_timer,
.map_io		= at91sam9260_map_io,
.init_early	= foxg20_init_early,
.init_irq	= foxg20_init_irq,
.init_machine	= foxg20_board_init,
MACHINE_END
