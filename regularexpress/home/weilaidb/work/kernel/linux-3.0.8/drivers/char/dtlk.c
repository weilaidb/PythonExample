#define KERNEL
#define TRACE_TEXT(str) printk(str);
#define TRACE_RET printk(")")
#define TRACE_TEXT(str) ((void) 0)
#define TRACE_RET ((void) 0)
static DEFINE_MUTEX(dtlk_mutex);
static void dtlk_timer_tick(unsigned long data);
static int dtlk_major;
static int dtlk_port_lpc;
static int dtlk_port_tts;
static int dtlk_busy;
static int dtlk_has_indexing;
static unsigned int dtlk_portlist[] =
;
static wait_queue_head_t dtlk_process_list;
static DEFINE_TIMER(dtlk_timer, dtlk_timer_tick, 0, 0);
static ssize_t dtlk_read(struct file *, char __user *,
size_t nbytes, loff_t * ppos);
static ssize_t dtlk_write(struct file *, const char __user *,
size_t nbytes, loff_t * ppos);
static unsigned int dtlk_poll(struct file *, poll_table *);
static int dtlk_open(struct inode *, struct file *);
static int dtlk_release(struct inode *, struct file *);
static long dtlk_ioctl(struct file *file,
unsigned int cmd, unsigned long arg);
static const struct file_operations dtlk_fops =
;
static int dtlk_dev_probe(void);
static struct dtlk_settings *dtlk_interrogate(void);
static int dtlk_readable(void);
static char dtlk_read_lpc(void);
static char dtlk_read_tts(void);
static int dtlk_writeable(void);
static char dtlk_write_bytes(const char *buf, int n);
static char dtlk_write_tts(char);
static ssize_t dtlk_read(struct file *file, char __user *buf,
size_t count, loff_t * ppos)
static ssize_t dtlk_write(struct file *file, const char __user *buf,
size_t count, loff_t * ppos)
static unsigned int dtlk_poll(struct file *file, poll_table * wait)
static void dtlk_timer_tick(unsigned long data)
static long dtlk_ioctl(struct file *file,
unsigned int cmd,
unsigned long arg)
static int dtlk_open(struct inode *inode, struct file *file)
static int dtlk_release(struct inode *inode, struct file *file)
static int __init dtlk_init(void)
static void __exit dtlk_cleanup (void)
module_init(dtlk_init);
module_exit(dtlk_cleanup);
static int dtlk_readable(void)
static int dtlk_writeable(void)
static int __init dtlk_dev_probe(void)
static struct dtlk_settings *dtlk_interrogate(void)
static char dtlk_read_tts(void)
static char dtlk_read_lpc(void)
static char dtlk_write_bytes(const char *buf, int n)
static char dtlk_write_tts(char ch)
MODULE_LICENSE("GPL");
