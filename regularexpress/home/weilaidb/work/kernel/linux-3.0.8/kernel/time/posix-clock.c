static void delete_clock(struct kref *kref);
static struct posix_clock *get_posix_clock(struct file *fp)
static void put_posix_clock(struct posix_clock *clk)
static ssize_t posix_clock_read(struct file *fp, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int posix_clock_poll(struct file *fp, poll_table *wait)
static int posix_clock_fasync(int fd, struct file *fp, int on)
static int posix_clock_mmap(struct file *fp, struct vm_area_struct *vma)
static long posix_clock_ioctl(struct file *fp,
unsigned int cmd, unsigned long arg)
static long posix_clock_compat_ioctl(struct file *fp,
unsigned int cmd, unsigned long arg)
static int posix_clock_open(struct inode *inode, struct file *fp)
static int posix_clock_release(struct inode *inode, struct file *fp)
static const struct file_operations posix_clock_file_operations = ;
int posix_clock_register(struct posix_clock *clk, dev_t devid)
EXPORT_SYMBOL_GPL(posix_clock_register);
static void delete_clock(struct kref *kref)
void posix_clock_unregister(struct posix_clock *clk)
EXPORT_SYMBOL_GPL(posix_clock_unregister);
struct posix_clock_desc ;
static int get_clock_desc(const clockid_t id, struct posix_clock_desc *cd)
static void put_clock_desc(struct posix_clock_desc *cd)
static int pc_clock_adjtime(clockid_t id, struct timex *tx)
static int pc_clock_gettime(clockid_t id, struct timespec *ts)
static int pc_clock_getres(clockid_t id, struct timespec *ts)
static int pc_clock_settime(clockid_t id, const struct timespec *ts)
static int pc_timer_create(struct k_itimer *kit)
static int pc_timer_delete(struct k_itimer *kit)
static void pc_timer_gettime(struct k_itimer *kit, struct itimerspec *ts)
static int pc_timer_settime(struct k_itimer *kit, int flags,
struct itimerspec *ts, struct itimerspec *old)
struct k_clock clock_posix_dynamic = ;
