#define DSMG600_SDA_PIN		5
#define DSMG600_SCL_PIN		4
#define DSMG600_FREQ		66000000
#define DSMG600_PB_GPIO		15
#define DSMG600_RB_GPIO		3
#define DSMG600_PO_GPIO		2
#define DSMG600_LED_PWR_GPIO	0
#define DSMG600_LED_WLAN_GPIO	14
static struct flash_platform_data dsmg600_flash_data = ;
static struct resource dsmg600_flash_resource = ;
static struct platform_device dsmg600_flash = ;
static struct i2c_gpio_platform_data dsmg600_i2c_gpio_data = ;
static struct platform_device dsmg600_i2c_gpio = ;
static struct i2c_board_info __initdata dsmg600_i2c_board_info [] = ;
static struct gpio_led dsmg600_led_pins[] = ;
static struct gpio_led_platform_data dsmg600_led_data = ;
static struct platform_device dsmg600_leds = ;
static struct resource dsmg600_uart_resources[] = ;
static struct plat_serial8250_port dsmg600_uart_data[] = ;
static struct platform_device dsmg600_uart = ;
static struct platform_device *dsmg600_devices[] __initdata = ;
static void dsmg600_power_off(void)
static int power_button_countdown;
#define PBUTTON_HOLDDOWN_COUNT 4
static void dsmg600_power_handler(unsigned long data);
static DEFINE_TIMER(dsmg600_power_timer, dsmg600_power_handler, 0, 0);
static void dsmg600_power_handler(unsigned long data)
static irqreturn_t dsmg600_reset_handler(int irq, void *dev_id)
static void __init dsmg600_timer_init(void)
static struct sys_timer dsmg600_timer = ;
static void __init dsmg600_init(void)
MACHINE_START(DSMG600, "D-Link DSM-G600 RevA")
.boot_params	= 0x00000100,
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer          = &dsmg600_timer,
.init_machine	= dsmg600_init,
MACHINE_END
