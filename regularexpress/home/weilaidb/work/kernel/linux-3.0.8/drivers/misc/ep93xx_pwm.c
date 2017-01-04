#define EP93XX_PWMx_TERM_COUNT	0x00
#define EP93XX_PWMx_DUTY_CYCLE	0x04
#define EP93XX_PWMx_ENABLE	0x08
#define EP93XX_PWMx_INVERT	0x0C
#define EP93XX_PWM_MAX_COUNT	0xFFFF
struct ep93xx_pwm ;
static inline void ep93xx_pwm_writel(struct ep93xx_pwm *pwm,
unsigned int val, unsigned int off)
static inline unsigned int ep93xx_pwm_readl(struct ep93xx_pwm *pwm,
unsigned int off)
static inline void ep93xx_pwm_write_tc(struct ep93xx_pwm *pwm, u16 value)
static inline u16 ep93xx_pwm_read_tc(struct ep93xx_pwm *pwm)
static inline void ep93xx_pwm_write_dc(struct ep93xx_pwm *pwm, u16 value)
static inline void ep93xx_pwm_enable(struct ep93xx_pwm *pwm)
static inline void ep93xx_pwm_disable(struct ep93xx_pwm *pwm)
static inline int ep93xx_pwm_is_enabled(struct ep93xx_pwm *pwm)
static inline void ep93xx_pwm_invert(struct ep93xx_pwm *pwm)
static inline void ep93xx_pwm_normal(struct ep93xx_pwm *pwm)
static inline int ep93xx_pwm_is_inverted(struct ep93xx_pwm *pwm)
static ssize_t ep93xx_pwm_get_min_freq(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ep93xx_pwm_get_max_freq(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ep93xx_pwm_get_freq(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ep93xx_pwm_set_freq(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t ep93xx_pwm_get_duty_percent(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ep93xx_pwm_set_duty_percent(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t ep93xx_pwm_get_invert(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ep93xx_pwm_set_invert(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(min_freq, S_IRUGO, ep93xx_pwm_get_min_freq, NULL);
static DEVICE_ATTR(max_freq, S_IRUGO, ep93xx_pwm_get_max_freq, NULL);
static DEVICE_ATTR(freq, S_IWUSR | S_IRUGO,
ep93xx_pwm_get_freq, ep93xx_pwm_set_freq);
static DEVICE_ATTR(duty_percent, S_IWUSR | S_IRUGO,
ep93xx_pwm_get_duty_percent, ep93xx_pwm_set_duty_percent);
static DEVICE_ATTR(invert, S_IWUSR | S_IRUGO,
ep93xx_pwm_get_invert, ep93xx_pwm_set_invert);
static struct attribute *ep93xx_pwm_attrs[] = ;
static const struct attribute_group ep93xx_pwm_sysfs_files = ;
static int __init ep93xx_pwm_probe(struct platform_device *pdev)
static int __exit ep93xx_pwm_remove(struct platform_device *pdev)
static struct platform_driver ep93xx_pwm_driver = ;
static int __init ep93xx_pwm_init(void)
static void __exit ep93xx_pwm_exit(void)
module_init(ep93xx_pwm_init);
module_exit(ep93xx_pwm_exit);
MODULE_AUTHOR("Matthieu Crapet <mcrapet@gmail.com>, "
"H Hartley Sweeten <hsweeten@visionengravers.com>");
MODULE_DESCRIPTION("EP93xx PWM driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ep93xx-pwm");
