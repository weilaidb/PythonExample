struct gpio_fan_data ;
static void fan_alarm_notify(struct work_struct *ws)
static irqreturn_t fan_alarm_irq_handler(int irq, void *dev_id)
static ssize_t show_fan_alarm(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(fan1_alarm, S_IRUGO, show_fan_alarm, NULL);
static int fan_alarm_init(struct gpio_fan_data *fan_data,
struct gpio_fan_alarm *alarm)
static void fan_alarm_free(struct gpio_fan_data *fan_data)
static void __set_fan_ctrl(struct gpio_fan_data *fan_data, int ctrl_val)
static int __get_fan_ctrl(struct gpio_fan_data *fan_data)
static void set_fan_speed(struct gpio_fan_data *fan_data, int speed_index)
static int get_fan_speed_index(struct gpio_fan_data *fan_data)
static int rpm_to_speed_index(struct gpio_fan_data *fan_data, int rpm)
static ssize_t show_pwm(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_enable(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_rpm_min(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_rpm_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_rpm(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_rpm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(pwm1, S_IRUGO | S_IWUSR, show_pwm, set_pwm);
static DEVICE_ATTR(pwm1_enable, S_IRUGO | S_IWUSR,
show_pwm_enable, set_pwm_enable);
static DEVICE_ATTR(pwm1_mode, S_IRUGO, show_pwm_mode, NULL);
static DEVICE_ATTR(fan1_min, S_IRUGO, show_rpm_min, NULL);
static DEVICE_ATTR(fan1_max, S_IRUGO, show_rpm_max, NULL);
static DEVICE_ATTR(fan1_input, S_IRUGO, show_rpm, NULL);
static DEVICE_ATTR(fan1_target, S_IRUGO | S_IWUSR, show_rpm, set_rpm);
static struct attribute *gpio_fan_ctrl_attributes[] = ;
static const struct attribute_group gpio_fan_ctrl_group = ;
static int fan_ctrl_init(struct gpio_fan_data *fan_data,
struct gpio_fan_platform_data *pdata)
static void fan_ctrl_free(struct gpio_fan_data *fan_data)
static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static int __devinit gpio_fan_probe(struct platform_device *pdev)
static int __devexit gpio_fan_remove(struct platform_device *pdev)
static int gpio_fan_suspend(struct platform_device *pdev, pm_message_t state)
static int gpio_fan_resume(struct platform_device *pdev)
#define gpio_fan_suspend NULL
#define gpio_fan_resume NULL
static struct platform_driver gpio_fan_driver = ;
static int __init gpio_fan_init(void)
static void __exit gpio_fan_exit(void)
module_init(gpio_fan_init);
module_exit(gpio_fan_exit);
MODULE_AUTHOR("Simon Guinot <sguinot@lacie.com>");
MODULE_DESCRIPTION("GPIO FAN driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:gpio-fan");
