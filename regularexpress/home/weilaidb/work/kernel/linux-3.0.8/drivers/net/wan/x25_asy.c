static struct net_device **x25_asy_devs;
static int x25_asy_maxdev = SL_NRUNIT;
module_param(x25_asy_maxdev, int, 0);
MODULE_LICENSE("GPL");
static int x25_asy_esc(unsigned char *p, unsigned char *d, int len);
static void x25_asy_unesc(struct x25_asy *sl, unsigned char c);
static void x25_asy_setup(struct net_device *dev);
static struct x25_asy *x25_asy_alloc(void)
static void x25_asy_free(struct x25_asy *sl)
static int x25_asy_change_mtu(struct net_device *dev, int newmtu)
static inline void x25_asy_lock(struct x25_asy *sl)
static inline void x25_asy_unlock(struct x25_asy *sl)
static void x25_asy_bump(struct x25_asy *sl)
static void x25_asy_encaps(struct x25_asy *sl, unsigned char *icp, int len)
static void x25_asy_write_wakeup(struct tty_struct *tty)
static void x25_asy_timeout(struct net_device *dev)
static netdev_tx_t x25_asy_xmit(struct sk_buff *skb,
struct net_device *dev)
static int x25_asy_data_indication(struct net_device *dev, struct sk_buff *skb)
static void x25_asy_data_transmit(struct net_device *dev, struct sk_buff *skb)
static void x25_asy_connected(struct net_device *dev, int reason)
static void x25_asy_disconnected(struct net_device *dev, int reason)
static struct lapb_register_struct x25_asy_callbacks = ;
static int x25_asy_open(struct net_device *dev)
static int x25_asy_close(struct net_device *dev)
static void x25_asy_receive_buf(struct tty_struct *tty,
const unsigned char *cp, char *fp, int count)
static int x25_asy_open_tty(struct tty_struct *tty)
static void x25_asy_close_tty(struct tty_struct *tty)
static int x25_asy_esc(unsigned char *s, unsigned char *d, int len)
static void x25_asy_unesc(struct x25_asy *sl, unsigned char s)
static int x25_asy_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd,  unsigned long arg)
static long x25_asy_compat_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd,  unsigned long arg)
static int x25_asy_open_dev(struct net_device *dev)
static const struct net_device_ops x25_asy_netdev_ops = ;
static void x25_asy_setup(struct net_device *dev)
static struct tty_ldisc_ops x25_ldisc = ;
static int __init init_x25_asy(void)
static void __exit exit_x25_asy(void)
module_init(init_x25_asy);
module_exit(exit_x25_asy);
