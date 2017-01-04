#define NAS100D_SDA_PIN		5
#define NAS100D_SCL_PIN		6
#define NAS100D_PB_GPIO         14
#define NAS100D_RB_GPIO         4
#define NAS100D_PO_GPIO         12
#define NAS100D_LED_WLAN_GPIO	0
#define NAS100D_LED_DISK_GPIO	3
#define NAS100D_LED_PWR_GPIO	15
static struct flash_platform_data nas100d_flash_data = ;
static struct resource nas100d_flash_resource = ;
static struct platform_device nas100d_flash = ;
static struct i2c_board_info __initdata nas100d_i2c_board_info [] = ;
static struct gpio_led nas100d_led_pins[] = ;
static struct gpio_led_platform_data nas100d_led_data = ;
static struct platform_device nas100d_leds = ;
static struct i2c_gpio_platform_data nas100d_i2c_gpio_data = ;
static struct platform_device nas100d_i2c_gpio = ;
static struct resource nas100d_uart_resources[] = ;
static struct plat_serial8250_port nas100d_uart_data[] = ;
static struct platform_device nas100d_uart = ;
static struct eth_plat_info nas100d_plat_eth[] = ;
static struct platform_device nas100d_eth[] = ;
static struct platform_device *nas100d_devices[] __initdata = ;
static void nas100d_power_off(void)
static int power_button_countdown;
#define PBUTTON_HOLDDOWN_COUNT 4
static void nas100d_power_handler(unsigned long data);
static DEFINE_TIMER(nas100d_power_timer, nas100d_power_handler, 0, 0);
static void nas100d_power_handler(unsigned long data)
static irqreturn_t nas100d_reset_handler(int irq, void *dev_id)
static void __init nas100d_init(void)
MACHINE_START(NAS100D, "Iomega NAS 100d")
.boot_params	= 0x00000100,
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer          = &ixp4xx_timer,
.init_machine	= nas100d_init,
MACHINE_END
