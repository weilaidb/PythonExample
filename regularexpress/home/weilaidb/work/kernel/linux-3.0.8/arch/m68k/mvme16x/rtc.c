#define RTC_VERSION		"1.00"
static const unsigned char days_in_mo[] =
;
static atomic_t rtc_ready = ATOMIC_INIT(1);
static long rtc_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int rtc_open(struct inode *inode, struct file *file)
static int rtc_release(struct inode *inode, struct file *file)
static const struct file_operations rtc_fops = ;
static struct miscdevice rtc_dev=
;
static int __init rtc_MK48T08_init(void)
module_init(rtc_MK48T08_init);
