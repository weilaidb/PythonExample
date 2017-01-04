#define WGT634U_GPIO_LED	3
#define WGT634U_GPIO_RESET	2
#define WGT634U_GPIO_TP1	7
#define WGT634U_GPIO_TP2	6
#define WGT634U_GPIO_TP3	5
#define WGT634U_GPIO_TP4	4
#define WGT634U_GPIO_TP5	1
static struct gpio_led wgt634u_leds[] = ;
static struct gpio_led_platform_data wgt634u_led_data = ;
static struct platform_device wgt634u_gpio_leds = ;
static struct mtd_partition wgt634u_partitions[] = ;
static struct physmap_flash_data wgt634u_flash_data = ;
static struct resource wgt634u_flash_resource = ;
static struct platform_device wgt634u_flash = ;
static struct platform_device *wgt634u_devices[] __initdata = ;
static irqreturn_t gpio_interrupt(int irq, void *ignored)
static int __init wgt634u_init(void)
module_init(wgt634u_init);
