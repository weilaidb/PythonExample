#define LED_FRONT_LEFT	0x01
#define LED_FRONT_RIGHT	0x02
static void __iomem *led_port;
static u8 led_value;
static void qube_front_led_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static struct led_classdev qube_front_led = ;
static int __devinit cobalt_qube_led_probe(struct platform_device *pdev)
static int __devexit cobalt_qube_led_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:cobalt-qube-leds");
static struct platform_driver cobalt_qube_led_driver = ;
static int __init cobalt_qube_led_init(void)
static void __exit cobalt_qube_led_exit(void)
module_init(cobalt_qube_led_init);
module_exit(cobalt_qube_led_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Front LED support for Cobalt Server");
MODULE_AUTHOR("Florian Fainelli <florian@openwrt.org>");
