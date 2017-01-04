static LIST_HEAD(container_list);
static DEFINE_MUTEX(container_list_lock);
static struct class enclosure_class;
struct enclosure_device *enclosure_find(struct device *dev,
struct enclosure_device *start)
EXPORT_SYMBOL_GPL(enclosure_find);
int enclosure_for_each_device(int (*fn)(struct enclosure_device *, void *),
void *data)
EXPORT_SYMBOL_GPL(enclosure_for_each_device);
struct enclosure_device *
enclosure_register(struct device *dev, const char *name, int components,
struct enclosure_component_callbacks *cb)
EXPORT_SYMBOL_GPL(enclosure_register);
static struct enclosure_component_callbacks enclosure_null_callbacks;
void enclosure_unregister(struct enclosure_device *edev)
EXPORT_SYMBOL_GPL(enclosure_unregister);
#define ENCLOSURE_NAME_SIZE	64
static void enclosure_link_name(struct enclosure_component *cdev, char *name)
static void enclosure_remove_links(struct enclosure_component *cdev)
static int enclosure_add_links(struct enclosure_component *cdev)
static void enclosure_release(struct device *cdev)
static void enclosure_component_release(struct device *dev)
static const struct attribute_group *enclosure_groups[];
struct enclosure_component *
enclosure_component_register(struct enclosure_device *edev,
unsigned int number,
enum enclosure_component_type type,
const char *name)
EXPORT_SYMBOL_GPL(enclosure_component_register);
int enclosure_add_device(struct enclosure_device *edev, int component,
struct device *dev)
EXPORT_SYMBOL_GPL(enclosure_add_device);
int enclosure_remove_device(struct enclosure_device *edev, struct device *dev)
EXPORT_SYMBOL_GPL(enclosure_remove_device);
static ssize_t enclosure_show_components(struct device *cdev,
struct device_attribute *attr,
char *buf)
static struct device_attribute enclosure_attrs[] = ;
static struct class enclosure_class = ;
static const char *const enclosure_status [] = ;
static const char *const enclosure_type [] = ;
static ssize_t get_component_fault(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t set_component_fault(struct device *cdev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_component_status(struct device *cdev,
struct device_attribute *attr,char *buf)
static ssize_t set_component_status(struct device *cdev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_component_active(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t set_component_active(struct device *cdev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_component_locate(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t set_component_locate(struct device *cdev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t get_component_type(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(fault, S_IRUGO | S_IWUSR, get_component_fault,
set_component_fault);
static DEVICE_ATTR(status, S_IRUGO | S_IWUSR, get_component_status,
set_component_status);
static DEVICE_ATTR(active, S_IRUGO | S_IWUSR, get_component_active,
set_component_active);
static DEVICE_ATTR(locate, S_IRUGO | S_IWUSR, get_component_locate,
set_component_locate);
static DEVICE_ATTR(type, S_IRUGO, get_component_type, NULL);
static struct attribute *enclosure_component_attrs[] = ;
static struct attribute_group enclosure_group = ;
static const struct attribute_group *enclosure_groups[] = ;
static int __init enclosure_init(void)
static void __exit enclosure_exit(void)
module_init(enclosure_init);
module_exit(enclosure_exit);
MODULE_AUTHOR("James Bottomley");
MODULE_DESCRIPTION("Enclosure Services");
MODULE_LICENSE("GPL v2");
