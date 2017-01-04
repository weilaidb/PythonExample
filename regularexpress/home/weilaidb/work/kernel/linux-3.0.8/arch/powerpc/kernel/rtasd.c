static DEFINE_SPINLOCK(rtasd_log_lock);
static DECLARE_WAIT_QUEUE_HEAD(rtas_log_wait);
static char *rtas_log_buf;
static unsigned long rtas_log_start;
static unsigned long rtas_log_size;
static int surveillance_timeout = -1;
static unsigned int rtas_error_log_max;
static unsigned int rtas_error_log_buffer_max;
static unsigned int event_scan;
static unsigned int rtas_event_scan_rate;
static int full_rtas_msgs = 0;
static int logging_enabled;
static int error_log_cnt;
static unsigned char logdata[RTAS_ERROR_LOG_MAX];
static char *rtas_type[] = ;
static char *rtas_event_type(int type)
static void printk_log_rtas(char *buf, int len)
static int log_rtas_len(char * buf)
void pSeries_log_error(char *buf, unsigned int err_type, int fatal)
static int rtas_log_open(struct inode * inode, struct file * file)
static int rtas_log_release(struct inode * inode, struct file * file)
static ssize_t rtas_log_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static unsigned int rtas_log_poll(struct file *file, poll_table * wait)
static const struct file_operations proc_rtas_log_operations = ;
static int enable_surveillance(int timeout)
static void do_event_scan(void)
static void rtas_event_scan(struct work_struct *w);
DECLARE_DELAYED_WORK(event_scan_work, rtas_event_scan);
static unsigned long event_scan_delay = 1*HZ;
static int first_pass = 1;
static void rtas_event_scan(struct work_struct *w)
static void retreive_nvram_error_log(void)
static void retreive_nvram_error_log(void)
static void start_event_scan(void)
static int __init rtas_init(void)
__initcall(rtas_init);
static int __init surveillance_setup(char *str)
__setup("surveillance=", surveillance_setup);
static int __init rtasmsgs_setup(char *str)
__setup("rtasmsgs=", rtasmsgs_setup);
