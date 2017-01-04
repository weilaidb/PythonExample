#define MBIMX51_TSC2007_GPIO	IMX_GPIO_NR(3, 30)
#define MBIMX51_TSC2007_IRQ	(MXC_INTERNAL_IRQS + MBIMX51_TSC2007_GPIO)
#define MBIMX51_LED0		IMX_GPIO_NR(3, 5)
#define MBIMX51_LED1		IMX_GPIO_NR(3, 6)
#define MBIMX51_LED2		IMX_GPIO_NR(3, 7)
#define MBIMX51_LED3		IMX_GPIO_NR(3, 8)
static struct gpio_led mbimx51_leds[] = ;
static struct gpio_led_platform_data mbimx51_leds_info = ;
static struct platform_device mbimx51_leds_gpio = ;
static struct platform_device *devices[] __initdata = ;
static iomux_v3_cfg_t mbimx51_pads[] = ;
static const struct imxuart_platform_data uart_pdata __initconst = ;
static int mbimx51_keymap[] = ;
static const struct matrix_keymap_data mbimx51_map_data __initconst = ;
static int tsc2007_get_pendown_state(void)
struct tsc2007_platform_data tsc2007_data = ;
static struct i2c_board_info mbimx51_i2c_devices[] = ;
void __init eukrea_mbimx51_baseboard_init(void)
