#define RTC_VERSION		"1.12b"
static unsigned long rtc_port;
static int rtc_irq;
#undef	RTC_IRQ
static int rtc_has_irq = 1;
#define is_hpet_enabled()			0
#define hpet_set_alarm_time(hrs, min, sec)	0
#define hpet_set_periodic_freq(arg)		0
#define hpet_mask_rtc_irq_bit(arg)		0
#define hpet_set_rtc_irq_bit(arg)		0
#define hpet_rtc_timer_init()			do  while (0)
#define hpet_rtc_dropped_irq()			0
#define hpet_register_irq_handler(h)		()
#define hpet_unregister_irq_handler(h)		()
static irqreturn_t hpet_rtc_interrupt(int irq, void *dev_id)
static struct fasync_struct *rtc_async_queue;
static DECLARE_WAIT_QUEUE_HEAD(rtc_wait);
static void rtc_dropped_irq(unsigned long data);
static DEFINE_TIMER(rtc_irq_timer, rtc_dropped_irq, 0, 0);
static ssize_t rtc_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos);
static long rtc_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static void rtc_get_rtc_time(struct rtc_time *rtc_tm);
static unsigned int rtc_poll(struct file *file, poll_table *wait);
static void get_rtc_alm_time(struct rtc_time *alm_tm);
static void set_rtc_irq_bit_locked(unsigned char bit);
static void mask_rtc_irq_bit_locked(unsigned char bit);
static inline void set_rtc_irq_bit(unsigned char bit)
static void mask_rtc_irq_bit(unsigned char bit)
static int rtc_proc_open(struct inode *inode, struct file *file);
#define RTC_IS_OPEN		0x01
#define RTC_TIMER_ON		0x02
static unsigned long rtc_status;
static unsigned long rtc_freq;
static unsigned long rtc_irq_data;
static unsigned long rtc_max_user_freq = 64;
static DEFINE_SPINLOCK(rtc_task_lock);
static rtc_task_t *rtc_callback;
static unsigned long epoch = 1900;
static const unsigned char days_in_mo[] =
;
static inline unsigned char rtc_is_updating(void)
static irqreturn_t rtc_interrupt(int irq, void *dev_id)
static ctl_table rtc_table[] = ;
static ctl_table rtc_root[] = ;
static ctl_table dev_root[] = ;
static struct ctl_table_header *sysctl_header;
static int __init init_sysctl(void)
static void __exit cleanup_sysctl(void)
static ssize_t rtc_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int rtc_do_ioctl(unsigned int cmd, unsigned long arg, int kernel)
static long rtc_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int rtc_open(struct inode *inode, struct file *file)
static int rtc_fasync(int fd, struct file *filp, int on)
static int rtc_release(struct inode *inode, struct file *file)
static unsigned int rtc_poll(struct file *file, poll_table *wait)
int rtc_register(rtc_task_t *task)
EXPORT_SYMBOL(rtc_register);
int rtc_unregister(rtc_task_t *task)
EXPORT_SYMBOL(rtc_unregister);
int rtc_control(rtc_task_t *task, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(rtc_control);
static const struct file_operations rtc_fops = ;
static struct miscdevice rtc_dev = ;
static const struct file_operations rtc_proc_fops = ;
static resource_size_t rtc_size;
static struct resource * __init rtc_request_region(resource_size_t size)
static void rtc_release_region(void)
static int __init rtc_init(void)
static void __exit rtc_exit(void)
module_init(rtc_init);
module_exit(rtc_exit);
static void rtc_dropped_irq(unsigned long data)
static int rtc_proc_show(struct seq_file *seq, void *v)
static int rtc_proc_open(struct inode *inode, struct file *file)
static void rtc_get_rtc_time(struct rtc_time *rtc_tm)
static void get_rtc_alm_time(struct rtc_time *alm_tm)
static void mask_rtc_irq_bit_locked(unsigned char bit)
static void set_rtc_irq_bit_locked(unsigned char bit)
MODULE_AUTHOR("Paul Gortmaker");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(RTC_MINOR);
