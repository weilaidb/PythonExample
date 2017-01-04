#define VERSION "arcnet: cap mode (`c') encapsulation support loaded.\n"
static void rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length)
static int build_header(struct sk_buff *skb,
struct net_device *dev,
unsigned short type,
uint8_t daddr)
static int prepare_tx(struct net_device *dev, struct archdr *pkt, int length,
int bufnum)
static int ack_tx(struct net_device *dev, int acked)
static struct ArcProto capmode_proto =
;
static void arcnet_cap_init(void)
static int __init capmode_module_init(void)
static void __exit capmode_module_exit(void)
module_init(capmode_module_init);
module_exit(capmode_module_exit);
MODULE_LICENSE("GPL");
