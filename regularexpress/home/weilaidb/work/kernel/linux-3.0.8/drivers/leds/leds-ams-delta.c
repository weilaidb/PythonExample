struct ams_delta_led ;
static void ams_delta_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static struct ams_delta_led ams_delta_leds[] = ;
static int ams_delta_led_probe(struct platform_device *pdev)
static int ams_delta_led_remove(struct platform_device *pdev)
static struct platform_driver ams_delta_led_driver = ;
static int __init ams_delta_led_init(void)
static void __exit ams_delta_led_exit(void)
module_init(ams_delta_led_init);
module_exit(ams_delta_led_exit);
MODULE_AUTHOR("Jonathan McDowell <noodles@earth.li>");
MODULE_DESCRIPTION("Amstrad Delta LED driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ams-delta-led");
