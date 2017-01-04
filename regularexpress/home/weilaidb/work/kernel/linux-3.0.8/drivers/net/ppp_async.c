#define PPP_VERSION	"2.4.2"
#define OBUFSIZE	4096
struct asyncppp ;
#define XMIT_WAKEUP	0
#define XMIT_FULL	1
#define XMIT_BUSY	2
#define SC_TOSS		1
#define SC_ESCAPE	2
#define SC_PREV_ERROR	4
#define SC_RCV_BITS	(SC_RCV_B7_1|SC_RCV_B7_0|SC_RCV_ODDP|SC_RCV_EVNP)
static int flag_time = HZ;
module_param(flag_time, int, 0);
MODULE_PARM_DESC(flag_time, "ppp_async: interval between flagged packets (in clock ticks)");
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_PPP);
static int ppp_async_encode(struct asyncppp *ap);
static int ppp_async_send(struct ppp_channel *chan, struct sk_buff *skb);
static int ppp_async_push(struct asyncppp *ap);
static void ppp_async_flush_output(struct asyncppp *ap);
static void ppp_async_input(struct asyncppp *ap, const unsigned char *buf,
char *flags, int count);
static int ppp_async_ioctl(struct ppp_channel *chan, unsigned int cmd,
unsigned long arg);
static void ppp_async_process(unsigned long arg);
static void async_lcp_peek(struct asyncppp *ap, unsigned char *data,
int len, int inbound);
static const struct ppp_channel_ops async_ops = ;
static DEFINE_RWLOCK(disc_data_lock);
static struct asyncppp *ap_get(struct tty_struct *tty)
static void ap_put(struct asyncppp *ap)
static int
ppp_asynctty_open(struct tty_struct *tty)
static void
ppp_asynctty_close(struct tty_struct *tty)
static int ppp_asynctty_hangup(struct tty_struct *tty)
static ssize_t
ppp_asynctty_read(struct tty_struct *tty, struct file *file,
unsigned char __user *buf, size_t count)
static ssize_t
ppp_asynctty_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t count)
static int
ppp_asynctty_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static unsigned int
ppp_asynctty_poll(struct tty_struct *tty, struct file *file, poll_table *wait)
static void
ppp_asynctty_receive(struct tty_struct *tty, const unsigned char *buf,
char *cflags, int count)
static void
ppp_asynctty_wakeup(struct tty_struct *tty)
static struct tty_ldisc_ops ppp_ldisc = ;
static int __init
ppp_async_init(void)
static int
ppp_async_ioctl(struct ppp_channel *chan, unsigned int cmd, unsigned long arg)
static void ppp_async_process(unsigned long arg)
#define PUT_BYTE(ap, buf, c, islcp)	do  while (0)
static int
ppp_async_encode(struct asyncppp *ap)
static int
ppp_async_send(struct ppp_channel *chan, struct sk_buff *skb)
static int
ppp_async_push(struct asyncppp *ap)
static void
ppp_async_flush_output(struct asyncppp *ap)
static inline int
scan_ordinary(struct asyncppp *ap, const unsigned char *buf, int count)
static void
process_input_packet(struct asyncppp *ap)
static void
ppp_async_input(struct asyncppp *ap, const unsigned char *buf,
char *flags, int count)
#define CONFREQ		1
#define CONFACK		2
#define LCP_MRU		1
#define LCP_ASYNCMAP	2
static void async_lcp_peek(struct asyncppp *ap, unsigned char *data,
int len, int inbound)
static void __exit ppp_async_cleanup(void)
module_init(ppp_async_init);
module_exit(ppp_async_cleanup);
