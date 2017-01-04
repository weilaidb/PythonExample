ulong if_used = 0;
static DEFINE_MUTEX(isdn_divert_mutex);
static struct divert_info *divert_info_head = NULL;
static struct divert_info *divert_info_tail = NULL;
static DEFINE_SPINLOCK(divert_info_lock);
static wait_queue_head_t rd_queue;
void
put_info_buffer(char *cp)
static ssize_t
isdn_divert_read(struct file *file, char __user *buf, size_t count, loff_t * off)
static ssize_t
isdn_divert_write(struct file *file, const char __user *buf, size_t count, loff_t * off)
static unsigned int
isdn_divert_poll(struct file *file, poll_table * wait)
static int
isdn_divert_open(struct inode *ino, struct file *filep)
static int
isdn_divert_close(struct inode *ino, struct file *filep)
static int isdn_divert_ioctl_unlocked(struct file *file, uint cmd, ulong arg)
static long isdn_divert_ioctl(struct file *file, uint cmd, ulong arg)
static const struct file_operations isdn_fops =
;
static struct proc_dir_entry *isdn_proc_entry = NULL;
static struct proc_dir_entry *isdn_divert_entry = NULL;
int
divert_dev_init(void)
int
divert_dev_deinit(void)
