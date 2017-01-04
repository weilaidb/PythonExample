#define RTC_VERSION	"1.07"
static DEFINE_MUTEX(gen_rtc_mutex);
static DECLARE_WAIT_QUEUE_HEAD(gen_rtc_wait);
#define RTC_IS_OPEN		0x01
static unsigned char gen_rtc_status;
static unsigned long gen_rtc_irq_data;
static unsigned char days_in_mo[] =
;
static int irq_active;
static struct work_struct genrtc_task;
static struct timer_list timer_task;
static unsigned int oldsecs;
static int lostint;
static unsigned long tt_exp;
static void gen_rtc_timer(unsigned long data);
static volatile int stask_active;
static volatile int ttask_active;
static int stop_rtc_timers;
static DEFINE_SPINLOCK(gen_rtc_lock);
static void gen_rtc_interrupt(unsigned long arg);
static void genrtc_troutine(struct work_struct *work)
static void gen_rtc_timer(unsigned long data)
static void gen_rtc_interrupt(unsigned long arg)
static ssize_t gen_rtc_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int gen_rtc_poll(struct file *file,
struct poll_table_struct *wait)
static inline void gen_clear_rtc_irq_bit(unsigned char bit)
static inline int gen_set_rtc_irq_bit(unsigned char bit)
static int gen_rtc_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long gen_rtc_unlocked_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int gen_rtc_open(struct inode *inode, struct file *file)
static int gen_rtc_release(struct inode *inode, struct file *file)
static int gen_rtc_proc_output(char *buf)
static int gen_rtc_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int __init gen_rtc_proc_init(void)
static inline int gen_rtc_proc_init(void)
static const struct file_operations gen_rtc_fops = ;
static struct miscdevice rtc_gen_dev =
;
static int __init rtc_generic_init(void)
static void __exit rtc_generic_exit(void)
module_init(rtc_generic_init);
module_exit(rtc_generic_exit);
MODULE_AUTHOR("Richard Zidlicky");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(RTC_MINOR);
