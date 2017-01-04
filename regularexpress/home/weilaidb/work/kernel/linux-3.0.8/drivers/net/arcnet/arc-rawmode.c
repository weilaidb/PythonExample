#define VERSION "arcnet: raw mode (`r') encapsulation support loaded.\n"
static void rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length);
static int build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr);
static int prepare_tx(struct net_device *dev, struct archdr *pkt, int length,
int bufnum);
static struct ArcProto rawmode_proto =
;
static int __init arcnet_raw_init(void)
static void __exit arcnet_raw_exit(void)
module_init(arcnet_raw_init);
module_exit(arcnet_raw_exit);
MODULE_LICENSE("GPL");
static void rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length)
static int build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr)
static int prepare_tx(struct net_device *dev, struct archdr *pkt, int length,
int bufnum)
