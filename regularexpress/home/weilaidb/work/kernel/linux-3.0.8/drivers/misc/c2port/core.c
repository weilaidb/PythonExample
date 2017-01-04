#define DRIVER_NAME             "c2port"
#define DRIVER_VERSION          "0.51.0"
static DEFINE_SPINLOCK(c2port_idr_lock);
static DEFINE_IDR(c2port_idr);
static struct class *c2port_class;
#define C2PORT_DEVICEID		0x00
#define C2PORT_REVID		0x01
#define C2PORT_FPCTL		0x02
#define C2PORT_FPDAT		0xB4
#define C2PORT_GET_VERSION	0x01
#define C2PORT_DEVICE_ERASE	0x03
#define C2PORT_BLOCK_READ	0x06
#define C2PORT_BLOCK_WRITE	0x07
#define C2PORT_PAGE_ERASE	0x08
#define C2PORT_INVALID_COMMAND	0x00
#define C2PORT_COMMAND_FAILED	0x02
#define C2PORT_COMMAND_OK	0x0d
static void c2port_reset(struct c2port_device *dev)
static void c2port_strobe_ck(struct c2port_device *dev)
static void c2port_write_ar(struct c2port_device *dev, u8 addr)
static int c2port_read_ar(struct c2port_device *dev, u8 *addr)
static int c2port_write_dr(struct c2port_device *dev, u8 data)
static int c2port_read_dr(struct c2port_device *dev, u8 *data)
static int c2port_poll_in_busy(struct c2port_device *dev)
static int c2port_poll_out_ready(struct c2port_device *dev)
static ssize_t c2port_show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t c2port_show_flash_blocks_num(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t c2port_show_flash_block_size(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t c2port_show_flash_size(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t c2port_show_access(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t c2port_store_access(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t c2port_store_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t __c2port_show_dev_id(struct c2port_device *dev, char *buf)
static ssize_t c2port_show_dev_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t __c2port_show_rev_id(struct c2port_device *dev, char *buf)
static ssize_t c2port_show_rev_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t c2port_show_flash_access(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t __c2port_store_flash_access(struct c2port_device *dev,
int status)
static ssize_t c2port_store_flash_access(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t __c2port_write_flash_erase(struct c2port_device *dev)
static ssize_t c2port_store_flash_erase(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t __c2port_read_flash_data(struct c2port_device *dev,
char *buffer, loff_t offset, size_t count)
static ssize_t c2port_read_flash_data(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buffer, loff_t offset, size_t count)
static ssize_t __c2port_write_flash_data(struct c2port_device *dev,
char *buffer, loff_t offset, size_t count)
static ssize_t c2port_write_flash_data(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buffer, loff_t offset, size_t count)
static struct device_attribute c2port_attrs[] = ;
static struct bin_attribute c2port_bin_attrs = ;
struct c2port_device *c2port_device_register(char *name,
struct c2port_ops *ops, void *devdata)
EXPORT_SYMBOL(c2port_device_register);
void c2port_device_unregister(struct c2port_device *c2dev)
EXPORT_SYMBOL(c2port_device_unregister);
static int __init c2port_init(void)
static void __exit c2port_exit(void)
module_init(c2port_init);
module_exit(c2port_exit);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("Silicon Labs C2 port support v. " DRIVER_VERSION);
MODULE_LICENSE("GPL");
