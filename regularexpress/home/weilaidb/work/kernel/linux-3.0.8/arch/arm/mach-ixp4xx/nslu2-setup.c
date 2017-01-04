#define NSLU2_SDA_PIN		7
#define NSLU2_SCL_PIN		6
#define NSLU2_FREQ 66000000
#define NSLU2_PB_GPIO		5
#define NSLU2_PO_GPIO		8
#define NSLU2_RB_GPIO		12
#define NSLU2_GPIO_BUZZ		4
#define NSLU2_LED_RED_GPIO	0
#define NSLU2_LED_GRN_GPIO	1
#define NSLU2_LED_DISK1_GPIO	3
#define NSLU2_LED_DISK2_GPIO	2
static struct flash_platform_data nslu2_flash_data = ;
static struct resource nslu2_flash_resource = ;
static struct platform_device nslu2_flash = ;
static struct i2c_gpio_platform_data nslu2_i2c_gpio_data = ;
static struct i2c_board_info __initdata nslu2_i2c_board_info [] = ;
static struct gpio_led nslu2_led_pins[] = ;
static struct gpio_led_platform_data nslu2_led_data = ;
static struct platform_device nslu2_leds = ;
static struct platform_device nslu2_i2c_gpio = ;
static struct platform_device nslu2_beeper = ;
static struct resource nslu2_uart_resources[] = ;
static struct plat_serial8250_port nslu2_uart_data[] = ;
static struct platform_device nslu2_uart = ;
static struct eth_plat_info nslu2_plat_eth[] = ;
static struct platform_device nslu2_eth[] = ;
static struct platform_device *nslu2_devices[] __initdata = ;
static void nslu2_power_off(void)
static irqreturn_t nslu2_power_handler(int irq, void *dev_id)
static irqreturn_t nslu2_reset_handler(int irq, void *dev_id)
static void __init nslu2_timer_init(void)
static struct sys_timer nslu2_timer = ;
static void __init nslu2_init(void)
MACHINE_START(NSLU2, "Linksys NSLU2")
.boot_params	= 0x00000100,
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer          = &nslu2_timer,
.init_machine	= nslu2_init,
MACHINE_END
