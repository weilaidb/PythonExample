struct pwm_beeper ;
#define HZ_TO_NANOSECONDS(x) (1000000000UL/(x))
static int pwm_beeper_event(struct input_dev *input,
unsigned int type, unsigned int code, int value)
static int __devinit pwm_beeper_probe(struct platform_device *pdev)
static int __devexit pwm_beeper_remove(struct platform_device *pdev)
static int pwm_beeper_suspend(struct device *dev)
static int pwm_beeper_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(pwm_beeper_pm_ops,
pwm_beeper_suspend, pwm_beeper_resume);
#define PWM_BEEPER_PM_OPS (&pwm_beeper_pm_ops)
#define PWM_BEEPER_PM_OPS NULL
static struct platform_driver pwm_beeper_driver = ;
static int __init pwm_beeper_init(void)
module_init(pwm_beeper_init);
static void __exit pwm_beeper_exit(void)
module_exit(pwm_beeper_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("PWM beeper driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pwm-beeper");
