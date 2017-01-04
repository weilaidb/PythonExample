#undef DEBUG_HARD_HEADER
#define CISCO_MULTICAST		0x8F
#define CISCO_UNICAST		0x0F
#define CISCO_KEEPALIVE		0x8035
#define CISCO_SYS_INFO		0x2000
#define CISCO_ADDR_REQ		0
#define CISCO_ADDR_REPLY	1
#define CISCO_KEEPALIVE_REQ	2
struct hdlc_header __packed;
struct cisco_packet __packed;
#define	CISCO_PACKET_LEN	18
#define	CISCO_BIG_PACKET_LEN	20
struct cisco_state ;
static int cisco_ioctl(struct net_device *dev, struct ifreq *ifr);
static inline struct cisco_state* state(hdlc_device *hdlc)
static int cisco_hard_header(struct sk_buff *skb, struct net_device *dev,
u16 type, const void *daddr, const void *saddr,
unsigned int len)
static void cisco_keepalive_send(struct net_device *dev, u32 type,
__be32 par1, __be32 par2)
static __be16 cisco_type_trans(struct sk_buff *skb, struct net_device *dev)
static int cisco_rx(struct sk_buff *skb)
static void cisco_timer(unsigned long arg)
static void cisco_start(struct net_device *dev)
static void cisco_stop(struct net_device *dev)
static struct hdlc_proto proto = ;
static const struct header_ops cisco_header_ops = ;
static int cisco_ioctl(struct net_device *dev, struct ifreq *ifr)
static int __init mod_init(void)
static void __exit mod_exit(void)
module_init(mod_init);
module_exit(mod_exit);
MODULE_AUTHOR("Krzysztof Halasa <khc@pm.waw.pl>");
MODULE_DESCRIPTION("Cisco HDLC protocol support for generic HDLC");
MODULE_LICENSE("GPL v2");
