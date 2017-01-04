#define KMSG_COMPONENT "tape"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define TAPE_DBF_AREA	tape_core_dbf
#define TAPECHAR_MAJOR		0
static ssize_t tapechar_read(struct file *, char __user *, size_t, loff_t *);
static ssize_t tapechar_write(struct file *, const char __user *, size_t, loff_t *);
static int tapechar_open(struct inode *,struct file *);
static int tapechar_release(struct inode *,struct file *);
static long tapechar_ioctl(struct file *, unsigned int, unsigned long);
static long tapechar_compat_ioctl(struct file *, unsigned int, unsigned long);
static const struct file_operations tape_fops =
;
static int tapechar_major = TAPECHAR_MAJOR;
int
tapechar_setup_device(struct tape_device * device)
void
tapechar_cleanup_device(struct tape_device *device)
static int
tapechar_check_idalbuffer(struct tape_device *device, size_t block_size)
static ssize_t
tapechar_read(struct file *filp, char __user *data, size_t count, loff_t *ppos)
static ssize_t
tapechar_write(struct file *filp, const char __user *data, size_t count, loff_t *ppos)
static int
tapechar_open (struct inode *inode, struct file *filp)
static int
tapechar_release(struct inode *inode, struct file *filp)
static int
__tapechar_ioctl(struct tape_device *device,
unsigned int no, unsigned long data)
static long
tapechar_ioctl(struct file *filp, unsigned int no, unsigned long data)
static long
tapechar_compat_ioctl(struct file *filp, unsigned int no, unsigned long data)
int
tapechar_init (void)
void
tapechar_exit(void)
