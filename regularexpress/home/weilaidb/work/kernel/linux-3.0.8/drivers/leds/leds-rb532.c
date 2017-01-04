static void rb532_led_set(struct led_classdev *cdev,
enum led_brightness brightness)
static enum led_brightness rb532_led_get(struct led_classdev *cdev)
static struct led_classdev rb532_uled = ;
static int __devinit rb532_led_probe(struct platform_device *pdev)
static int __devexit rb532_led_remove(struct platform_device *pdev)
static struct platform_driver rb532_led_driver = ;
static int __init rb532_led_init(void)
static void __exit rb532_led_exit(void)
module_init(rb532_led_init);
module_exit(rb532_led_exit);
MODULE_ALIAS("platform:rb532-led");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("User LED support for Routerboard532");
MODULE_AUTHOR("Phil Sutter <n0-1@freewrt.org>");
