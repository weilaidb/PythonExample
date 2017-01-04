#define _INLINE_ inline
#define SERIAL_MAX_NUM_LINES 1
#define SERIAL_TIMER_VALUE (20 * HZ)
static struct tty_driver *serial_driver;
static struct timer_list serial_timer;
static DEFINE_SPINLOCK(timer_lock);
int errno;
static int __simc (int a, int b, int c, int d, int e, int f) __attribute__((__noinline__));
static int __simc (int a, int b, int c, int d, int e, int f)
static char *serial_version = "0.1";
static char *serial_name = "ISS serial driver";
static void rs_poll(unsigned long);
static int rs_open(struct tty_struct *tty, struct file * filp)
static void rs_close(struct tty_struct *tty, struct file * filp)
static int rs_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static void rs_poll(unsigned long priv)
static int rs_put_char(struct tty_struct *tty, unsigned char ch)
static void rs_flush_chars(struct tty_struct *tty)
static int rs_write_room(struct tty_struct *tty)
static int rs_chars_in_buffer(struct tty_struct *tty)
static void rs_hangup(struct tty_struct *tty)
static void rs_wait_until_sent(struct tty_struct *tty, int timeout)
static int rs_proc_show(struct seq_file *m, void *v)
static int rs_proc_open(struct inode *inode, struct file *file)
static const struct file_operations rs_proc_fops = ;
static const struct tty_operations serial_ops = ;
int __init rs_init(void)
static __exit void rs_exit(void)
late_initcall(rs_init);
static void iss_console_write(struct console *co, const char *s, unsigned count)
static struct tty_driver* iss_console_device(struct console *c, int *index)
static struct console sercons = ;
static int __init iss_console_init(void)
console_initcall(iss_console_init);
