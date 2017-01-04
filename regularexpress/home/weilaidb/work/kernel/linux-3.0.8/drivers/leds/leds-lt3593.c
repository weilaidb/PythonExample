struct lt3593_led_data ;
static void lt3593_led_work(struct work_struct *work)
static void lt3593_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int __devinit create_lt3593_led(const struct gpio_led *template,
struct lt3593_led_data *led_dat, struct device *parent)
static void delete_lt3593_led(struct lt3593_led_data *led)
static int __devinit lt3593_led_probe(struct platform_device *pdev)
static int __devexit lt3593_led_remove(struct platform_device *pdev)
static struct platform_driver lt3593_led_driver = ;
MODULE_ALIAS("platform:leds-lt3593");
static int __init lt3593_led_init(void)
static void __exit lt3593_led_exit(void)
module_init(lt3593_led_init);
module_exit(lt3593_led_exit);
MODULE_AUTHOR("Daniel Mack <daniel@caiaq.de>");
MODULE_DESCRIPTION("LED driver for LT3593 controllers");
MODULE_LICENSE("GPL");
