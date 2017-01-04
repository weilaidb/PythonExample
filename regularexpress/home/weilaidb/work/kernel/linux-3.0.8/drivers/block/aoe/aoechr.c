enum ;
struct aoe_chardev ;
enum ;
struct ErrMsg ;
static DEFINE_MUTEX(aoechr_mutex);
static struct ErrMsg emsgs[NMSG];
static int emsgs_head_idx, emsgs_tail_idx;
static struct completion emsgs_comp;
static spinlock_t emsgs_lock;
static int nblocked_emsgs_readers;
static struct class *aoe_class;
static struct aoe_chardev chardevs[] = ;
static int
discover(void)
static int
interfaces(const char __user *str, size_t size)
static int
revalidate(const char __user *str, size_t size)
void
aoechr_error(char *msg)
static ssize_t
aoechr_write(struct file *filp, const char __user *buf, size_t cnt, loff_t *offp)
static int
aoechr_open(struct inode *inode, struct file *filp)
static int
aoechr_rel(struct inode *inode, struct file *filp)
static ssize_t
aoechr_read(struct file *filp, char __user *buf, size_t cnt, loff_t *off)
static const struct file_operations aoe_fops = ;
static char *aoe_devnode(struct device *dev, mode_t *mode)
int __init
aoechr_init(void)
void
aoechr_exit(void)
