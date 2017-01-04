static struct class *leds_class;
static void led_update_brightness(struct led_classdev *led_cdev)
static ssize_t led_brightness_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t led_brightness_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static ssize_t led_max_brightness_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute led_class_attrs[] = ;
static void led_timer_function(unsigned long data)
static void led_stop_software_blink(struct led_classdev *led_cdev)
static void led_set_software_blink(struct led_classdev *led_cdev,
unsigned long delay_on,
unsigned long delay_off)
void led_classdev_suspend(struct led_classdev *led_cdev)
EXPORT_SYMBOL_GPL(led_classdev_suspend);
void led_classdev_resume(struct led_classdev *led_cdev)
EXPORT_SYMBOL_GPL(led_classdev_resume);
static int led_suspend(struct device *dev, pm_message_t state)
static int led_resume(struct device *dev)
int led_classdev_register(struct device *parent, struct led_classdev *led_cdev)
EXPORT_SYMBOL_GPL(led_classdev_register);
void led_classdev_unregister(struct led_classdev *led_cdev)
EXPORT_SYMBOL_GPL(led_classdev_unregister);
void led_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
EXPORT_SYMBOL(led_blink_set);
void led_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
EXPORT_SYMBOL(led_brightness_set);
static int __init leds_init(void)
static void __exit leds_exit(void)
subsys_initcall(leds_init);
module_exit(leds_exit);
MODULE_AUTHOR("John Lenz, Richard Purdie");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LED Class Interface");
