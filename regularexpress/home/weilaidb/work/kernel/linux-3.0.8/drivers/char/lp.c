#undef LP_STATS
#define LP_NO 8
static DEFINE_MUTEX(lp_mutex);
static struct lp_struct lp_table[LP_NO];
static unsigned int lp_count = 0;
static struct class *lp_class;
static struct parport *console_registered;
#undef LP_DEBUG
#define LP_PREEMPT_REQUEST 1
#define LP_PARPORT_CLAIMED 2
#define r_dtr(x)	(parport_read_data(lp_table[(x)].dev->port))
#define r_str(x)	(parport_read_status(lp_table[(x)].dev->port))
#define w_ctr(x,y)	do  while (0)
#define w_dtr(x,y)	do  while (0)
static void lp_claim_parport_or_block(struct lp_struct *this_lp)
static void lp_release_parport(struct lp_struct *this_lp)
static int lp_preempt(void *handle)
static int lp_negotiate(struct parport * port, int mode)
static int lp_reset(int minor)
static void lp_error (int minor)
static int lp_check_status(int minor)
static int lp_wait_ready(int minor, int nonblock)
static ssize_t lp_write(struct file * file, const char __user * buf,
size_t count, loff_t *ppos)
static ssize_t lp_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static int lp_open(struct inode * inode, struct file * file)
static int lp_release(struct inode * inode, struct file * file)
static int lp_do_ioctl(unsigned int minor, unsigned int cmd,
unsigned long arg, void __user *argp)
static int lp_set_timeout(unsigned int minor, struct timeval *par_timeout)
static long lp_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long lp_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations lp_fops = ;
#define CONSOLE_LP 0
#define CONSOLE_LP_STRICT 1
static void lp_console_write (struct console *co, const char *s,
unsigned count)
static struct console lpcons = ;
static int parport_nr[LP_NO] = ;
static char *parport[LP_NO];
static int reset;
module_param_array(parport, charp, NULL, 0);
module_param(reset, bool, 0);
static int __init lp_setup (char *str)
static int lp_register(int nr, struct parport *port)
static void lp_attach (struct parport *port)
static void lp_detach (struct parport *port)
static struct parport_driver lp_driver = ;
static int __init lp_init (void)
static int __init lp_init_module (void)
static void lp_cleanup_module (void)
__setup("lp=", lp_setup);
module_init(lp_init_module);
module_exit(lp_cleanup_module);
MODULE_ALIAS_CHARDEV_MAJOR(LP_MAJOR);
MODULE_LICENSE("GPL");
