#define CREATE_TRACE_POINTS
#define	extra_checks	1
#define	extra_checks	0
static DEFINE_SPINLOCK(gpio_lock);
struct gpio_desc ;
static struct gpio_desc gpio_desc[ARCH_NR_GPIOS];
static DEFINE_IDR(dirent_idr);
static inline void desc_set_label(struct gpio_desc *d, const char *label)
static int gpio_ensure_requested(struct gpio_desc *desc, unsigned offset)
static inline struct gpio_chip *gpio_to_chip(unsigned gpio)
static int gpiochip_find_base(int ngpio)
int __init gpiochip_reserve(int start, int ngpio)
static DEFINE_MUTEX(sysfs_lock);
static ssize_t gpio_direction_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gpio_direction_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static DEVICE_ATTR(direction, 0644,
gpio_direction_show, gpio_direction_store);
static ssize_t gpio_value_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gpio_value_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static const DEVICE_ATTR(value, 0644,
gpio_value_show, gpio_value_store);
static irqreturn_t gpio_sysfs_irq(int irq, void *priv)
static int gpio_setup_irq(struct gpio_desc *desc, struct device *dev,
unsigned long gpio_flags)
static const struct  trigger_types[] = ;
static ssize_t gpio_edge_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gpio_edge_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static DEVICE_ATTR(edge, 0644, gpio_edge_show, gpio_edge_store);
static int sysfs_set_active_low(struct gpio_desc *desc, struct device *dev,
int value)
static ssize_t gpio_active_low_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t gpio_active_low_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t size)
static const DEVICE_ATTR(active_low, 0644,
gpio_active_low_show, gpio_active_low_store);
static const struct attribute *gpio_attrs[] = ;
static const struct attribute_group gpio_attr_group = ;
static ssize_t chip_base_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(base, 0444, chip_base_show, NULL);
static ssize_t chip_label_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(label, 0444, chip_label_show, NULL);
static ssize_t chip_ngpio_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ngpio, 0444, chip_ngpio_show, NULL);
static const struct attribute *gpiochip_attrs[] = ;
static const struct attribute_group gpiochip_attr_group = ;
static ssize_t export_store(struct class *class,
struct class_attribute *attr,
const char *buf, size_t len)
static ssize_t unexport_store(struct class *class,
struct class_attribute *attr,
const char *buf, size_t len)
static struct class_attribute gpio_class_attrs[] = ;
static struct class gpio_class = ;
int gpio_export(unsigned gpio, bool direction_may_change)
EXPORT_SYMBOL_GPL(gpio_export);
static int match_export(struct device *dev, void *data)
int gpio_export_link(struct device *dev, const char *name, unsigned gpio)
EXPORT_SYMBOL_GPL(gpio_export_link);
int gpio_sysfs_set_active_low(unsigned gpio, int value)
EXPORT_SYMBOL_GPL(gpio_sysfs_set_active_low);
void gpio_unexport(unsigned gpio)
EXPORT_SYMBOL_GPL(gpio_unexport);
static int gpiochip_export(struct gpio_chip *chip)
static void gpiochip_unexport(struct gpio_chip *chip)
static int __init gpiolib_sysfs_init(void)
postcore_initcall(gpiolib_sysfs_init);
static inline int gpiochip_export(struct gpio_chip *chip)
static inline void gpiochip_unexport(struct gpio_chip *chip)
int gpiochip_add(struct gpio_chip *chip)
EXPORT_SYMBOL_GPL(gpiochip_add);
int gpiochip_remove(struct gpio_chip *chip)
EXPORT_SYMBOL_GPL(gpiochip_remove);
struct gpio_chip *gpiochip_find(void *data,
int (*match)(struct gpio_chip *chip, void *data))
EXPORT_SYMBOL_GPL(gpiochip_find);
int gpio_request(unsigned gpio, const char *label)
EXPORT_SYMBOL_GPL(gpio_request);
void gpio_free(unsigned gpio)
EXPORT_SYMBOL_GPL(gpio_free);
int gpio_request_one(unsigned gpio, unsigned long flags, const char *label)
EXPORT_SYMBOL_GPL(gpio_request_one);
int gpio_request_array(const struct gpio *array, size_t num)
EXPORT_SYMBOL_GPL(gpio_request_array);
void gpio_free_array(const struct gpio *array, size_t num)
EXPORT_SYMBOL_GPL(gpio_free_array);
const char *gpiochip_is_requested(struct gpio_chip *chip, unsigned offset)
EXPORT_SYMBOL_GPL(gpiochip_is_requested);
int gpio_direction_input(unsigned gpio)
EXPORT_SYMBOL_GPL(gpio_direction_input);
int gpio_direction_output(unsigned gpio, int value)
EXPORT_SYMBOL_GPL(gpio_direction_output);
int gpio_set_debounce(unsigned gpio, unsigned debounce)
EXPORT_SYMBOL_GPL(gpio_set_debounce);
int __gpio_get_value(unsigned gpio)
EXPORT_SYMBOL_GPL(__gpio_get_value);
void __gpio_set_value(unsigned gpio, int value)
EXPORT_SYMBOL_GPL(__gpio_set_value);
int __gpio_cansleep(unsigned gpio)
EXPORT_SYMBOL_GPL(__gpio_cansleep);
int __gpio_to_irq(unsigned gpio)
EXPORT_SYMBOL_GPL(__gpio_to_irq);
int gpio_get_value_cansleep(unsigned gpio)
EXPORT_SYMBOL_GPL(gpio_get_value_cansleep);
void gpio_set_value_cansleep(unsigned gpio, int value)
EXPORT_SYMBOL_GPL(gpio_set_value_cansleep);
static void gpiolib_dbg_show(struct seq_file *s, struct gpio_chip *chip)
static int gpiolib_show(struct seq_file *s, void *unused)
static int gpiolib_open(struct inode *inode, struct file *file)
static const struct file_operations gpiolib_operations = ;
static int __init gpiolib_debugfs_init(void)
subsys_initcall(gpiolib_debugfs_init);
