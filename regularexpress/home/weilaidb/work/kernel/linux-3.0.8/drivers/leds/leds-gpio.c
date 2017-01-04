struct gpio_led_data ;
static void gpio_led_work(struct work_struct *work)
static void gpio_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int gpio_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on, unsigned long *delay_off)
static int __devinit create_gpio_led(const struct gpio_led *template,
struct gpio_led_data *led_dat, struct device *parent,
int (*blink_set)(unsigned, int, unsigned long *, unsigned long *))
static void delete_gpio_led(struct gpio_led_data *led)
struct gpio_leds_priv ;
static inline int sizeof_gpio_leds_priv(int num_leds)
static struct gpio_leds_priv * __devinit gpio_leds_create_of(struct platform_device *pdev)
static const struct of_device_id of_gpio_leds_match[] = ;
static struct gpio_leds_priv * __devinit gpio_leds_create_of(struct platform_device *pdev)
#define of_gpio_leds_match NULL
static int __devinit gpio_led_probe(struct platform_device *pdev)
static int __devexit gpio_led_remove(struct platform_device *pdev)
static struct platform_driver gpio_led_driver = ;
MODULE_ALIAS("platform:leds-gpio");
static int __init gpio_led_init(void)
static void __exit gpio_led_exit(void)
module_init(gpio_led_init);
module_exit(gpio_led_exit);
MODULE_AUTHOR("Raphael Assenat <raph@8d.com>, Trent Piepho <tpiepho@freescale.com>");
MODULE_DESCRIPTION("GPIO LED driver");
MODULE_LICENSE("GPL");
