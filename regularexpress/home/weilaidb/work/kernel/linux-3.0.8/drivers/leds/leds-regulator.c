#define to_regulator_led(led_cdev) \
container_of(led_cdev, struct regulator_led, cdev)
struct regulator_led ;
static inline int led_regulator_get_max_brightness(struct regulator *supply)
static int led_regulator_get_voltage(struct regulator *supply,
enum led_brightness brightness)
static void regulator_led_enable(struct regulator_led *led)
static void regulator_led_disable(struct regulator_led *led)
static void regulator_led_set_value(struct regulator_led *led)
static void led_work(struct work_struct *work)
static void regulator_led_brightness_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int __devinit regulator_led_probe(struct platform_device *pdev)
static int __devexit regulator_led_remove(struct platform_device *pdev)
static struct platform_driver regulator_led_driver = ;
static int __init regulator_led_init(void)
module_init(regulator_led_init);
static void __exit regulator_led_exit(void)
module_exit(regulator_led_exit);
MODULE_AUTHOR("Antonio Ospite <ospite@studenti.unina.it>");
MODULE_DESCRIPTION("Regulator driven LED driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:leds-regulator");
