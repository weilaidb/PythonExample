struct adp5520_led ;
static void adp5520_led_work(struct work_struct *work)
static void adp5520_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int adp5520_led_setup(struct adp5520_led *led)
static int __devinit adp5520_led_prepare(struct platform_device *pdev)
static int __devinit adp5520_led_probe(struct platform_device *pdev)
static int __devexit adp5520_led_remove(struct platform_device *pdev)
static struct platform_driver adp5520_led_driver = ;
static int __init adp5520_led_init(void)
module_init(adp5520_led_init);
static void __exit adp5520_led_exit(void)
module_exit(adp5520_led_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("LEDS ADP5520(01) Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:adp5520-led");
