#define DRIVER_DESC	"Raw serio driver"
MODULE_AUTHOR("Dmitry Torokhov <dtor@mail.ru>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define SERIO_RAW_QUEUE_LEN	64
struct serio_raw ;
struct serio_raw_list ;
static DEFINE_MUTEX(serio_raw_mutex);
static LIST_HEAD(serio_raw_list);
static unsigned int serio_raw_no;
static int serio_raw_fasync(int fd, struct file *file, int on)
static struct serio_raw *serio_raw_locate(int minor)
static int serio_raw_open(struct inode *inode, struct file *file)
static int serio_raw_cleanup(struct serio_raw *serio_raw)
static int serio_raw_release(struct inode *inode, struct file *file)
static int serio_raw_fetch_byte(struct serio_raw *serio_raw, char *c)
static ssize_t serio_raw_read(struct file *file, char __user *buffer, size_t count, loff_t *ppos)
static ssize_t serio_raw_write(struct file *file, const char __user *buffer, size_t count, loff_t *ppos)
static unsigned int serio_raw_poll(struct file *file, poll_table *wait)
static const struct file_operations serio_raw_fops = ;
static irqreturn_t serio_raw_interrupt(struct serio *serio, unsigned char data,
unsigned int dfl)
static int serio_raw_connect(struct serio *serio, struct serio_driver *drv)
static int serio_raw_reconnect(struct serio *serio)
static void serio_raw_disconnect(struct serio *serio)
static struct serio_device_id serio_raw_serio_ids[] = ;
MODULE_DEVICE_TABLE(serio, serio_raw_serio_ids);
static struct serio_driver serio_raw_drv = ;
static int __init serio_raw_init(void)
static void __exit serio_raw_exit(void)
module_init(serio_raw_init);
module_exit(serio_raw_exit);
