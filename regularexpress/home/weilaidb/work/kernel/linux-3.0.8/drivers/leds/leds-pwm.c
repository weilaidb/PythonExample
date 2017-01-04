struct led_pwm_data ;
static void led_pwm_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static int led_pwm_probe(struct platform_device *pdev)
static int __devexit led_pwm_remove(struct platform_device *pdev)
static struct platform_driver led_pwm_driver = ;
static int __init led_pwm_init(void)
static void __exit led_pwm_exit(void)
module_init(led_pwm_init);
module_exit(led_pwm_exit);
MODULE_AUTHOR("Luotao Fu <l.fu@pengutronix.de>");
MODULE_DESCRIPTION("PWM LED driver for PXA");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:leds-pwm");
