struct per_user_data ;
static unsigned long *port_user;
static DEFINE_SPINLOCK(port_user_lock);
static inline struct per_user_data *get_port_user(unsigned port)
static inline void set_port_user(unsigned port, struct per_user_data *u)
static inline bool get_port_enabled(unsigned port)
static inline void set_port_enabled(unsigned port, bool enabled)
static irqreturn_t evtchn_interrupt(int irq, void *data)
static ssize_t evtchn_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t evtchn_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int evtchn_bind_to_user(struct per_user_data *u, int port)
static void evtchn_unbind_from_user(struct per_user_data *u, int port)
static long evtchn_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static unsigned int evtchn_poll(struct file *file, poll_table *wait)
static int evtchn_fasync(int fd, struct file *filp, int on)
static int evtchn_open(struct inode *inode, struct file *filp)
static int evtchn_release(struct inode *inode, struct file *filp)
static const struct file_operations evtchn_fops = ;
static struct miscdevice evtchn_miscdev = ;
static int __init evtchn_init(void)
static void __exit evtchn_cleanup(void)
module_init(evtchn_init);
module_exit(evtchn_cleanup);
MODULE_LICENSE("GPL");
