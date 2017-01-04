#define AX_MTU		236
#define END             0300
#define ESC             0333
#define ESC_END         0334
#define ESC_ESC         0335
struct mkiss ;
static const unsigned short crc_flex_table[] = ;
static unsigned short calc_crc_flex(unsigned char *cp, int size)
static int check_crc_flex(unsigned char *cp, int size)
static int check_crc_16(unsigned char *cp, int size)
static int kiss_esc(unsigned char *s, unsigned char *d, int len)
static int kiss_esc_crc(unsigned char *s, unsigned char *d, unsigned short crc,
int len)
static void ax_bump(struct mkiss *ax)
static void kiss_unesc(struct mkiss *ax, unsigned char s)
static int ax_set_mac_address(struct net_device *dev, void *addr)
static void ax_changedmtu(struct mkiss *ax)
static void ax_encaps(struct net_device *dev, unsigned char *icp, int len)
static netdev_tx_t ax_xmit(struct sk_buff *skb, struct net_device *dev)
static int ax_open_dev(struct net_device *dev)
#if defined(CONFIG_AX25) || defined(CONFIG_AX25_MODULE)
static int ax_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static int ax_rebuild_header(struct sk_buff *skb)
static int ax_open(struct net_device *dev)
static int ax_close(struct net_device *dev)
static const struct header_ops ax_header_ops = ;
static const struct net_device_ops ax_netdev_ops = ;
static void ax_setup(struct net_device *dev)
static DEFINE_RWLOCK(disc_data_lock);
static struct mkiss *mkiss_get(struct tty_struct *tty)
static void mkiss_put(struct mkiss *ax)
static int crc_force = 0;
static int mkiss_open(struct tty_struct *tty)
static void mkiss_close(struct tty_struct *tty)
static int mkiss_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static long mkiss_compat_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static void mkiss_receive_buf(struct tty_struct *tty, const unsigned char *cp,
char *fp, int count)
static void mkiss_write_wakeup(struct tty_struct *tty)
static struct tty_ldisc_ops ax_ldisc = ;
static const char banner[] __initdata = KERN_INFO \
"mkiss: AX.25 Multikiss, Hans Albas PE1AYX\n";
static const char msg_regfail[] __initdata = KERN_ERR \
"mkiss: can't register line discipline (err = %d)\n";
static int __init mkiss_init_driver(void)
static const char msg_unregfail[] __exitdata = KERN_ERR \
"mkiss: can't unregister line discipline (err = %d)\n";
static void __exit mkiss_exit_driver(void)
MODULE_AUTHOR("Ralf Baechle DL5RB <ralf@linux-mips.org>");
MODULE_DESCRIPTION("KISS driver for AX.25 over TTYs");
module_param(crc_force, int, 0);
MODULE_PARM_DESC(crc_force, "crc [0 = auto | 1 = none | 2 = flexnet | 3 = smack]");
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_AX25);
module_init(mkiss_init_driver);
module_exit(mkiss_exit_driver);
