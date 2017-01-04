static struct mv643xx_eth_platform_data netspace_v2_ge00_data = ;
static struct mv_sata_platform_data netspace_v2_sata_data = ;
#define NETSPACE_V2_PUSH_BUTTON		32
static struct gpio_keys_button netspace_v2_buttons[] = ;
static struct gpio_keys_platform_data netspace_v2_button_data = ;
static struct platform_device netspace_v2_gpio_buttons = ;
#define NETSPACE_V2_GPIO_RED_LED	12
static struct gpio_led netspace_v2_gpio_led_pins[] = ;
static struct gpio_led_platform_data netspace_v2_gpio_leds_data = ;
static struct platform_device netspace_v2_gpio_leds = ;
#define NETSPACE_V2_GPIO_BLUE_LED_SLOW	29
#define NETSPACE_V2_GPIO_BLUE_LED_CMD	30
static struct ns2_led netspace_v2_led_pins[] = ;
static struct ns2_led_platform_data netspace_v2_leds_data = ;
static struct platform_device netspace_v2_leds = ;
static struct gpio_fan_speed netspace_max_v2_fan_speed[] = ;
static unsigned netspace_max_v2_fan_ctrl[] = ;
static struct gpio_fan_alarm netspace_max_v2_fan_alarm = ;
static struct gpio_fan_platform_data netspace_max_v2_fan_data = ;
static struct platform_device netspace_max_v2_gpio_fan = ;
static unsigned int netspace_v2_mpp_config[] __initdata = ;
#define NETSPACE_V2_GPIO_POWER_OFF	31
static void netspace_v2_power_off(void)
static void __init netspace_v2_init(void)
MACHINE_START(NETSPACE_V2, "LaCie Network Space v2")
.boot_params	= 0x00000100,
.init_machine	= netspace_v2_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
MACHINE_START(INETSPACE_V2, "LaCie Internet Space v2")
.boot_params	= 0x00000100,
.init_machine	= netspace_v2_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
MACHINE_START(NETSPACE_MAX_V2, "LaCie Network Space Max v2")
.boot_params	= 0x00000100,
.init_machine	= netspace_v2_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
