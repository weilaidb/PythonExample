static iomux_v3_cfg_t eukrea_mbimxsd_pads[] = ;
#define GPIO_LED1	IMX_GPIO_NR(3, 30)
#define GPIO_SWITCH1	IMX_GPIO_NR(3, 31)
static struct gpio_led eukrea_mbimxsd_leds[] = ;
static struct gpio_led_platform_data eukrea_mbimxsd_led_info = ;
static struct platform_device eukrea_mbimxsd_leds_gpio = ;
static struct gpio_keys_button eukrea_mbimxsd_gpio_buttons[] = ;
static const struct gpio_keys_platform_data
eukrea_mbimxsd_button_data __initconst = ;
static struct platform_device *platform_devices[] __initdata = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static struct i2c_board_info eukrea_mbimxsd_i2c_devices[] = ;
void __init eukrea_mbimxsd51_baseboard_init(void)
