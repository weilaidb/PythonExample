static int debug;
#define IRCTL_DEV_NAME	"BaseRemoteCtl"
#define NOPLUG		-1
#define LOGHEAD		"lirc_dev (%s[%d]): "
static dev_t lirc_base_dev;
struct irctl ;
static DEFINE_MUTEX(lirc_dev_lock);
static struct irctl *irctls[MAX_IRCTL_DEVICES];
static struct class *lirc_class;
static void lirc_irctl_init(struct irctl *ir)
static void lirc_irctl_cleanup(struct irctl *ir)
static int lirc_add_to_buf(struct irctl *ir)
static int lirc_thread(void *irctl)
static struct file_operations lirc_dev_fops = ;
static int lirc_cdev_add(struct irctl *ir)
int lirc_register_driver(struct lirc_driver *d)
EXPORT_SYMBOL(lirc_register_driver);
int lirc_unregister_driver(int minor)
EXPORT_SYMBOL(lirc_unregister_driver);
int lirc_dev_fop_open(struct inode *inode, struct file *file)
EXPORT_SYMBOL(lirc_dev_fop_open);
int lirc_dev_fop_close(struct inode *inode, struct file *file)
EXPORT_SYMBOL(lirc_dev_fop_close);
unsigned int lirc_dev_fop_poll(struct file *file, poll_table *wait)
EXPORT_SYMBOL(lirc_dev_fop_poll);
long lirc_dev_fop_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(lirc_dev_fop_ioctl);
ssize_t lirc_dev_fop_read(struct file *file,
char __user *buffer,
size_t length,
loff_t *ppos)
EXPORT_SYMBOL(lirc_dev_fop_read);
void *lirc_get_pdata(struct file *file)
EXPORT_SYMBOL(lirc_get_pdata);
ssize_t lirc_dev_fop_write(struct file *file, const char __user *buffer,
size_t length, loff_t *ppos)
EXPORT_SYMBOL(lirc_dev_fop_write);
static int __init lirc_dev_init(void)
static void __exit lirc_dev_exit(void)
module_init(lirc_dev_init);
module_exit(lirc_dev_exit);
MODULE_DESCRIPTION("LIRC base driver module");
MODULE_AUTHOR("Artur Lipowski");
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging messages");
