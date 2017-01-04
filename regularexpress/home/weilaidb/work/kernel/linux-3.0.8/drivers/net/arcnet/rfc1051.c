#define VERSION "arcnet: RFC1051 \"simple standard\" (`s') encapsulation support loaded.\n"
static __be16 type_trans(struct sk_buff *skb, struct net_device *dev);
static void rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length);
static int build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr);
static int prepare_tx(struct net_device *dev, struct archdr *pkt, int length,
int bufnum);
static struct ArcProto rfc1051_proto =
;
static int __init arcnet_rfc1051_init(void)
static void __exit arcnet_rfc1051_exit(void)
module_init(arcnet_rfc1051_init);
module_exit(arcnet_rfc1051_exit);
MODULE_LICENSE("GPL");
static __be16 type_trans(struct sk_buff *skb, struct net_device *dev)
static void rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length)
static int build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr)
static int prepare_tx(struct net_device *dev, struct archdr *pkt, int length,
int bufnum)
