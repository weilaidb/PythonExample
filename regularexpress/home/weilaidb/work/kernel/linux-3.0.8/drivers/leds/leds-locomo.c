static void locomoled_brightness_set(struct led_classdev *led_cdev,
enum led_brightness value, int offset)
static void locomoled_brightness_set0(struct led_classdev *led_cdev,
enum led_brightness value)
static void locomoled_brightness_set1(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev locomo_led0 = ;
static struct led_classdev locomo_led1 = ;
static int locomoled_probe(struct locomo_dev *ldev)
static int locomoled_remove(struct locomo_dev *dev)
static struct locomo_driver locomoled_driver = ;
static int __init locomoled_init(void)
module_init(locomoled_init);
MODULE_AUTHOR("John Lenz <lenz@cs.wisc.edu>");
MODULE_DESCRIPTION("Locomo LED driver");
MODULE_LICENSE("GPL");
