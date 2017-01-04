#define VERSION "arcnet: v3.94 BETA 2007/02/08 - by Avery Pennarun et al.\n"
static void null_rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length);
static int null_build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr);
static int null_prepare_tx(struct net_device *dev, struct archdr *pkt,
int length, int bufnum);
static void arcnet_rx(struct net_device *dev, int bufnum);
struct ArcProto *arc_proto_map[256], *arc_proto_default,
*arc_bcast_proto, *arc_raw_proto;
static struct ArcProto arc_proto_null =
;
int arcnet_debug = ARCNET_DEBUG;
EXPORT_SYMBOL(arc_proto_map);
EXPORT_SYMBOL(arc_proto_default);
EXPORT_SYMBOL(arc_bcast_proto);
EXPORT_SYMBOL(arc_raw_proto);
EXPORT_SYMBOL(arcnet_unregister_proto);
EXPORT_SYMBOL(arcnet_debug);
EXPORT_SYMBOL(alloc_arcdev);
EXPORT_SYMBOL(arcnet_interrupt);
EXPORT_SYMBOL(arcnet_open);
EXPORT_SYMBOL(arcnet_close);
EXPORT_SYMBOL(arcnet_send_packet);
EXPORT_SYMBOL(arcnet_timeout);
static int arcnet_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len);
static int arcnet_rebuild_header(struct sk_buff *skb);
static int go_tx(struct net_device *dev);
static int debug = ARCNET_DEBUG;
module_param(debug, int, 0);
MODULE_LICENSE("GPL");
static int __init arcnet_init(void)
static void __exit arcnet_exit(void)
module_init(arcnet_init);
module_exit(arcnet_exit);
#if ARCNET_DEBUG_MAX & D_SKB
void arcnet_dump_skb(struct net_device *dev,
struct sk_buff *skb, char *desc)
EXPORT_SYMBOL(arcnet_dump_skb);
#if (ARCNET_DEBUG_MAX & (D_RX | D_TX))
static void arcnet_dump_packet(struct net_device *dev, int bufnum,
char *desc, int take_arcnet_lock)
#define arcnet_dump_packet(dev, bufnum, desc,take_arcnet_lock) do  while (0)
void arcnet_unregister_proto(struct ArcProto *proto)
static void release_arcbuf(struct net_device *dev, int bufnum)
static int get_arcbuf(struct net_device *dev)
static int choose_mtu(void)
static const struct header_ops arcnet_header_ops = ;
static const struct net_device_ops arcnet_netdev_ops = ;
static void arcdev_setup(struct net_device *dev)
struct net_device *alloc_arcdev(const char *name)
int arcnet_open(struct net_device *dev)
int arcnet_close(struct net_device *dev)
static int arcnet_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, const void *daddr,
const void *saddr, unsigned len)
static int arcnet_rebuild_header(struct sk_buff *skb)
netdev_tx_t arcnet_send_packet(struct sk_buff *skb,
struct net_device *dev)
static int go_tx(struct net_device *dev)
void arcnet_timeout(struct net_device *dev)
irqreturn_t arcnet_interrupt(int irq, void *dev_id)
static void arcnet_rx(struct net_device *dev, int bufnum)
static void null_rx(struct net_device *dev, int bufnum,
struct archdr *pkthdr, int length)
static int null_build_header(struct sk_buff *skb, struct net_device *dev,
unsigned short type, uint8_t daddr)
static int null_prepare_tx(struct net_device *dev, struct archdr *pkt,
int length, int bufnum)
