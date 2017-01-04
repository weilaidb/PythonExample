#define LED_WEB		0x04
#define LED_POWER_OFF	0x08
static void __iomem *led_port;
static u8 led_value;
static DEFINE_SPINLOCK(led_value_lock);
static void raq_web_led_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static struct led_classdev raq_web_led = ;
static void raq_power_off_led_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static struct led_classdev raq_power_off_led = ;
static int __devinit cobalt_raq_led_probe(struct platform_device *pdev)
static int __devexit cobalt_raq_led_remove(struct platform_device *pdev)
static struct platform_driver cobalt_raq_led_driver = ;
static int __init cobalt_raq_led_init(void)
module_init(cobalt_raq_led_init);
