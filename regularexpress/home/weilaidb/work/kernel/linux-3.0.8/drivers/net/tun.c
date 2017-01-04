#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_NAME	"tun"
#define DRV_VERSION	"1.6"
#define DRV_DESCRIPTION	"Universal TUN/TAP device driver"
#define DRV_COPYRIGHT	"(C) 1999-2004 Max Krasnyansky <maxk@qualcomm.com>"
static int debug;
#define tun_debug(level, tun, fmt, args...)			\
do  while (0)
#define DBG1(level, fmt, args...)				\
do  while (0)
#define tun_debug(level, tun, fmt, args...)			\
do  while (0)
#define DBG1(level, fmt, args...)				\
do  while (0)
#define FLT_EXACT_COUNT 8
struct tap_filter ;
struct tun_file ;
struct tun_sock;
struct tun_struct ;
struct tun_sock ;
static inline struct tun_sock *tun_sk(struct sock *sk)
static int tun_attach(struct tun_struct *tun, struct file *file)
static void __tun_detach(struct tun_struct *tun)
static void tun_detach(struct tun_struct *tun)
static struct tun_struct *__tun_get(struct tun_file *tfile)
static struct tun_struct *tun_get(struct file *file)
static void tun_put(struct tun_struct *tun)
static void addr_hash_set(u32 *mask, const u8 *addr)
static unsigned int addr_hash_test(const u32 *mask, const u8 *addr)
static int update_filter(struct tap_filter *filter, void __user *arg)
static int run_filter(struct tap_filter *filter, const struct sk_buff *skb)
static int check_filter(struct tap_filter *filter, const struct sk_buff *skb)
static const struct ethtool_ops tun_ethtool_ops;
static void tun_net_uninit(struct net_device *dev)
static void tun_free_netdev(struct net_device *dev)
static int tun_net_open(struct net_device *dev)
static int tun_net_close(struct net_device *dev)
static netdev_tx_t tun_net_xmit(struct sk_buff *skb, struct net_device *dev)
static void tun_net_mclist(struct net_device *dev)
#define MIN_MTU 68
#define MAX_MTU 65535
static int
tun_net_change_mtu(struct net_device *dev, int new_mtu)
static u32 tun_net_fix_features(struct net_device *dev, u32 features)
static void tun_poll_controller(struct net_device *dev)
static const struct net_device_ops tun_netdev_ops = ;
static const struct net_device_ops tap_netdev_ops = ;
static void tun_net_init(struct net_device *dev)
static unsigned int tun_chr_poll(struct file *file, poll_table * wait)
static inline struct sk_buff *tun_alloc_skb(struct tun_struct *tun,
size_t prepad, size_t len,
size_t linear, int noblock)
static __inline__ ssize_t tun_get_user(struct tun_struct *tun,
const struct iovec *iv, size_t count,
int noblock)
static ssize_t tun_chr_aio_write(struct kiocb *iocb, const struct iovec *iv,
unsigned long count, loff_t pos)
static __inline__ ssize_t tun_put_user(struct tun_struct *tun,
struct sk_buff *skb,
const struct iovec *iv, int len)
static ssize_t tun_do_read(struct tun_struct *tun,
struct kiocb *iocb, const struct iovec *iv,
ssize_t len, int noblock)
static ssize_t tun_chr_aio_read(struct kiocb *iocb, const struct iovec *iv,
unsigned long count, loff_t pos)
static void tun_setup(struct net_device *dev)
static int tun_validate(struct nlattr *tb[], struct nlattr *data[])
static struct rtnl_link_ops tun_link_ops __read_mostly = ;
static void tun_sock_write_space(struct sock *sk)
static void tun_sock_destruct(struct sock *sk)
static int tun_sendmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len)
static int tun_recvmsg(struct kiocb *iocb, struct socket *sock,
struct msghdr *m, size_t total_len,
int flags)
static const struct proto_ops tun_socket_ops = ;
static struct proto tun_proto = ;
static int tun_flags(struct tun_struct *tun)
static ssize_t tun_show_flags(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t tun_show_owner(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t tun_show_group(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(tun_flags, 0444, tun_show_flags, NULL);
static DEVICE_ATTR(owner, 0444, tun_show_owner, NULL);
static DEVICE_ATTR(group, 0444, tun_show_group, NULL);
static int tun_set_iff(struct net *net, struct file *file, struct ifreq *ifr)
static int tun_get_iff(struct net *net, struct tun_struct *tun,
struct ifreq *ifr)
static int set_offload(struct tun_struct *tun, unsigned long arg)
static long __tun_chr_ioctl(struct file *file, unsigned int cmd,
unsigned long arg, int ifreq_len)
static long tun_chr_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static long tun_chr_compat_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int tun_chr_fasync(int fd, struct file *file, int on)
static int tun_chr_open(struct inode *inode, struct file * file)
static int tun_chr_close(struct inode *inode, struct file *file)
static const struct file_operations tun_fops = ;
static struct miscdevice tun_miscdev = ;
static int tun_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void tun_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static u32 tun_get_msglevel(struct net_device *dev)
static void tun_set_msglevel(struct net_device *dev, u32 value)
static const struct ethtool_ops tun_ethtool_ops = ;
static int __init tun_init(void)
static void tun_cleanup(void)
struct socket *tun_get_socket(struct file *file)
EXPORT_SYMBOL_GPL(tun_get_socket);
module_init(tun_init);
module_exit(tun_cleanup);
MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR(DRV_COPYRIGHT);
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(TUN_MINOR);
MODULE_ALIAS("devname:net/tun");
