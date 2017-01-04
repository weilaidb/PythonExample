#define DRIVER_NAME "iss-netdev"
#define ETH_MAX_PACKET 1500
#define ETH_HEADER_OTHER 14
#define ISS_NET_TIMER_VALUE (2 * HZ)
static DEFINE_SPINLOCK(opened_lock);
static LIST_HEAD(opened);
static DEFINE_SPINLOCK(devices_lock);
static LIST_HEAD(devices);
#define TRANSPORT_TUNTAP_NAME "tuntap"
#define TRANSPORT_TUNTAP_MTU ETH_MAX_PACKET
struct tuntap_info ;
struct iss_net_private ;
static int errno;
static int __simc (int a, int b, int c, int d, int e, int f) __attribute__((__noinline__));
static int __simc (int a, int b, int c, int d, int e, int f)
static int inline simc_open(char *file, int flags, int mode)
static int inline simc_close(int fd)
static int inline simc_ioctl(int fd, int request, void *arg)
static int inline simc_read(int fd, void *buf, size_t count)
static int inline simc_write(int fd, void *buf, size_t count)
static int inline simc_poll(int fd)
static char *split_if_spec(char *str, ...)
static void dev_ip_addr(void *d, char *buf, char *bin_buf)
static void inline set_ether_mac(void *d, unsigned char *addr)
static int tuntap_open(struct iss_net_private *lp)
static void tuntap_close(struct iss_net_private *lp)
static int tuntap_read (struct iss_net_private *lp, struct sk_buff **skb)
static int tuntap_write (struct iss_net_private *lp, struct sk_buff **skb)
unsigned short tuntap_protocol(struct sk_buff *skb)
static int tuntap_poll(struct iss_net_private *lp)
static int tuntap_probe(struct iss_net_private *lp, int index, char *init)
static int iss_net_rx(struct net_device *dev)
static int iss_net_poll(void)
static void iss_net_timer(unsigned long priv)
static int iss_net_open(struct net_device *dev)
static int iss_net_close(struct net_device *dev)
static int iss_net_start_xmit(struct sk_buff *skb, struct net_device *dev)
static struct net_device_stats *iss_net_get_stats(struct net_device *dev)
static void iss_net_set_multicast_list(struct net_device *dev)
static void iss_net_tx_timeout(struct net_device *dev)
static int iss_net_set_mac(struct net_device *dev, void *addr)
static int iss_net_change_mtu(struct net_device *dev, int new_mtu)
void iss_net_user_timer_expire(unsigned long _conn)
static struct platform_driver iss_net_driver = ;
static int driver_registered;
static const struct net_device_ops iss_netdev_ops = ;
static int iss_net_configure(int index, char *init)
struct list_head eth_cmd_line = LIST_HEAD_INIT(eth_cmd_line);
struct iss_net_init ;
#define ERR KERN_ERR "iss_net_setup: "
static int iss_net_setup(char *str)
#undef ERR
__setup("eth=", iss_net_setup);
static int iss_net_init(void)
module_init(iss_net_init);
