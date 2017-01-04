static dev_t rtc_devt;
#define RTC_DEV_MAX 16
static int rtc_dev_open(struct inode *inode, struct file *file)
static void rtc_uie_task(struct work_struct *work)
static void rtc_uie_timer(unsigned long data)
static int clear_uie(struct rtc_device *rtc)
static int set_uie(struct rtc_device *rtc)
int rtc_dev_update_irq_enable_emul(struct rtc_device *rtc, unsigned int enabled)
EXPORT_SYMBOL(rtc_dev_update_irq_enable_emul);
static ssize_t
rtc_dev_read(struct file *file, char __user *buf, size_t count, loff_t *ppos)
static unsigned int rtc_dev_poll(struct file *file, poll_table *wait)
static long rtc_dev_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int rtc_dev_fasync(int fd, struct file *file, int on)
static int rtc_dev_release(struct inode *inode, struct file *file)
static const struct file_operations rtc_dev_fops = ;
void rtc_dev_prepare(struct rtc_device *rtc)
void rtc_dev_add_device(struct rtc_device *rtc)
void rtc_dev_del_device(struct rtc_device *rtc)
void __init rtc_dev_init(void)
void __exit rtc_dev_exit(void)
