static int  irlan_eth_open(struct net_device *dev);
static int  irlan_eth_close(struct net_device *dev);
static netdev_tx_t  irlan_eth_xmit(struct sk_buff *skb,
struct net_device *dev);
static void irlan_eth_set_multicast_list( struct net_device *dev);
static const struct net_device_ops irlan_eth_netdev_ops = ;
static void irlan_eth_setup(struct net_device *dev)
struct net_device *alloc_irlandev(const char *name)
static int irlan_eth_open(struct net_device *dev)
static int irlan_eth_close(struct net_device *dev)
static netdev_tx_t irlan_eth_xmit(struct sk_buff *skb,
struct net_device *dev)
int irlan_eth_receive(void *instance, void *sap, struct sk_buff *skb)
void irlan_eth_flow_indication(void *instance, void *sap, LOCAL_FLOW flow)
#define HW_MAX_ADDRS 4
static void irlan_eth_set_multicast_list(struct net_device *dev)
