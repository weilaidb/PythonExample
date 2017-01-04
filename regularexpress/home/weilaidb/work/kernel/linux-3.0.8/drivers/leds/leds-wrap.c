#define DRVNAME "wrap-led"
#define WRAP_POWER_LED_GPIO	2
#define WRAP_ERROR_LED_GPIO	3
#define WRAP_EXTRA_LED_GPIO	18
static struct platform_device *pdev;
static void wrap_power_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void wrap_error_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void wrap_extra_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev wrap_power_led = ;
static struct led_classdev wrap_error_led = ;
static struct led_classdev wrap_extra_led = ;
static int wrap_led_probe(struct platform_device *pdev)
static int wrap_led_remove(struct platform_device *pdev)
static struct platform_driver wrap_led_driver = ;
static int __init wrap_led_init(void)
static void __exit wrap_led_exit(void)
module_init(wrap_led_init);
module_exit(wrap_led_exit);
MODULE_AUTHOR("Kristian Kielhofner <kris@krisk.org>");
MODULE_DESCRIPTION("PCEngines WRAP LED driver");
MODULE_LICENSE("GPL");
