#define VT8500_NR_PWMS 4
static DEFINE_MUTEX(pwm_lock);
static LIST_HEAD(pwm_list);
struct pwm_device ;
#define msecs_to_loops(t) (loops_per_jiffy / 1000 * HZ * t)
static inline void pwm_busy_wait(void __iomem *reg, u8 bitmask)
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
static inline void __add_pwm(struct pwm_device *pwm)
static int __devinit pwm_probe(struct platform_device *pdev)
static int __devexit pwm_remove(struct platform_device *pdev)
static struct platform_driver pwm_driver = ;
static int __init pwm_init(void)
arch_initcall(pwm_init);
static void __exit pwm_exit(void)
module_exit(pwm_exit);
MODULE_LICENSE("GPL");
