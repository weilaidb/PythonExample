struct gpio_button_data ;
struct gpio_keys_drvdata ;
static inline int get_n_events_by_type(int type)
static void gpio_keys_disable_button(struct gpio_button_data *bdata)
static void gpio_keys_enable_button(struct gpio_button_data *bdata)
static ssize_t gpio_keys_attr_show_helper(struct gpio_keys_drvdata *ddata,
char *buf, unsigned int type,
bool only_disabled)
static ssize_t gpio_keys_attr_store_helper(struct gpio_keys_drvdata *ddata,
const char *buf, unsigned int type)
#define ATTR_SHOW_FN(name, type, only_disabled)				\
static ssize_t gpio_keys_show_##name(struct device *dev,		\
struct device_attribute *attr,	\
char *buf)				\
ATTR_SHOW_FN(keys, EV_KEY, false);
ATTR_SHOW_FN(switches, EV_SW, false);
ATTR_SHOW_FN(disabled_keys, EV_KEY, true);
ATTR_SHOW_FN(disabled_switches, EV_SW, true);
static DEVICE_ATTR(keys, S_IRUGO, gpio_keys_show_keys, NULL);
static DEVICE_ATTR(switches, S_IRUGO, gpio_keys_show_switches, NULL);
#define ATTR_STORE_FN(name, type)					\
static ssize_t gpio_keys_store_##name(struct device *dev,		\
struct device_attribute *attr,	\
const char *buf,			\
size_t count)			\
ATTR_STORE_FN(disabled_keys, EV_KEY);
ATTR_STORE_FN(disabled_switches, EV_SW);
static DEVICE_ATTR(disabled_keys, S_IWUSR | S_IRUGO,
gpio_keys_show_disabled_keys,
gpio_keys_store_disabled_keys);
static DEVICE_ATTR(disabled_switches, S_IWUSR | S_IRUGO,
gpio_keys_show_disabled_switches,
gpio_keys_store_disabled_switches);
static struct attribute *gpio_keys_attrs[] = ;
static struct attribute_group gpio_keys_attr_group = ;
static void gpio_keys_report_event(struct gpio_button_data *bdata)
static void gpio_keys_work_func(struct work_struct *work)
static void gpio_keys_timer(unsigned long _data)
static irqreturn_t gpio_keys_isr(int irq, void *dev_id)
static int __devinit gpio_keys_setup_key(struct platform_device *pdev,
struct gpio_button_data *bdata,
struct gpio_keys_button *button)
static int gpio_keys_open(struct input_dev *input)
static void gpio_keys_close(struct input_dev *input)
static int __devinit gpio_keys_probe(struct platform_device *pdev)
static int __devexit gpio_keys_remove(struct platform_device *pdev)
static int gpio_keys_suspend(struct device *dev)
static int gpio_keys_resume(struct device *dev)
static const struct dev_pm_ops gpio_keys_pm_ops = ;
static struct platform_driver gpio_keys_device_driver = ;
static int __init gpio_keys_init(void)
static void __exit gpio_keys_exit(void)
module_init(gpio_keys_init);
module_exit(gpio_keys_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Phil Blundell <pb@handhelds.org>");
MODULE_DESCRIPTION("Keyboard driver for CPU GPIOs");
MODULE_ALIAS("platform:gpio-keys");
