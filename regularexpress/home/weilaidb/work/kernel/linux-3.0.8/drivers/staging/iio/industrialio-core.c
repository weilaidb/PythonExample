#define IIO_ID_PREFIX "device"
#define IIO_ID_FORMAT IIO_ID_PREFIX "%d"
static DEFINE_IDA(iio_ida);
static DEFINE_IDA(iio_chrdev_ida);
static DEFINE_SPINLOCK(iio_ida_lock);
dev_t iio_devt;
EXPORT_SYMBOL(iio_devt);
#define IIO_DEV_MAX 256
struct bus_type iio_bus_type = ;
EXPORT_SYMBOL(iio_bus_type);
static const char * const iio_chan_type_name_spec_shared[] = ;
static const char * const iio_chan_type_name_spec_complex[] = ;
static const char * const iio_modifier_names_light[] = ;
static const char * const iio_modifier_names_axial[] = ;
static const char * const iio_chan_info_postfix[] = ;
int iio_push_event(struct iio_dev *dev_info,
int ev_line,
int ev_code,
s64 timestamp)
EXPORT_SYMBOL(iio_push_event);
ssize_t iio_read_const_attr(struct device *dev,
struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL(iio_read_const_attr);
static ssize_t iio_event_chrdev_read(struct file *filep,
char __user *buf,
size_t count,
loff_t *f_ps)
static int iio_event_chrdev_release(struct inode *inode, struct file *filep)
static int iio_event_chrdev_open(struct inode *inode, struct file *filep)
static const struct file_operations iio_event_chrdev_fileops = ;
static void iio_event_dev_release(struct device *dev)
;
static struct device_type iio_event_type = ;
int iio_device_get_chrdev_minor(void)
void iio_device_free_chrdev_minor(int val)
static int iio_setup_ev_int(struct iio_event_interface *ev_int,
const char *dev_name,
int index,
struct module *owner,
struct device *dev)
static void iio_free_ev_int(struct iio_event_interface *ev_int)
static int __init iio_dev_init(void)
static void __exit iio_dev_exit(void)
static int __init iio_init(void)
static void __exit iio_exit(void)
static ssize_t iio_read_channel_info(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_write_channel_info(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int __iio_build_postfix(struct iio_chan_spec const *chan,
bool generic,
const char *postfix,
char **result)
int __iio_device_attr_init(struct device_attribute *dev_attr,
const char *postfix,
struct iio_chan_spec const *chan,
ssize_t (*readfunc)(struct device *dev,
struct device_attribute *attr,
char *buf),
ssize_t (*writefunc)(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len),
bool generic)
void __iio_device_attr_deinit(struct device_attribute *dev_attr)
int __iio_add_chan_devattr(const char *postfix,
const char *group,
struct iio_chan_spec const *chan,
ssize_t (*readfunc)(struct device *dev,
struct device_attribute *attr,
char *buf),
ssize_t (*writefunc)(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len),
int mask,
bool generic,
struct device *dev,
struct list_head *attr_list)
static int iio_device_add_channel_sysfs(struct iio_dev *dev_info,
struct iio_chan_spec const *chan)
static void iio_device_remove_and_free_read_attr(struct iio_dev *dev_info,
struct iio_dev_attr *p)
static ssize_t iio_show_dev_name(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(name, S_IRUGO, iio_show_dev_name, NULL);
static int iio_device_register_sysfs(struct iio_dev *dev_info)
static void iio_device_unregister_sysfs(struct iio_dev *dev_info)
int iio_get_new_ida_val(struct ida *this_ida)
EXPORT_SYMBOL(iio_get_new_ida_val);
void iio_free_ida_val(struct ida *this_ida, int id)
EXPORT_SYMBOL(iio_free_ida_val);
static const char * const iio_ev_type_text[] = ;
static const char * const iio_ev_dir_text[] = ;
static ssize_t iio_ev_state_store(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t iio_ev_state_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_ev_value_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t iio_ev_value_store(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int iio_device_add_event_sysfs(struct iio_dev *dev_info,
struct iio_chan_spec const *chan)
static inline void __iio_remove_all_event_sysfs(struct iio_dev *dev_info,
const char *groupname,
int num)
static inline int __iio_add_event_config_attrs(struct iio_dev *dev_info, int i)
static inline int __iio_remove_event_config_attrs(struct iio_dev *dev_info,
int i)
static int iio_device_register_eventset(struct iio_dev *dev_info)
static void iio_device_unregister_eventset(struct iio_dev *dev_info)
static void iio_dev_release(struct device *device)
static struct device_type iio_dev_type = ;
struct iio_dev *iio_allocate_device(int sizeof_priv)
EXPORT_SYMBOL(iio_allocate_device);
void iio_free_device(struct iio_dev *dev)
EXPORT_SYMBOL(iio_free_device);
int iio_device_register(struct iio_dev *dev_info)
EXPORT_SYMBOL(iio_device_register);
void iio_device_unregister(struct iio_dev *dev_info)
EXPORT_SYMBOL(iio_device_unregister);
void iio_put(void)
void iio_get(void)
subsys_initcall(iio_init);
module_exit(iio_exit);
MODULE_AUTHOR("Jonathan Cameron <jic23@cam.ac.uk>");
MODULE_DESCRIPTION("Industrial I/O core");
MODULE_LICENSE("GPL");
