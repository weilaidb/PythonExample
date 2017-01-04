struct pwmled ;
static void pwmled_brightness(struct led_classdev *cdev, enum led_brightness b)
static int __init pwmled_probe(struct platform_device *pdev)
static int __exit pwmled_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:leds-atmel-pwm");
static struct platform_driver pwmled_driver = ;
static int __init modinit(void)
module_init(modinit);
static void __exit modexit(void)
module_exit(modexit);
MODULE_DESCRIPTION("Driver for LEDs with PWM-controlled brightness");
MODULE_LICENSE("GPL");
