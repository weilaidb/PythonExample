#define GARP_ADDR_MIN	0x20
#define GARP_ADDR_MAX	0x2F
#define GARP_ADDR_RANGE	(GARP_ADDR_MAX - GARP_ADDR_MIN)
static const struct stp_proto __rcu *garp_protos[GARP_ADDR_RANGE + 1] __read_mostly;
static const struct stp_proto __rcu *stp_proto __read_mostly;
static struct llc_sap *sap __read_mostly;
static unsigned int sap_registered;
static DEFINE_MUTEX(stp_proto_mutex);
static int stp_pdu_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
int stp_proto_register(const struct stp_proto *proto)
EXPORT_SYMBOL_GPL(stp_proto_register);
void stp_proto_unregister(const struct stp_proto *proto)
EXPORT_SYMBOL_GPL(stp_proto_unregister);
MODULE_LICENSE("GPL");
