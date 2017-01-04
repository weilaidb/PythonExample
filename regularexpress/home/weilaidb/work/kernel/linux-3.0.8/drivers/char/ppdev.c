#define PP_VERSION "ppdev: user-space parallel port driver"
#define CHRDEV "ppdev"
struct pp_struct ;
#define PP_CLAIMED    (1<<0)
#define PP_EXCL       (1<<1)
#define PP_INTERRUPT_TIMEOUT (10 * HZ)
#define PP_BUFFER_SIZE 1024
#define PARDEVICE_MAX 8
#define ROUND_UP(x,y) (((x)+(y)-1)/(y))
static DEFINE_MUTEX(pp_do_mutex);
static inline void pp_enable_irq (struct pp_struct *pp)
static ssize_t pp_read (struct file * file, char __user * buf, size_t count,
loff_t * ppos)
static ssize_t pp_write (struct file * file, const char __user * buf,
size_t count, loff_t * ppos)
static void pp_irq (void *private)
static int register_device (int minor, struct pp_struct *pp)
static enum ieee1284_phase init_phase (int mode)
static int pp_do_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long pp_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int pp_open (struct inode * inode, struct file * file)
static int pp_release (struct inode * inode, struct file * file)
static unsigned int pp_poll (struct file * file, poll_table * wait)
static struct class *ppdev_class;
static const struct file_operations pp_fops = ;
static void pp_attach(struct parport *port)
static void pp_detach(struct parport *port)
static struct parport_driver pp_driver = ;
static int __init ppdev_init (void)
static void __exit ppdev_cleanup (void)
module_init(ppdev_init);
module_exit(ppdev_cleanup);
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV_MAJOR(PP_MAJOR);
