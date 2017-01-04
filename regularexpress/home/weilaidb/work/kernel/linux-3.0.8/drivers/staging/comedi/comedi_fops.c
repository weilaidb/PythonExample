#undef DEBUG
#define __NO_VERSION__
MODULE_AUTHOR("http:
MODULE_DESCRIPTION("Comedi core module");
MODULE_LICENSE("GPL");
int comedi_debug;
EXPORT_SYMBOL(comedi_debug);
module_param(comedi_debug, int, 0644);
int comedi_autoconfig = 1;
module_param(comedi_autoconfig, bool, 0444);
static int comedi_num_legacy_minors;
module_param(comedi_num_legacy_minors, int, 0444);
static DEFINE_SPINLOCK(comedi_file_info_table_lock);
static struct comedi_device_file_info
*comedi_file_info_table[COMEDI_NUM_MINORS];
static int do_devconfig_ioctl(struct comedi_device *dev,
struct comedi_devconfig __user *arg);
static int do_bufconfig_ioctl(struct comedi_device *dev,
struct comedi_bufconfig __user *arg);
static int do_devinfo_ioctl(struct comedi_device *dev,
struct comedi_devinfo __user *arg,
struct file *file);
static int do_subdinfo_ioctl(struct comedi_device *dev,
struct comedi_subdinfo __user *arg, void *file);
static int do_chaninfo_ioctl(struct comedi_device *dev,
struct comedi_chaninfo __user *arg);
static int do_bufinfo_ioctl(struct comedi_device *dev,
struct comedi_bufinfo __user *arg, void *file);
static int do_cmd_ioctl(struct comedi_device *dev,
struct comedi_cmd __user *arg, void *file);
static int do_lock_ioctl(struct comedi_device *dev, unsigned int arg,
void *file);
static int do_unlock_ioctl(struct comedi_device *dev, unsigned int arg,
void *file);
static int do_cancel_ioctl(struct comedi_device *dev, unsigned int arg,
void *file);
static int do_cmdtest_ioctl(struct comedi_device *dev,
struct comedi_cmd __user *arg, void *file);
static int do_insnlist_ioctl(struct comedi_device *dev,
struct comedi_insnlist __user *arg, void *file);
static int do_insn_ioctl(struct comedi_device *dev,
struct comedi_insn __user *arg, void *file);
static int do_poll_ioctl(struct comedi_device *dev, unsigned int subd,
void *file);
extern void do_become_nonbusy(struct comedi_device *dev,
struct comedi_subdevice *s);
static int do_cancel(struct comedi_device *dev, struct comedi_subdevice *s);
static int comedi_fasync(int fd, struct file *file, int on);
static int is_device_busy(struct comedi_device *dev);
static int resize_async_buffer(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_async *async, unsigned new_size);
static struct device_attribute dev_attr_max_read_buffer_kb;
static struct device_attribute dev_attr_read_buffer_kb;
static struct device_attribute dev_attr_max_write_buffer_kb;
static struct device_attribute dev_attr_write_buffer_kb;
static long comedi_unlocked_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int do_devconfig_ioctl(struct comedi_device *dev,
struct comedi_devconfig __user *arg)
static int do_bufconfig_ioctl(struct comedi_device *dev,
struct comedi_bufconfig __user *arg)
static int do_devinfo_ioctl(struct comedi_device *dev,
struct comedi_devinfo __user *arg,
struct file *file)
static int do_subdinfo_ioctl(struct comedi_device *dev,
struct comedi_subdinfo __user *arg, void *file)
static int do_chaninfo_ioctl(struct comedi_device *dev,
struct comedi_chaninfo __user *arg)
static int do_bufinfo_ioctl(struct comedi_device *dev,
struct comedi_bufinfo __user *arg, void *file)
static int parse_insn(struct comedi_device *dev, struct comedi_insn *insn,
unsigned int *data, void *file);
#define MAX_SAMPLES 256
static int do_insnlist_ioctl(struct comedi_device *dev,
struct comedi_insnlist __user *arg, void *file)
static int check_insn_config_length(struct comedi_insn *insn,
unsigned int *data)
static int parse_insn(struct comedi_device *dev, struct comedi_insn *insn,
unsigned int *data, void *file)
static int do_insn_ioctl(struct comedi_device *dev,
struct comedi_insn __user *arg, void *file)
static void comedi_set_subdevice_runflags(struct comedi_subdevice *s,
unsigned mask, unsigned bits)
static int do_cmd_ioctl(struct comedi_device *dev,
struct comedi_cmd __user *cmd, void *file)
static int do_cmdtest_ioctl(struct comedi_device *dev,
struct comedi_cmd __user *arg, void *file)
static int do_lock_ioctl(struct comedi_device *dev, unsigned int arg,
void *file)
static int do_unlock_ioctl(struct comedi_device *dev, unsigned int arg,
void *file)
static int do_cancel_ioctl(struct comedi_device *dev, unsigned int arg,
void *file)
static int do_poll_ioctl(struct comedi_device *dev, unsigned int arg,
void *file)
static int do_cancel(struct comedi_device *dev, struct comedi_subdevice *s)
static void comedi_unmap(struct vm_area_struct *area)
static struct vm_operations_struct comedi_vm_ops = ;
static int comedi_mmap(struct file *file, struct vm_area_struct *vma)
static unsigned int comedi_poll(struct file *file, poll_table * wait)
static ssize_t comedi_write(struct file *file, const char __user *buf,
size_t nbytes, loff_t *offset)
static ssize_t comedi_read(struct file *file, char __user *buf, size_t nbytes,
loff_t *offset)
void do_become_nonbusy(struct comedi_device *dev, struct comedi_subdevice *s)
static int comedi_open(struct inode *inode, struct file *file)
static int comedi_close(struct inode *inode, struct file *file)
static int comedi_fasync(int fd, struct file *file, int on)
const struct file_operations comedi_fops = ;
struct class *comedi_class;
static struct cdev comedi_cdev;
static void comedi_cleanup_legacy_minors(void)
static int __init comedi_init(void)
static void __exit comedi_cleanup(void)
module_init(comedi_init);
module_exit(comedi_cleanup);
void comedi_error(const struct comedi_device *dev, const char *s)
EXPORT_SYMBOL(comedi_error);
void comedi_event(struct comedi_device *dev, struct comedi_subdevice *s)
EXPORT_SYMBOL(comedi_event);
unsigned comedi_get_subdevice_runflags(struct comedi_subdevice *s)
EXPORT_SYMBOL(comedi_get_subdevice_runflags);
static int is_device_busy(struct comedi_device *dev)
static void comedi_device_init(struct comedi_device *dev)
static void comedi_device_cleanup(struct comedi_device *dev)
int comedi_alloc_board_minor(struct device *hardware_device)
void comedi_free_board_minor(unsigned minor)
int comedi_alloc_subdevice_minor(struct comedi_device *dev,
struct comedi_subdevice *s)
void comedi_free_subdevice_minor(struct comedi_subdevice *s)
struct comedi_device_file_info *comedi_get_device_file_info(unsigned minor)
EXPORT_SYMBOL_GPL(comedi_get_device_file_info);
static int resize_async_buffer(struct comedi_device *dev,
struct comedi_subdevice *s,
struct comedi_async *async, unsigned new_size)
static const unsigned bytes_per_kibi = 1024;
static ssize_t show_max_read_buffer_kb(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_max_read_buffer_kb(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_max_read_buffer_kb = ;
static ssize_t show_read_buffer_kb(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_read_buffer_kb(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_read_buffer_kb = ;
static ssize_t show_max_write_buffer_kb(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t store_max_write_buffer_kb(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_max_write_buffer_kb = ;
static ssize_t show_write_buffer_kb(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_write_buffer_kb(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute dev_attr_write_buffer_kb = ;
