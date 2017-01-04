#define HDLC_MAGIC 0x239e
#undef VERSION
#define VERSION(major,minor,patch) (((((major)<<8)+(minor))<<8)+(patch))
#define MAX_HDLC_FRAME_SIZE 65535
#define DEFAULT_RX_BUF_COUNT 10
#define MAX_RX_BUF_COUNT 60
#define DEFAULT_TX_BUF_COUNT 3
struct n_hdlc_buf ;
#define	N_HDLC_BUF_SIZE	(sizeof(struct n_hdlc_buf) + maxframe)
struct n_hdlc_buf_list ;
struct n_hdlc ;
static void n_hdlc_buf_list_init(struct n_hdlc_buf_list *list);
static void n_hdlc_buf_put(struct n_hdlc_buf_list *list,
struct n_hdlc_buf *buf);
static struct n_hdlc_buf *n_hdlc_buf_get(struct n_hdlc_buf_list *list);
static struct n_hdlc *n_hdlc_alloc (void);
#define DEBUG_LEVEL_INFO	1
static int debuglevel;
static int maxframe = 4096;
static ssize_t n_hdlc_tty_read(struct tty_struct *tty, struct file *file,
__u8 __user *buf, size_t nr);
static ssize_t n_hdlc_tty_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t nr);
static int n_hdlc_tty_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg);
static unsigned int n_hdlc_tty_poll(struct tty_struct *tty, struct file *filp,
poll_table *wait);
static int n_hdlc_tty_open(struct tty_struct *tty);
static void n_hdlc_tty_close(struct tty_struct *tty);
static void n_hdlc_tty_receive(struct tty_struct *tty, const __u8 *cp,
char *fp, int count);
static void n_hdlc_tty_wakeup(struct tty_struct *tty);
#define bset(p,b)	((p)[(b) >> 5] |= (1 << ((b) & 0x1f)))
#define tty2n_hdlc(tty)	((struct n_hdlc *) ((tty)->disc_data))
#define n_hdlc2tty(n_hdlc)	((n_hdlc)->tty)
static void flush_rx_queue(struct tty_struct *tty)
static void flush_tx_queue(struct tty_struct *tty)
static struct tty_ldisc_ops n_hdlc_ldisc = ;
static void n_hdlc_release(struct n_hdlc *n_hdlc)
static void n_hdlc_tty_close(struct tty_struct *tty)
static int n_hdlc_tty_open (struct tty_struct *tty)
static void n_hdlc_send_frames(struct n_hdlc *n_hdlc, struct tty_struct *tty)
static void n_hdlc_tty_wakeup(struct tty_struct *tty)
static void n_hdlc_tty_receive(struct tty_struct *tty, const __u8 *data,
char *flags, int count)
static ssize_t n_hdlc_tty_read(struct tty_struct *tty, struct file *file,
__u8 __user *buf, size_t nr)
static ssize_t n_hdlc_tty_write(struct tty_struct *tty, struct file *file,
const unsigned char *data, size_t count)
static int n_hdlc_tty_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static unsigned int n_hdlc_tty_poll(struct tty_struct *tty, struct file *filp,
poll_table *wait)
static struct n_hdlc *n_hdlc_alloc(void)
static void n_hdlc_buf_list_init(struct n_hdlc_buf_list *list)
static void n_hdlc_buf_put(struct n_hdlc_buf_list *list,
struct n_hdlc_buf *buf)
static struct n_hdlc_buf* n_hdlc_buf_get(struct n_hdlc_buf_list *list)
static char hdlc_banner[] __initdata =
KERN_INFO "HDLC line discipline maxframe=%u\n";
static char hdlc_register_ok[] __initdata =
KERN_INFO "N_HDLC line discipline registered.\n";
static char hdlc_register_fail[] __initdata =
KERN_ERR "error registering line discipline: %d\n";
static char hdlc_init_fail[] __initdata =
KERN_INFO "N_HDLC: init failure %d\n";
static int __init n_hdlc_init(void)
static char hdlc_unregister_ok[] __exitdata =
KERN_INFO "N_HDLC: line discipline unregistered\n";
static char hdlc_unregister_fail[] __exitdata =
KERN_ERR "N_HDLC: can't unregister line discipline (err = %d)\n";
static void __exit n_hdlc_exit(void)
module_init(n_hdlc_init);
module_exit(n_hdlc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Paul Fulghum paulkf@microgate.com");
module_param(debuglevel, int, 0);
module_param(maxframe, int, 0);
MODULE_ALIAS_LDISC(N_HDLC);
