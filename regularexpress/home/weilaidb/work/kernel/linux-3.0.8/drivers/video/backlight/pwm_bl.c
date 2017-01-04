struct pwm_bl_data ;
static int pwm_backlight_update_status(struct backlight_device *bl)
static int pwm_backlight_get_brightness(struct backlight_device *bl)
static int pwm_backlight_check_fb(struct backlight_device *bl,
struct fb_info *info)
static const struct backlight_ops pwm_backlight_ops = ;
static int pwm_backlight_probe(struct platform_device *pdev)
static int pwm_backlight_remove(struct platform_device *pdev)
static int pwm_backlight_suspend(struct platform_device *pdev,
pm_message_t state)
static int pwm_backlight_resume(struct platform_device *pdev)
#define pwm_backlight_suspend	NULL
#define pwm_backlight_resume	NULL
static struct platform_driver pwm_backlight_driver = ;
static int __init pwm_backlight_init(void)
module_init(pwm_backlight_init);
static void __exit pwm_backlight_exit(void)
module_exit(pwm_backlight_exit);
MODULE_DESCRIPTION("PWM based Backlight Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pwm-backlight");
