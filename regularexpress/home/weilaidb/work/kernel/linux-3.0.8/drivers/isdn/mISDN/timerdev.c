static DEFINE_MUTEX(mISDN_mutex);
static u_int	*debug;
struct mISDNtimerdev ;
struct mISDNtimer ;
static int
mISDN_open(struct inode *ino, struct file *filep)
static int
mISDN_close(struct inode *ino, struct file *filep)
static ssize_t
mISDN_read(struct file *filep, char __user *buf, size_t count, loff_t *off)
static unsigned int
mISDN_poll(struct file *filep, poll_table *wait)
static void
dev_expire_timer(unsigned long data)
static int
misdn_add_timer(struct mISDNtimerdev *dev, int timeout)
static int
misdn_del_timer(struct mISDNtimerdev *dev, int id)
static long
mISDN_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static const struct file_operations mISDN_fops = ;
static struct miscdevice mISDNtimer = ;
int
mISDN_inittimer(u_int *deb)
void mISDN_timer_cleanup(void)
