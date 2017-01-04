struct atmel_pwm_bl ;
static int atmel_pwm_bl_set_intensity(struct backlight_device *bd)
static int atmel_pwm_bl_get_intensity(struct backlight_device *bd)
static int atmel_pwm_bl_init_pwm(struct atmel_pwm_bl *pwmbl)
static const struct backlight_ops atmel_pwm_bl_ops = ;
static int atmel_pwm_bl_probe(struct platform_device *pdev)
static int __exit atmel_pwm_bl_remove(struct platform_device *pdev)
static struct platform_driver atmel_pwm_bl_driver = ;
static int __init atmel_pwm_bl_init(void)
module_init(atmel_pwm_bl_init);
static void __exit atmel_pwm_bl_exit(void)
module_exit(atmel_pwm_bl_exit);
MODULE_AUTHOR("Hans-Christian egtvedt <hans-christian.egtvedt@atmel.com>");
MODULE_DESCRIPTION("Atmel PWM backlight driver");
MODULE_LICENSE("GPL");
