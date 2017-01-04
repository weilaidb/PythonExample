#define BLANK		1
#define UNBLANK		0
struct bl_trig_notifier ;
static int fb_notifier_callback(struct notifier_block *p,
unsigned long event, void *data)
static ssize_t bl_trig_invert_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bl_trig_invert_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t num)
static DEVICE_ATTR(inverted, 0644, bl_trig_invert_show, bl_trig_invert_store);
static void bl_trig_activate(struct led_classdev *led)
static void bl_trig_deactivate(struct led_classdev *led)
static struct led_trigger bl_led_trigger = ;
static int __init bl_trig_init(void)
static void __exit bl_trig_exit(void)
module_init(bl_trig_init);
module_exit(bl_trig_exit);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("Backlight emulation LED trigger");
MODULE_LICENSE("GPL v2");
