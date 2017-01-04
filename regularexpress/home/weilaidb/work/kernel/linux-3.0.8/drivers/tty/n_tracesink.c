#define RECEIVE_ROOM	65536
#define DRIVERNAME	"n_tracesink"
static struct tty_struct *this_tty;
static DEFINE_MUTEX(writelock);
static int n_tracesink_open(struct tty_struct *tty)
static void n_tracesink_close(struct tty_struct *tty)
static ssize_t n_tracesink_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t nr)
static ssize_t n_tracesink_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t nr)
void n_tracesink_datadrain(u8 *buf, int count)
EXPORT_SYMBOL_GPL(n_tracesink_datadrain);
static struct tty_ldisc_ops tty_n_tracesink = ;
static int __init n_tracesink_init(void)
static void __exit n_tracesink_exit(void)
module_init(n_tracesink_init);
module_exit(n_tracesink_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jay Freyensee");
MODULE_ALIAS_LDISC(N_TRACESINK);
MODULE_DESCRIPTION("Trace sink ldisc driver");
