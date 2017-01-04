static struct mv643xx_eth_platform_data netxbig_v2_ge00_data = ;
static struct mv643xx_eth_platform_data netxbig_v2_ge01_data = ;
static struct mv_sata_platform_data netxbig_v2_sata_data = ;
#define NETXBIG_V2_GPIO_SWITCH_POWER_ON		13
#define NETXBIG_V2_GPIO_SWITCH_POWER_OFF	15
#define NETXBIG_V2_GPIO_FUNC_BUTTON		34
#define NETXBIG_V2_SWITCH_POWER_ON		0x1
#define NETXBIG_V2_SWITCH_POWER_OFF		0x2
static struct gpio_keys_button netxbig_v2_buttons[] = ;
static struct gpio_keys_platform_data netxbig_v2_button_data = ;
static struct platform_device netxbig_v2_gpio_buttons = ;
static int netxbig_v2_gpio_ext_addr[] = ;
static int netxbig_v2_gpio_ext_data[] = ;
static struct netxbig_gpio_ext netxbig_v2_gpio_ext = ;
static int netxbig_v2_red_mled[NETXBIG_LED_MODE_NUM] = ;
static int netxbig_v2_blue_pwr_mled[NETXBIG_LED_MODE_NUM] = ;
static int netxbig_v2_blue_sata_mled[NETXBIG_LED_MODE_NUM] = ;
static struct netxbig_led_timer netxbig_v2_led_timer[] = ;
#define NETXBIG_LED(_name, maddr, mval, baddr)			\
static struct netxbig_led net2big_v2_leds_ctrl[] = ;
static struct netxbig_led_platform_data net2big_v2_leds_data = ;
static struct netxbig_led net5big_v2_leds_ctrl[] = ;
static struct netxbig_led_platform_data net5big_v2_leds_data = ;
static struct platform_device netxbig_v2_leds = ;
static unsigned int net2big_v2_mpp_config[] __initdata = ;
static unsigned int net5big_v2_mpp_config[] __initdata = ;
#define NETXBIG_V2_GPIO_POWER_OFF		7
static void netxbig_v2_power_off(void)
static void __init netxbig_v2_init(void)
MACHINE_START(NET2BIG_V2, "LaCie 2Big Network v2")
.boot_params	= 0x00000100,
.init_machine	= netxbig_v2_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
MACHINE_START(NET5BIG_V2, "LaCie 5Big Network v2")
.boot_params	= 0x00000100,
.init_machine	= netxbig_v2_init,
.map_io		= kirkwood_map_io,
.init_early	= kirkwood_init_early,
.init_irq	= kirkwood_init_irq,
.timer		= &kirkwood_timer,
MACHINE_END
