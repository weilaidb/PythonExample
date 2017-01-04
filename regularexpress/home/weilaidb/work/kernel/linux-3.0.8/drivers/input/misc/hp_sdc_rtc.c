MODULE_AUTHOR("Brian S. Julin <bri@calyx.com>");
MODULE_DESCRIPTION("HP i8042 SDC + MSM-58321 RTC Driver");
MODULE_LICENSE("Dual BSD/GPL");
#define RTC_VERSION "1.10d"
static DEFINE_MUTEX(hp_sdc_rtc_mutex);
static unsigned long epoch = 2000;
static struct semaphore i8042tregs;
static hp_sdc_irqhook hp_sdc_rtc_isr;
static struct fasync_struct *hp_sdc_rtc_async_queue;
static DECLARE_WAIT_QUEUE_HEAD(hp_sdc_rtc_wait);
static ssize_t hp_sdc_rtc_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos);
static long hp_sdc_rtc_unlocked_ioctl(struct file *file,
unsigned int cmd, unsigned long arg);
static unsigned int hp_sdc_rtc_poll(struct file *file, poll_table *wait);
static int hp_sdc_rtc_open(struct inode *inode, struct file *file);
static int hp_sdc_rtc_fasync (int fd, struct file *filp, int on);
static int hp_sdc_rtc_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data);
static void hp_sdc_rtc_isr (int irq, void *dev_id,
uint8_t status, uint8_t data)
static int hp_sdc_rtc_do_read_bbrtc (struct rtc_time *rtctm)
static int hp_sdc_rtc_read_bbrtc (struct rtc_time *rtctm)
static int64_t hp_sdc_rtc_read_i8042timer (uint8_t loadcmd, int numreg)
static inline int hp_sdc_rtc_read_rt(struct timeval *res)
static inline int hp_sdc_rtc_read_fhs(struct timeval *res)
static inline int hp_sdc_rtc_read_mt(struct timeval *res)
static inline int hp_sdc_rtc_read_dt(struct timeval *res)
static inline int hp_sdc_rtc_read_ct(struct timeval *res)
static int hp_sdc_rtc_set_rt (struct timeval *setto)
static int hp_sdc_rtc_set_fhs (struct timeval *setto)
#define hp_sdc_rtc_set_mt (setto) \
hp_sdc_rtc_set_i8042timer(setto, HP_SDC_CMD_SET_MT)
#define hp_sdc_rtc_set_dt (setto) \
hp_sdc_rtc_set_i8042timer(setto, HP_SDC_CMD_SET_DT)
#define hp_sdc_rtc_set_ct (setto) \
hp_sdc_rtc_set_i8042timer(setto, HP_SDC_CMD_SET_CT)
static int hp_sdc_rtc_set_i8042timer (struct timeval *setto, uint8_t setcmd)
static ssize_t hp_sdc_rtc_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int hp_sdc_rtc_poll(struct file *file, poll_table *wait)
static int hp_sdc_rtc_open(struct inode *inode, struct file *file)
static int hp_sdc_rtc_fasync (int fd, struct file *filp, int on)
static int hp_sdc_rtc_proc_output (char *buf)
static int hp_sdc_rtc_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int hp_sdc_rtc_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long hp_sdc_rtc_unlocked_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations hp_sdc_rtc_fops = ;
static struct miscdevice hp_sdc_rtc_dev = ;
static int __init hp_sdc_rtc_init(void)
static void __exit hp_sdc_rtc_exit(void)
module_init(hp_sdc_rtc_init);
module_exit(hp_sdc_rtc_exit);
