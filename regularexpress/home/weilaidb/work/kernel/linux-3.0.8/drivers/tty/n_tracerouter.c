#define RECEIVE_ROOM	65536
#define DRIVERNAME	"n_tracerouter"
struct tracerouter_data ;
static struct tracerouter_data *tr_data;
static DEFINE_MUTEX(routelock);
static int n_tracerouter_open(struct tty_struct *tty)
static void n_tracerouter_close(struct tty_struct *tty)
static ssize_t n_tracerouter_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t nr)
static ssize_t n_tracerouter_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t nr)
static void n_tracerouter_receivebuf(struct tty_struct *tty,
const unsigned char *cp,
char *fp, int count)
static struct tty_ldisc_ops tty_ptirouter_ldisc = ;
static int __init n_tracerouter_init(void)
static void __exit n_tracerouter_exit(void)
module_init(n_tracerouter_init);
module_exit(n_tracerouter_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jay Freyensee");
MODULE_ALIAS_LDISC(N_TRACEROUTER);
MODULE_DESCRIPTION("Trace router ldisc driver");
