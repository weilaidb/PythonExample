static void hp6xxled_green_set(struct led_classdev *led_cdev,
enum led_brightness value)
static void hp6xxled_red_set(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev hp6xx_red_led = ;
static struct led_classdev hp6xx_green_led = ;
static int hp6xxled_probe(struct platform_device *pdev)
static int hp6xxled_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:hp6xx-led");
static struct platform_driver hp6xxled_driver = ;
static int __init hp6xxled_init(void)
static void __exit hp6xxled_exit(void)
module_init(hp6xxled_init);
module_exit(hp6xxled_exit);
MODULE_AUTHOR("Kristoffer Ericson <kristoffer.ericson@gmail.com>");
MODULE_DESCRIPTION("HP Jornada 6xx LED driver");
MODULE_LICENSE("GPL");
