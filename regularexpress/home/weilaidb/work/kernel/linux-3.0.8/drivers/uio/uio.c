#define UIO_MAX_DEVICES		(1U << MINORBITS)
struct uio_device ;
static int uio_major;
static struct cdev *uio_cdev;
static DEFINE_IDR(uio_idr);
static const struct file_operations uio_fops;
static DEFINE_MUTEX(minor_lock);
struct uio_map ;
#define to_map(map) container_of(map, struct uio_map, kobj)
static ssize_t map_name_show(struct uio_mem *mem, char *buf)
static ssize_t map_addr_show(struct uio_mem *mem, char *buf)
static ssize_t map_size_show(struct uio_mem *mem, char *buf)
static ssize_t map_offset_show(struct uio_mem *mem, char *buf)
struct map_sysfs_entry ;
static struct map_sysfs_entry name_attribute =
__ATTR(name, S_IRUGO, map_name_show, NULL);
static struct map_sysfs_entry addr_attribute =
__ATTR(addr, S_IRUGO, map_addr_show, NULL);
static struct map_sysfs_entry size_attribute =
__ATTR(size, S_IRUGO, map_size_show, NULL);
static struct map_sysfs_entry offset_attribute =
__ATTR(offset, S_IRUGO, map_offset_show, NULL);
static struct attribute *attrs[] = ;
static void map_release(struct kobject *kobj)
static ssize_t map_type_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static const struct sysfs_ops map_sysfs_ops = ;
static struct kobj_type map_attr_type = ;
struct uio_portio ;
#define to_portio(portio) container_of(portio, struct uio_portio, kobj)
static ssize_t portio_name_show(struct uio_port *port, char *buf)
static ssize_t portio_start_show(struct uio_port *port, char *buf)
static ssize_t portio_size_show(struct uio_port *port, char *buf)
static ssize_t portio_porttype_show(struct uio_port *port, char *buf)
struct portio_sysfs_entry ;
static struct portio_sysfs_entry portio_name_attribute =
__ATTR(name, S_IRUGO, portio_name_show, NULL);
static struct portio_sysfs_entry portio_start_attribute =
__ATTR(start, S_IRUGO, portio_start_show, NULL);
static struct portio_sysfs_entry portio_size_attribute =
__ATTR(size, S_IRUGO, portio_size_show, NULL);
static struct portio_sysfs_entry portio_porttype_attribute =
__ATTR(porttype, S_IRUGO, portio_porttype_show, NULL);
static struct attribute *portio_attrs[] = ;
static void portio_release(struct kobject *kobj)
static ssize_t portio_type_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static const struct sysfs_ops portio_sysfs_ops = ;
static struct kobj_type portio_attr_type = ;
static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_event(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute uio_class_attributes[] = ;
static struct class uio_class = ;
static int uio_dev_add_attributes(struct uio_device *idev)
static void uio_dev_del_attributes(struct uio_device *idev)
static int uio_get_minor(struct uio_device *idev)
static void uio_free_minor(struct uio_device *idev)
void uio_event_notify(struct uio_info *info)
EXPORT_SYMBOL_GPL(uio_event_notify);
static irqreturn_t uio_interrupt(int irq, void *dev_id)
struct uio_listener ;
static int uio_open(struct inode *inode, struct file *filep)
static int uio_fasync(int fd, struct file *filep, int on)
static int uio_release(struct inode *inode, struct file *filep)
static unsigned int uio_poll(struct file *filep, poll_table *wait)
static ssize_t uio_read(struct file *filep, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t uio_write(struct file *filep, const char __user *buf,
size_t count, loff_t *ppos)
static int uio_find_mem_index(struct vm_area_struct *vma)
static void uio_vma_open(struct vm_area_struct *vma)
static void uio_vma_close(struct vm_area_struct *vma)
static int uio_vma_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct uio_vm_ops = ;
static int uio_mmap_physical(struct vm_area_struct *vma)
static int uio_mmap_logical(struct vm_area_struct *vma)
static int uio_mmap(struct file *filep, struct vm_area_struct *vma)
static const struct file_operations uio_fops = ;
static int uio_major_init(void)
static void uio_major_cleanup(void)
static int init_uio_class(void)
static void release_uio_class(void)
int __uio_register_device(struct module *owner,
struct device *parent,
struct uio_info *info)
EXPORT_SYMBOL_GPL(__uio_register_device);
void uio_unregister_device(struct uio_info *info)
EXPORT_SYMBOL_GPL(uio_unregister_device);
static int __init uio_init(void)
static void __exit uio_exit(void)
module_init(uio_init)
module_exit(uio_exit)
MODULE_LICENSE("GPL v2");
