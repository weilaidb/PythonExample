struct pwm_device ;
#define pwm_dbg(_pwm, msg...) dev_dbg(&(_pwm)->pdev->dev, msg)
static struct clk *clk_scaler[2];
static inline int pwm_is_tdiv(struct pwm_device *pwm)
static DEFINE_MUTEX(pwm_lock);
static LIST_HEAD(pwm_list);
struct pwm_device *pwm_request(int pwm_id, const char *label)
EXPORT_SYMBOL(pwm_request);
void pwm_free(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_free);
#define pwm_tcon_start(pwm) (1 << (pwm->tcon_base + 0))
#define pwm_tcon_invert(pwm) (1 << (pwm->tcon_base + 2))
#define pwm_tcon_autoreload(pwm) (1 << (pwm->tcon_base + 3))
#define pwm_tcon_manulupdate(pwm) (1 << (pwm->tcon_base + 1))
int pwm_enable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_enable);
void pwm_disable(struct pwm_device *pwm)
EXPORT_SYMBOL(pwm_disable);
static unsigned long pwm_calc_tin(struct pwm_device *pwm, unsigned long freq)
#define NS_IN_HZ (1000000000UL)
int pwm_config(struct pwm_device *pwm, int duty_ns, int period_ns)
EXPORT_SYMBOL(pwm_config);
static int pwm_register(struct pwm_device *pwm)
static int s3c_pwm_probe(struct platform_device *pdev)
static int __devexit s3c_pwm_remove(struct platform_device *pdev)
static int s3c_pwm_suspend(struct platform_device *pdev, pm_message_t state)
static int s3c_pwm_resume(struct platform_device *pdev)
#define s3c_pwm_suspend NULL
#define s3c_pwm_resume NULL
static struct platform_driver s3c_pwm_driver = ;
static int __init pwm_init(void)
arch_initcall(pwm_init);
