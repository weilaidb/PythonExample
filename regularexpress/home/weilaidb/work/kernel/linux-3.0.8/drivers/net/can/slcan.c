static __initdata const char banner[] =
KERN_INFO "slcan: serial line CAN interface driver\n";
MODULE_ALIAS_LDISC(N_SLCAN);
MODULE_DESCRIPTION("serial line CAN interface");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Oliver Hartkopp <socketcan@hartkopp.net>");
#define SLCAN_MAGIC 0x53CA
static int maxdev = 10;
module_param(maxdev, int, 0);
MODULE_PARM_DESC(maxdev, "Maximum number of slcan interfaces");
#define SLC_MTU (sizeof("T1111222281122334455667788EA5F\r")+1)
struct slcan ;
static struct net_device **slcan_devs;
static int asc2nibble(char c)
static void slc_bump(struct slcan *sl)
static void slcan_unesc(struct slcan *sl, unsigned char s)
static void slc_encaps(struct slcan *sl, struct can_frame *cf)
static void slcan_write_wakeup(struct tty_struct *tty)
static netdev_tx_t slc_xmit(struct sk_buff *skb, struct net_device *dev)
static int slc_close(struct net_device *dev)
static int slc_open(struct net_device *dev)
static void slc_free_netdev(struct net_device *dev)
static const struct net_device_ops slc_netdev_ops = ;
static void slc_setup(struct net_device *dev)
static void slcan_receive_buf(struct tty_struct *tty,
const unsigned char *cp, char *fp, int count)
static void slc_sync(void)
static struct slcan *slc_alloc(dev_t line)
static int slcan_open(struct tty_struct *tty)
static void slcan_close(struct tty_struct *tty)
static int slcan_hangup(struct tty_struct *tty)
static int slcan_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static struct tty_ldisc_ops slc_ldisc = ;
static int __init slcan_init(void)
static void __exit slcan_exit(void)
module_init(slcan_init);
module_exit(slcan_exit);
