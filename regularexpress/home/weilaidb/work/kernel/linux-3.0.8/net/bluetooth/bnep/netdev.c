#define BNEP_TX_QUEUE_LEN 20
static int bnep_net_open(struct net_device *dev)
static int bnep_net_close(struct net_device *dev)
static void bnep_net_set_mc_list(struct net_device *dev)
static int bnep_net_set_mac_addr(struct net_device *dev, void *arg)
static void bnep_net_timeout(struct net_device *dev)
static inline int bnep_net_mc_filter(struct sk_buff *skb, struct bnep_session *s)
static inline u16 bnep_net_eth_proto(struct sk_buff *skb)
static inline int bnep_net_proto_filter(struct sk_buff *skb, struct bnep_session *s)
static netdev_tx_t bnep_net_xmit(struct sk_buff *skb,
struct net_device *dev)
static const struct net_device_ops bnep_netdev_ops = ;
void bnep_net_setup(struct net_device *dev)
