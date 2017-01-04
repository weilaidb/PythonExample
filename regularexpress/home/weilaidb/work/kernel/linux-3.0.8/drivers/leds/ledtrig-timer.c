static ssize_t led_delay_on_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t led_delay_on_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static ssize_t led_delay_off_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t led_delay_off_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static DEVICE_ATTR(delay_on, 0644, led_delay_on_show, led_delay_on_store);
static DEVICE_ATTR(delay_off, 0644, led_delay_off_show, led_delay_off_store);
static void timer_trig_activate(struct led_classdev *led_cdev)
static void timer_trig_deactivate(struct led_classdev *led_cdev)
static struct led_trigger timer_led_trigger = ;
static int __init timer_trig_init(void)
static void __exit timer_trig_exit(void)
module_init(timer_trig_init);
module_exit(timer_trig_exit);
MODULE_AUTHOR("Richard Purdie <rpurdie@openedhand.com>");
MODULE_DESCRIPTION("Timer LED trigger");
MODULE_LICENSE("GPL");
