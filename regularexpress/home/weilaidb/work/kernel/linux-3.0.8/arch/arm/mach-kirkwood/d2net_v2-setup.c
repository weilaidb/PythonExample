static struct mv643xx_eth_platform_data d2net_v2_ge00_data = ;
static struct mv_sata_platform_data d2net_v2_sata_data = ;
#define D2NET_V2_GPIO_PUSH_BUTTON          34
#define D2NET_V2_GPIO_POWER_SWITCH_ON      13
#define D2NET_V2_GPIO_POWER_SWITCH_OFF     15
#define D2NET_V2_SWITCH_POWER_ON           0x1
#define D2NET_V2_SWITCH_POWER_OFF          0x2
static struct gpio_keys_button d2net_v2_buttons[] = ;
static struct gpio_keys_platform_data d2net_v2_button_data = ;
static struct platform_device d2net_v2_gpio_buttons = ;
#define D2NET_V2_GPIO_RED_LED		12
static struct gpio_led d2net_v2_gpio_led_pins[] = ;
static struct gpio_led_platform_data d2net_v2_gpio_leds_data = ;
static struct platform_device d2net_v2_gpio_leds = ;
#define D2NET_V2_GPIO_BLUE_LED_SLOW	29
#define D2NET_V2_GPIO_BLUE_LED_CMD	30
static struct ns2_led d2net_v2_led_pins[] = ;
static struct ns2_led_platform_data d2net_v2_leds_data = ;
static struct platform_device d2net_v2_leds = ;
static unsigned int d2net_v2_mpp_config[] __initdata = ;
#define D2NET_V2_GPIO_POWER_OFF		7
static void d2net_v2_power_off(void)
static void __init d2net_v2_init(void)
MACHINE_START(D2NET_V2, "LaCie d2 Network v2")
.boot_params	= 0x00000100,
.init_machine	= d2net_v2_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
