#define LIRC_DRIVER_NAME "lirc_parallel"
#define LIRC_IRQ 7
#define LIRC_PORT 0x378
#define LIRC_TIMER 65536
static int debug;
static int check_pselecd;
unsigned int irq = LIRC_IRQ;
unsigned int io = LIRC_PORT;
unsigned int timer;
unsigned int default_timer = LIRC_TIMER;
#define RBUF_SIZE (256)
static int rbuf[RBUF_SIZE];
DECLARE_WAIT_QUEUE_HEAD(lirc_wait);
unsigned int rptr;
unsigned int wptr;
unsigned int lost_irqs;
int is_open;
struct parport *pport;
struct pardevice *ppdevice;
int is_claimed;
unsigned int tx_mask = 1;
static unsigned int in(int offset)
static void out(int offset, int value)
static unsigned int lirc_get_timer(void)
static unsigned int lirc_get_signal(void)
static void lirc_on(void)
static void lirc_off(void)
static unsigned int init_lirc_timer(void)
static int lirc_claim(void)
static void rbuf_write(int signal)
static void irq_handler(void *blah)
static loff_t lirc_lseek(struct file *filep, loff_t offset, int orig)
static ssize_t lirc_read(struct file *filep, char *buf, size_t n, loff_t *ppos)
static ssize_t lirc_write(struct file *filep, const char *buf, size_t n,
loff_t *ppos)
static unsigned int lirc_poll(struct file *file, poll_table *wait)
static long lirc_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static int lirc_open(struct inode *node, struct file *filep)
static int lirc_close(struct inode *node, struct file *filep)
static const struct file_operations lirc_fops = ;
static int set_use_inc(void *data)
static void set_use_dec(void *data)
static struct lirc_driver driver = ;
static struct platform_device *lirc_parallel_dev;
static int __devinit lirc_parallel_probe(struct platform_device *dev)
static int __devexit lirc_parallel_remove(struct platform_device *dev)
static int lirc_parallel_suspend(struct platform_device *dev,
pm_message_t state)
static int lirc_parallel_resume(struct platform_device *dev)
static struct platform_driver lirc_parallel_driver = ;
static int pf(void *handle);
static void kf(void *handle);
static int pf(void *handle)
static void kf(void *handle)
static int __init lirc_parallel_init(void)
static void __exit lirc_parallel_exit(void)
module_init(lirc_parallel_init);
module_exit(lirc_parallel_exit);
MODULE_DESCRIPTION("Infrared receiver driver for parallel ports.");
MODULE_AUTHOR("Christoph Bartelmus");
MODULE_LICENSE("GPL");
module_param(io, int, S_IRUGO);
MODULE_PARM_DESC(io, "I/O address base (0x3bc, 0x378 or 0x278)");
module_param(irq, int, S_IRUGO);
MODULE_PARM_DESC(irq, "Interrupt (7 or 5)");
module_param(tx_mask, int, S_IRUGO);
MODULE_PARM_DESC(tx_maxk, "Transmitter mask (default: 0x01)");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging messages");
module_param(check_pselecd, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Check for printer (default: 0)");
