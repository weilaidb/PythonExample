#define AB8500_PWM_OUT_CTRL1_REG	0x60
#define AB8500_PWM_OUT_CTRL2_REG	0x61
#define AB8500_PWM_OUT_CTRL7_REG	0x66
#define ENABLE_PWM			1
#define DISABLE_PWM			0
struct pwm_device ;
static LIST_HEAD(pwm_list);
int pwm_config(struct pwm_device *pwm, int duty_ns, int period_ns)
EXPORT_SYMBOL(pwm_config);
int pwm_enable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_enable);
void pwm_disable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_disable);
struct pwm_device *pwm_request(int pwm_id, const char *label)
EXPORT_SYMBOL(pwm_request);
void pwm_free(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_free);
static int __devinit ab8500_pwm_probe(struct platform_device *pdev)
static int __devexit ab8500_pwm_remove(struct platform_device *pdev)
static struct platform_driver ab8500_pwm_driver = ;
static int __init ab8500_pwm_init(void)
static void __exit ab8500_pwm_exit(void)
subsys_initcall(ab8500_pwm_init);
module_exit(ab8500_pwm_exit);
MODULE_AUTHOR("Arun MURTHY <arun.murthy@stericsson.com>");
MODULE_DESCRIPTION("AB8500 Pulse Width Modulation Driver");
MODULE_ALIAS("AB8500 PWM driver");
MODULE_LICENSE("GPL v2");
