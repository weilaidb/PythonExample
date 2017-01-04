MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <johnpol@2ka.mipt.ru>");
MODULE_DESCRIPTION("Driver for 1-wire Dallas network protocol.");
static int w1_timeout = 10;
int w1_max_slave_count = 10;
int w1_max_slave_ttl = 10;
module_param_named(timeout, w1_timeout, int, 0);
module_param_named(max_slave_count, w1_max_slave_count, int, 0);
module_param_named(slave_ttl, w1_max_slave_ttl, int, 0);
DEFINE_MUTEX(w1_mlock);
LIST_HEAD(w1_masters);
static int w1_attach_slave_device(struct w1_master *dev, struct w1_reg_num *rn);
static int w1_master_match(struct device *dev, struct device_driver *drv)
static int w1_master_probe(struct device *dev)
static void w1_master_release(struct device *dev)
static void w1_slave_release(struct device *dev)
static ssize_t w1_slave_read_name(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t w1_slave_read_id(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute w1_slave_attr_name =
__ATTR(name, S_IRUGO, w1_slave_read_name, NULL);
static struct device_attribute w1_slave_attr_id =
__ATTR(id, S_IRUGO, w1_slave_read_id, NULL);
static ssize_t w1_default_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_default_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute w1_default_attr = ;
static int w1_default_add_slave(struct w1_slave *sl)
static void w1_default_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_default_fops = ;
static struct w1_family w1_default_family = ;
static int w1_uevent(struct device *dev, struct kobj_uevent_env *env);
static struct bus_type w1_bus_type = ;
struct device_driver w1_master_driver = ;
struct device w1_master_device = ;
static struct device_driver w1_slave_driver = ;
static ssize_t w1_master_attribute_show_name(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_store_search(struct device * dev,
struct device_attribute *attr,
const char * buf, size_t count)
static ssize_t w1_master_attribute_show_search(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t w1_master_attribute_store_pullup(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t w1_master_attribute_show_pullup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t w1_master_attribute_show_pointer(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_show_timeout(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_show_max_slave_count(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_show_attempts(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_show_slave_count(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_show_slaves(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_show_add(struct device *dev,
struct device_attribute *attr, char *buf)
static int w1_atoreg_num(struct device *dev, const char *buf, size_t count,
struct w1_reg_num *rn)
static struct w1_slave *w1_slave_search_device(struct w1_master *dev,
struct w1_reg_num *rn)
static ssize_t w1_master_attribute_store_add(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t w1_master_attribute_show_remove(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t w1_master_attribute_store_remove(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
#define W1_MASTER_ATTR_RO(_name, _mode)				\
struct device_attribute w1_master_attribute_##_name =	\
__ATTR(w1_master_##_name, _mode,		\
w1_master_attribute_show_##_name, NULL)
#define W1_MASTER_ATTR_RW(_name, _mode)				\
struct device_attribute w1_master_attribute_##_name =	\
__ATTR(w1_master_##_name, _mode,		\
w1_master_attribute_show_##_name,	\
w1_master_attribute_store_##_name)
static W1_MASTER_ATTR_RO(name, S_IRUGO);
static W1_MASTER_ATTR_RO(slaves, S_IRUGO);
static W1_MASTER_ATTR_RO(slave_count, S_IRUGO);
static W1_MASTER_ATTR_RO(max_slave_count, S_IRUGO);
static W1_MASTER_ATTR_RO(attempts, S_IRUGO);
static W1_MASTER_ATTR_RO(timeout, S_IRUGO);
static W1_MASTER_ATTR_RO(pointer, S_IRUGO);
static W1_MASTER_ATTR_RW(search, S_IRUGO | S_IWUSR | S_IWGRP);
static W1_MASTER_ATTR_RW(pullup, S_IRUGO | S_IWUSR | S_IWGRP);
static W1_MASTER_ATTR_RW(add, S_IRUGO | S_IWUSR | S_IWGRP);
static W1_MASTER_ATTR_RW(remove, S_IRUGO | S_IWUSR | S_IWGRP);
static struct attribute *w1_master_default_attrs[] = ;
static struct attribute_group w1_master_defattr_group = ;
int w1_create_master_attributes(struct w1_master *master)
void w1_destroy_master_attributes(struct w1_master *master)
static int w1_uevent(struct device *dev, struct kobj_uevent_env *env)
;
static int w1_uevent(struct device *dev, struct kobj_uevent_env *env)
static int __w1_attach_slave_device(struct w1_slave *sl)
static int w1_attach_slave_device(struct w1_master *dev, struct w1_reg_num *rn)
void w1_slave_detach(struct w1_slave *sl)
struct w1_master *w1_search_master_id(u32 id)
struct w1_slave *w1_search_slave(struct w1_reg_num *id)
void w1_reconnect_slaves(struct w1_family *f, int attach)
void w1_slave_found(struct w1_master *dev, u64 rn)
void w1_search(struct w1_master *dev, u8 search_type, w1_slave_found_callback cb)
void w1_search_process_cb(struct w1_master *dev, u8 search_type,
w1_slave_found_callback cb)
static void w1_search_process(struct w1_master *dev, u8 search_type)
int w1_process(void *data)
static int __init w1_init(void)
static void __exit w1_fini(void)
module_init(w1_init);
module_exit(w1_fini);
