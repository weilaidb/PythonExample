#define PPP_VERSION	"2.4.2"
struct syncppp ;
#define XMIT_WAKEUP	0
#define XMIT_FULL	1
#define SC_RCV_BITS	(SC_RCV_B7_1|SC_RCV_B7_0|SC_RCV_ODDP|SC_RCV_EVNP)
#define PPPSYNC_MAX_RQLEN	32
static struct sk_buff* ppp_sync_txmunge(struct syncppp *ap, struct sk_buff *);
static int ppp_sync_send(struct ppp_channel *chan, struct sk_buff *skb);
static int ppp_sync_ioctl(struct ppp_channel *chan, unsigned int cmd,
unsigned long arg);
static void ppp_sync_process(unsigned long arg);
static int ppp_sync_push(struct syncppp *ap);
static void ppp_sync_flush_output(struct syncppp *ap);
static void ppp_sync_input(struct syncppp *ap, const unsigned char *buf,
char *flags, int count);
static const struct ppp_channel_ops sync_ops = ;
static void
ppp_print_hex (register __u8 * out, const __u8 * in, int count)
static void
ppp_print_char (register __u8 * out, const __u8 * in, int count)
static void
ppp_print_buffer (const char *name, const __u8 *buf, int count)
static DEFINE_RWLOCK(disc_data_lock);
static struct syncppp *sp_get(struct tty_struct *tty)
static void sp_put(struct syncppp *ap)
static int
ppp_sync_open(struct tty_struct *tty)
static void
ppp_sync_close(struct tty_struct *tty)
static int ppp_sync_hangup(struct tty_struct *tty)
static ssize_t
ppp_sync_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t count)
static ssize_t
ppp_sync_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t count)
static int
ppp_synctty_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static unsigned int
ppp_sync_poll(struct tty_struct *tty, struct file *file, poll_table *wait)
static void
ppp_sync_receive(struct tty_struct *tty, const unsigned char *buf,
char *cflags, int count)
static void
ppp_sync_wakeup(struct tty_struct *tty)
static struct tty_ldisc_ops ppp_sync_ldisc = ;
static int __init
ppp_sync_init(void)
static int
ppp_sync_ioctl(struct ppp_channel *chan, unsigned int cmd, unsigned long arg)
static void ppp_sync_process(unsigned long arg)
static struct sk_buff*
ppp_sync_txmunge(struct syncppp *ap, struct sk_buff *skb)
static int
ppp_sync_send(struct ppp_channel *chan, struct sk_buff *skb)
static int
ppp_sync_push(struct syncppp *ap)
static void
ppp_sync_flush_output(struct syncppp *ap)
static void
ppp_sync_input(struct syncppp *ap, const unsigned char *buf,
char *flags, int count)
static void __exit
ppp_sync_cleanup(void)
module_init(ppp_sync_init);
module_exit(ppp_sync_cleanup);
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_SYNC_PPP);
