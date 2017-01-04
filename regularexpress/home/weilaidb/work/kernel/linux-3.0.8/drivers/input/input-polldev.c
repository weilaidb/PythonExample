#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Dmitry Torokhov <dtor@mail.ru>");
MODULE_DESCRIPTION("Generic implementation of a polled input device");
MODULE_LICENSE("GPL v2");
MODULE_VERSION("0.1");
static void input_polldev_queue_work(struct input_polled_dev *dev)
static void input_polled_device_work(struct work_struct *work)
static int input_open_polled_device(struct input_dev *input)
static void input_close_polled_device(struct input_dev *input)
static ssize_t input_polldev_get_poll(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t input_polldev_set_poll(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static DEVICE_ATTR(poll, S_IRUGO | S_IWUSR, input_polldev_get_poll,
input_polldev_set_poll);
static ssize_t input_polldev_get_max(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(max, S_IRUGO, input_polldev_get_max, NULL);
static ssize_t input_polldev_get_min(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(min, S_IRUGO, input_polldev_get_min, NULL);
static struct attribute *sysfs_attrs[] = ;
static struct attribute_group input_polldev_attribute_group = ;
struct input_polled_dev *input_allocate_polled_device(void)
EXPORT_SYMBOL(input_allocate_polled_device);
void input_free_polled_device(struct input_polled_dev *dev)
EXPORT_SYMBOL(input_free_polled_device);
int input_register_polled_device(struct input_polled_dev *dev)
EXPORT_SYMBOL(input_register_polled_device);
void input_unregister_polled_device(struct input_polled_dev *dev)
EXPORT_SYMBOL(input_unregister_polled_device);
