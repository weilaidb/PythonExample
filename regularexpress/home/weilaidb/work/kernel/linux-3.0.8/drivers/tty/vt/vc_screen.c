#undef attr
#undef org
#undef addr
#define HEADER_SIZE	4
#define CON_BUF_SIZE (CONFIG_BASE_SMALL ? 256 : PAGE_SIZE)
struct vcs_poll_data ;
static int
vcs_notifier(struct notifier_block *nb, unsigned long code, void *_param)
static void
vcs_poll_data_free(struct vcs_poll_data *poll)
static struct vcs_poll_data *
vcs_poll_data_get(struct file *file)
static struct vc_data*
vcs_vc(struct inode *inode, int *viewed)
static int
vcs_size(struct inode *inode)
static loff_t vcs_lseek(struct file *file, loff_t offset, int orig)
static ssize_t
vcs_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static ssize_t
vcs_write(struct file *file, const char __user *buf, size_t count, loff_t *ppos)
static unsigned int
vcs_poll(struct file *file, poll_table *wait)
static int
vcs_fasync(int fd, struct file *file, int on)
static int
vcs_open(struct inode *inode, struct file *filp)
static int vcs_release(struct inode *inode, struct file *file)
static const struct file_operations vcs_fops = ;
static struct class *vc_class;
void vcs_make_sysfs(int index)
void vcs_remove_sysfs(int index)
int __init vcs_init(void)
