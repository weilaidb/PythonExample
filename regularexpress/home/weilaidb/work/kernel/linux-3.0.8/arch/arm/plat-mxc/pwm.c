#define MX1_PWMC    0x00
#define MX1_PWMS    0x04
#define MX1_PWMP    0x08
#define MX3_PWMCR                 0x00
#define MX3_PWMSAR                0x0C
#define MX3_PWMPR                 0x10
#define MX3_PWMCR_PRESCALER(x)    (((x - 1) & 0xFFF) << 4)
#define MX3_PWMCR_CLKSRC_IPG_HIGH (2 << 16)
#define MX3_PWMCR_CLKSRC_IPG      (1 << 16)
#define MX3_PWMCR_EN              (1 << 0)
struct pwm_device ;
int pwm_config(struct pwm_device *pwm, int duty_ns, int period_ns)
EXPORT_SYMBOL(pwm_config);
int pwm_enable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_enable);
void pwm_disable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_disable);
static DEFINE_MUTEX(pwm_lock);
static LIST_HEAD(pwm_list);
struct pwm_device *pwm_request(int pwm_id, const char *label)
EXPORT_SYMBOL(pwm_request);
void pwm_free(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_free);
static int __devinit mxc_pwm_probe(struct platform_device *pdev)
static int __devexit mxc_pwm_remove(struct platform_device *pdev)
static struct platform_driver mxc_pwm_driver = ;
static int __init mxc_pwm_init(void)
arch_initcall(mxc_pwm_init);
static void __exit mxc_pwm_exit(void)
module_exit(mxc_pwm_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de>");
