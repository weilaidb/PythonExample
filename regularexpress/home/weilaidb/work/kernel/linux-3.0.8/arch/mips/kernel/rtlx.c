static struct rtlx_info *rtlx;
static int major;
static char module_name[] = "rtlx";
static struct chan_waitqueues  channel_wqs[RTLX_CHANNELS];
static struct vpe_notifications notify;
static int sp_stopping;
extern void *vpe_get_shared(int index);
static void rtlx_dispatch(void)
static irqreturn_t rtlx_interrupt(int irq, void *dev_id)
static void __used dump_rtlx(void)
static int rtlx_init(struct rtlx_info *rtlxi)
static void starting(int vpe)
static void stopping(int vpe)
int rtlx_open(int index, int can_sleep)
int rtlx_release(int index)
unsigned int rtlx_read_poll(int index, int can_sleep)
static inline int write_spacefree(int read, int write, int size)
unsigned int rtlx_write_poll(int index)
ssize_t rtlx_read(int index, void __user *buff, size_t count)
ssize_t rtlx_write(int index, const void __user *buffer, size_t count)
static int file_open(struct inode *inode, struct file *filp)
static int file_release(struct inode *inode, struct file *filp)
static unsigned int file_poll(struct file *file, poll_table * wait)
static ssize_t file_read(struct file *file, char __user * buffer, size_t count,
loff_t * ppos)
static ssize_t file_write(struct file *file, const char __user * buffer,
size_t count, loff_t * ppos)
static const struct file_operations rtlx_fops = ;
static struct irqaction rtlx_irq = ;
static int rtlx_irq_num = MIPS_CPU_IRQ_BASE + MIPS_CPU_RTLX_IRQ;
static char register_chrdev_failed[] __initdata =
KERN_ERR "rtlx_module_init: unable to register device\n";
static int __init rtlx_module_init(void)
static void __exit rtlx_module_exit(void)
module_init(rtlx_module_init);
module_exit(rtlx_module_exit);
MODULE_DESCRIPTION("MIPS RTLX");
MODULE_AUTHOR("Elizabeth Oldham, MIPS Technologies, Inc.");
MODULE_LICENSE("GPL");
