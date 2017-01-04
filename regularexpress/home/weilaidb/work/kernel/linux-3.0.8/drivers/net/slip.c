#define SL_CHECK_TRANSMIT
#define SLIP_VERSION	"0.8.4-NET3.019-NEWTTY"
static struct net_device **slip_devs;
static int slip_maxdev = SL_NRUNIT;
module_param(slip_maxdev, int, 0);
MODULE_PARM_DESC(slip_maxdev, "Maximum number of slip devices");
static int slip_esc(unsigned char *p, unsigned char *d, int len);
static void slip_unesc(struct slip *sl, unsigned char c);
static int slip_esc6(unsigned char *p, unsigned char *d, int len);
static void slip_unesc6(struct slip *sl, unsigned char c);
static void sl_keepalive(unsigned long sls);
static void sl_outfill(unsigned long sls);
static int sl_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int sl_alloc_bufs(struct slip *sl, int mtu)
static void sl_free_bufs(struct slip *sl)
static int sl_realloc_bufs(struct slip *sl, int mtu)
{
int err = 0;
struct net_device *dev = sl->dev;
unsigned char *xbuff, *rbuff;
unsigned char *cbuff;
int len = mtu * 2;
if (len < 576 * 2)
len = 576 * 2;
xbuff = kmalloc(len + 4, GFP_ATOMIC);
rbuff = kmalloc(len + 4, GFP_ATOMIC);
cbuff = kmalloc(len + 4, GFP_ATOMIC);
if (xbuff == NULL || rbuff == NULL || cbuff == NULL)
static inline void sl_lock(struct slip *sl)
static inline void sl_unlock(struct slip *sl)
static void sl_bump(struct slip *sl)
static void sl_encaps(struct slip *sl, unsigned char *icp, int len)
static void slip_write_wakeup(struct tty_struct *tty)
static void sl_tx_timeout(struct net_device *dev)
static netdev_tx_t
sl_xmit(struct sk_buff *skb, struct net_device *dev)
static int
sl_close(struct net_device *dev)
static int sl_open(struct net_device *dev)
static int sl_change_mtu(struct net_device *dev, int new_mtu)
static struct rtnl_link_stats64 *
sl_get_stats64(struct net_device *dev, struct rtnl_link_stats64 *stats)
static int sl_init(struct net_device *dev)
static void sl_uninit(struct net_device *dev)
static void sl_free_netdev(struct net_device *dev)
static const struct net_device_ops sl_netdev_ops = ;
static void sl_setup(struct net_device *dev)
static void slip_receive_buf(struct tty_struct *tty, const unsigned char *cp,
char *fp, int count)
static void sl_sync(void)
static struct slip *sl_alloc(dev_t line)
static int slip_open(struct tty_struct *tty)
static void slip_close(struct tty_struct *tty)
static int slip_hangup(struct tty_struct *tty)
static int slip_esc(unsigned char *s, unsigned char *d, int len)
static void slip_unesc(struct slip *sl, unsigned char s)
static int slip_esc6(unsigned char *s, unsigned char *d, int len)
static void slip_unesc6(struct slip *sl, unsigned char s)
static int slip_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static long slip_compat_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static int sl_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static struct tty_ldisc_ops sl_ldisc = ;
static int __init slip_init(void)
static void __exit slip_exit(void)
module_init(slip_init);
module_exit(slip_exit);
static void sl_outfill(unsigned long sls)
static void sl_keepalive(unsigned long sls)
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_SLIP);
