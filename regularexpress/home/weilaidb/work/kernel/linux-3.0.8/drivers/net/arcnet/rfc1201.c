MODULE_LICENSE("GPL");
#define VERSION "arcnet: RFC1201 \"standard\" (`a') encapsulation support loaded.\n"
static __be16 type_trans(struct sk_buff *skb, struct net_device *dev);
static void rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length);
static int build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr);
static int prepare_tx(struct net_device *dev, struct archdr *pkt, int length,
int bufnum);
static int continue_tx(struct net_device *dev, int bufnum);
static struct ArcProto rfc1201_proto =
;
static int __init arcnet_rfc1201_init(void)
static void __exit arcnet_rfc1201_exit(void)
module_init(arcnet_rfc1201_init);
module_exit(arcnet_rfc1201_exit);
static __be16 type_trans(struct sk_buff *skb, struct net_device *dev)
static void rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length)
static int build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr)
static void load_pkt(struct net_device *dev, struct arc_hardware *hard,
struct arc_rfc1201 *soft, int softlen, int bufnum)
static int prepare_tx(struct net_device *dev, struct archdr *pkt, int length,
int bufnum)
static int continue_tx(struct net_device *dev, int bufnum)
