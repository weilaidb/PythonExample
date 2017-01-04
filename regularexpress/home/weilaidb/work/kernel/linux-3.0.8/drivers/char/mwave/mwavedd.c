MODULE_DESCRIPTION("3780i Advanced Communications Processor (Mwave) driver");
MODULE_AUTHOR("Mike Sullivan and Paul Schroeder");
MODULE_LICENSE("GPL");
static DEFINE_MUTEX(mwave_mutex);
int mwave_debug = 0;
int mwave_3780i_irq = 0;
int mwave_3780i_io = 0;
int mwave_uart_irq = 0;
int mwave_uart_io = 0;
module_param(mwave_debug, int, 0);
module_param(mwave_3780i_irq, int, 0);
module_param(mwave_3780i_io, int, 0);
module_param(mwave_uart_irq, int, 0);
module_param(mwave_uart_io, int, 0);
static int mwave_open(struct inode *inode, struct file *file);
static int mwave_close(struct inode *inode, struct file *file);
static long mwave_ioctl(struct file *filp, unsigned int iocmd,
unsigned long ioarg);
MWAVE_DEVICE_DATA mwave_s_mdd;
static int mwave_open(struct inode *inode, struct file *file)
static int mwave_close(struct inode *inode, struct file *file)
static long mwave_ioctl(struct file *file, unsigned int iocmd,
unsigned long ioarg)
static ssize_t mwave_read(struct file *file, char __user *buf, size_t count,
loff_t * ppos)
static ssize_t mwave_write(struct file *file, const char __user *buf,
size_t count, loff_t * ppos)
static int register_serial_portandirq(unsigned int port, int irq)
static const struct file_operations mwave_fops = ;
static struct miscdevice mwave_misc_dev = ;
static void mwave_exit(void)
module_exit(mwave_exit);
static int __init mwave_init(void)
module_init(mwave_init);
