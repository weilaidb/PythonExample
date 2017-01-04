struct gpio_trig_data ;
static irqreturn_t gpio_trig_irq(int irq, void *_led)
;
static void gpio_trig_work(struct work_struct *work)
static ssize_t gpio_trig_brightness_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gpio_trig_brightness_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t n)
static DEVICE_ATTR(desired_brightness, 0644, gpio_trig_brightness_show,
gpio_trig_brightness_store);
static ssize_t gpio_trig_inverted_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gpio_trig_inverted_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t n)
static DEVICE_ATTR(inverted, 0644, gpio_trig_inverted_show,
gpio_trig_inverted_store);
static ssize_t gpio_trig_gpio_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gpio_trig_gpio_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t n)
static DEVICE_ATTR(gpio, 0644, gpio_trig_gpio_show, gpio_trig_gpio_store);
static void gpio_trig_activate(struct led_classdev *led)
static void gpio_trig_deactivate(struct led_classdev *led)
static struct led_trigger gpio_led_trigger = ;
static int __init gpio_trig_init(void)
module_init(gpio_trig_init);
static void __exit gpio_trig_exit(void)
module_exit(gpio_trig_exit);
MODULE_AUTHOR("Felipe Balbi <me@felipebalbi.com>");
MODULE_DESCRIPTION("GPIO LED trigger");
MODULE_LICENSE("GPL");
